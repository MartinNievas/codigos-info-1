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
  CURL * curl_api1;
  CURL * curl_api2;
  CURLcode res;
  string_buffer_t strbuf;
  string_buffer_t strbuf2;
  char * url_api1 = argv[1]; // Esta URL viene de stdin
  char * url_api2 = argv[2];
  //"https://api.telegram.org/bot ......bot_token...../sendMessage?chat_id=....&text=Hola%20Luis";
  string_buffer_initialize( &strbuf );
  string_buffer_initialize( &strbuf2 );

  /* Inicializar la sesión de curl_api1 */

  curl_api1 = curl_easy_init();
  if(!curl_api1)
  {
    fprintf(stderr, "Fatal: curl_easy_init() error.\n");
    string_buffer_finish( &strbuf );
    return EXIT_FAILURE;
  }

  curl_api2 = curl_easy_init();
  if(!curl_api2)
  {
    fprintf(stderr, "Fatal: curl_easy_init() error.\n");
    string_buffer_finish( &strbuf );
    return EXIT_FAILURE;
  }

  /* Especificar la URL a consultar */
  curl_easy_setopt(curl_api1, CURLOPT_URL, url_api1 );
  curl_easy_setopt(curl_api1, CURLOPT_FOLLOWLOCATION, 1L );

  /* Enviar la información de respuesta a la función */
  curl_easy_setopt(curl_api1, CURLOPT_WRITEFUNCTION, write_callback );

  /* Enviar la información de respuesta del encabezado a la función */
  // curl_easy_setopt(curl_api1, CURLOPT_HEADERFUNCTION, header_callback );

  /* Preparamos el callback para cuando la API responda */
  curl_easy_setopt(curl_api1, CURLOPT_WRITEDATA, &strbuf );
  // curl_easy_setopt(curl_api1, CURLOPT_HEADERDATA, &strbuf );

  // curl_easy_setopt(curl_api1, CURLOPT_VERBOSE, 1L);
  // curl_easy_setopt(curl_api1, CURLOPT_HEADER, 1L);
  /* get it! */
  res = curl_easy_perform(curl_api1);
  /* check for errors */
  if( res != CURLE_OK )
  {
    fprintf( stderr, "Request failed: curl_easy_perform(): %s\n", curl_easy_strerror(res) );
    curl_easy_cleanup( curl_api1 );
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


  string_buffer_initialize( &strbuf2 );
  char mensaje_enviar[1000] = {0};
  strcat(mensaje_enviar, url_api2);
  strcat(mensaje_enviar, frase_cadena);

  // Acá empieza el mensaje para la API de telegram
  curl_easy_setopt(curl_api2, CURLOPT_URL, mensaje_enviar );
  curl_easy_setopt(curl_api2, CURLOPT_WRITEDATA, &strbuf2 );
  curl_easy_setopt(curl_api2, CURLOPT_WRITEFUNCTION, write_callback );

  res = curl_easy_perform(curl_api2);
  /* check for errors */
  if( res != CURLE_OK )
  {
    fprintf( stderr, "Request failed: curl_easy_perform(): %s\n", curl_easy_strerror(res) );
    curl_easy_cleanup( curl_api2 );
    string_buffer_finish( &strbuf2 );
    return EXIT_FAILURE;
  }

  /*--------------------------------------------------------------------------------
   * Hasta acá
   *--------------------------------------------------------------------------------
   * */

  /* Limpia el buffer */
  curl_easy_cleanup( curl_api1 );
  curl_easy_cleanup( curl_api2 );
  string_buffer_finish( &strbuf );
  string_buffer_finish( &strbuf2 );
  return EXIT_SUCCESS;
}
/* eof */
