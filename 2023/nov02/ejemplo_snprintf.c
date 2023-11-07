#include <stdio.h>

int main ()
{
  char buffer [2048];
  int cx;
  char* api_telegram= "https://api.telegram.org/bot<token:token>/sendMessage?chat_id=";
  char* campo_texto = "&text=";
  char* respuesta_api = "mensaje_de_respuesta";
  int chat_id = 12312321;

  cx = snprintf ( buffer, 2048, "%s%d%s%s", api_telegram, chat_id, campo_texto, respuesta_api);

  // Para completar:
  // cx = snprintf ( buffer, 2048, "%s%s", api_telegram, strbuf2.ptr);
  //
  // curl_easy_setopt(curl_api2, CURLOPT_URL, buffer);
  // res = curl_easy_perform(curl);

  printf("%s\n", buffer);

  return 0;
}
