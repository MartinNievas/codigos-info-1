#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "cJSON.h"
#include <curl/curl.h>

typedef struct {
  char* fact;
  unsigned int length;
}cat_response_t;

typedef struct string_buffer_s
{
  char * ptr;
  size_t len;
} string_buffer_t;

static void string_buffer_initialize( string_buffer_t * sb )
{
  sb->len = 0;
  sb->ptr = malloc(sb->len+1); /* will be grown as needed by the realloc belove */
  sb->ptr[0] = '\0'; /* no data at this point */
}

static void string_buffer_finish( string_buffer_t * sb )
{
  free(sb->ptr);
  sb->len = 0;
  sb->ptr = NULL;
}

static size_t string_buffer_callback( void * buf, size_t size, size_t nmemb, void * data )
{
  string_buffer_t * sb = data;
  size_t new_len = sb->len + size * nmemb;
  sb->ptr = realloc( sb->ptr, new_len + 1 );
  memcpy( sb->ptr + sb->len, buf, size * nmemb );
  sb->ptr[ new_len ] = '\0';
  sb->len = new_len;
  return size * nmemb;
}

static size_t header_callback(char * buf, size_t size, size_t nmemb, void * data )
{
  return string_buffer_callback( buf, size, nmemb, data );
}

static size_t write_callback( void * buf, size_t size, size_t nmemb, void * data )
{
  return string_buffer_callback( buf, size, nmemb, data );
}

int main( int argc, char * argv[] )
{
  CURL * curl;
  CURLcode res;
  string_buffer_t strbuf;
  char * myurl = argv[1]; // Esta URL viene de stdin
  //"https://api.telegram.org/bot ......bot_token...../sendMessage?chat_id=....&text=Hola%20Luis";
  string_buffer_initialize( &strbuf );

  /* Inicializar la sesión de curl */

  curl = curl_easy_init();
  if(!curl)
  {
    fprintf(stderr, "Fatal: curl_easy_init() error.\n");
    string_buffer_finish( &strbuf );
    return EXIT_FAILURE;
  }

  /* Especificar la URL a consultar */
  curl_easy_setopt(curl, CURLOPT_URL, myurl );
  curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L );

  /* Enviar la información de respuesta a la función */
  curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback );

  /* Enviar la información de respuesta del encabezado a la función */
  // curl_easy_setopt(curl, CURLOPT_HEADERFUNCTION, header_callback );

  /* Preparamos el callback para cuando la API responda */
  curl_easy_setopt(curl, CURLOPT_WRITEDATA, &strbuf );
  // curl_easy_setopt(curl, CURLOPT_HEADERDATA, &strbuf );

  // curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
  // curl_easy_setopt(curl, CURLOPT_HEADER, 1L);
  /* get it! */
  res = curl_easy_perform(curl);
  /* check for errors */
  if( res != CURLE_OK )
  {
    fprintf( stderr, "Request failed: curl_easy_perform(): %s\n", curl_easy_strerror(res) );
    curl_easy_cleanup( curl );
    string_buffer_finish( &strbuf );
    return EXIT_FAILURE;
  }

  /*--------------------------------------------------------------------------------
   * En strbuf.ptr tenemos la cadena con la respuesta desde la API
   *
   * Tenemos que procesar estos datos. Completar desde acá
   *--------------------------------------------------------------------------------
   */
  cat_response_t respuesta;

  // Parseamos la respuesta con la biblioteca cJSON
  // Con esto podemos acceder a los miembros más fácilmente
  cJSON *json = cJSON_Parse(strbuf.ptr);

  // Obtenemos el campo "fact" de la respuesta json
  cJSON *frase = NULL;
  frase = cJSON_GetObjectItemCaseSensitive(json, "fact");

  // Obtenemos el campo "length" de la respuesta json
  cJSON *length = NULL;
  length = cJSON_GetObjectItemCaseSensitive(json, "length");

  // Convertimos la respuesta a string para imprimir
  char *frase_cadena = cJSON_Print(frase);
  printf("La frase es: %s\n", frase_cadena);

  char *length_cadena = cJSON_Print(length);
  printf("La longitud es: %s\n", length_cadena);


  /*--------------------------------------------------------------------------------
   * Hasta acá
   *--------------------------------------------------------------------------------
   * */


  /* Limpia el buffer */
  curl_easy_cleanup( curl );
  string_buffer_finish( &strbuf );
  return EXIT_SUCCESS;
}
/* eof */
