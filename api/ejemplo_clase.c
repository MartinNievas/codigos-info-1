#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <curl/curl.h>
// Comentar para compilar
#include "secrets.h"
#include "cJSON.h"

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
  CURL * curl2;
  CURLcode res;
  string_buffer_t strbuf;
  string_buffer_t strbuf2;
#ifndef BOT_TOKEN
  char * api_telegram_consulta = "https://api.telegram.org/bot<token:telegram>/getUpdates";
#endif
  char * api_cats = "https://catfact.ninja/fact";
  string_buffer_initialize( &strbuf );

  /* Inicializar la sesión de curl */

  curl = curl_easy_init();
  if(!curl)
  {
    fprintf(stderr, "Fatal: curl_easy_init() error.\n");
    string_buffer_finish( &strbuf );
    return EXIT_FAILURE;
  }

  curl2 = curl_easy_init();
  if(!curl2)
  {
    fprintf(stderr, "Fatal: curl_easy_init() error.\n");
    string_buffer_finish( &strbuf2 );
    return EXIT_FAILURE;
  }

  while(1){
    printf("Consultando a la API\n");
    /* Especificar la URL a consultar para ver si hay mensajes nuevos */
    curl_easy_setopt(curl, CURLOPT_URL, api_telegram_consulta );
    curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L );

    /* Enviar la información de respuesta a la función */
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback );

    /* Preparamos el callback para cuando la API responda */
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &strbuf );

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
    printf( "%s\n\n", strbuf.ptr );

    // Parseamos la respuesta con la biblioteca cJSON
    // Con esto podemos acceder a los miembros más fácilmente
    cJSON *json = cJSON_Parse(strbuf.ptr);

    // Obtenemos el campo "fact" de la respuesta json
    cJSON *result_json = NULL;
    cJSON *result_item_json = NULL;
    cJSON *message_json = NULL;
    cJSON *chat_json = NULL;
    cJSON *chat_id_json = NULL;
    cJSON *chat_text_json = NULL;
    result_json = cJSON_GetObjectItemCaseSensitive(json, "result");
    // Iteramos por cada mensaje
    cJSON_ArrayForEach(result_item_json, result_json){
      message_json = cJSON_GetObjectItemCaseSensitive(result_item_json, "message");
      chat_json = cJSON_GetObjectItemCaseSensitive(message_json, "chat");
      chat_text_json = cJSON_GetObjectItemCaseSensitive(message_json, "text");
      chat_id_json = cJSON_GetObjectItemCaseSensitive(chat_json, "id");

      // Convertimos la respuesta a string para imprimir
      if (cJSON_IsNumber(chat_id_json)){
        // Si es verdadero, tengo un nuevo mensaje
        int chat_id = chat_id_json->valueint;
        printf("El chat id es: %d\n", chat_id);
        printf("El mensaje es: %s\n", cJSON_Print(chat_text_json));


//        // Tengo que pedir datos a la otra api
//        /* Especificar la URL a consultar para ver si hay mensajes nuevos */
//        curl_easy_setopt(curl, CURLOPT_URL, api_cats);
//        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L );
//
//        /* Enviar la información de respuesta a la función */
//        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback );
//
//        /* Preparamos el callback para cuando la API responda */
//        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &strbuf2 );
//
//        /* get it! */
//        res = curl_easy_perform(curl);
//        printf("Llegué\n");
//
//        /* check for errors */
//        if( res != CURLE_OK )
//        {
//          fprintf( stderr, "Request failed: curl_easy_perform(): %s\n", curl_easy_strerror(res) );
//          curl_easy_cleanup(curl);
//          string_buffer_finish( &strbuf2 );
//          return EXIT_FAILURE;
//        }
//
//        printf( "%s\n\n", strbuf2.ptr );
//
//
//        string_buffer_finish( &strbuf2 );



      } else {
        printf("No es número\n");
      }
    }

    /* Limpiar el buffer de respuesta*/
    string_buffer_finish( &strbuf );

    /*--------------------------------------------------------------------------------
     * Hasta acá
     *--------------------------------------------------------------------------------
     * */
  }


  /* Limpia el buffer */
  curl_easy_cleanup( curl );
  string_buffer_finish( &strbuf );
  return EXIT_SUCCESS;
}
/* eof */
