/* snprintf example */
#include <stdio.h>

int main ()
{
  char buffer [2048];
  int cx;
  char* api_telegram = "http...&text=";
  char* respuesta_api = "mensaje de respuesta";

  cx = snprintf ( buffer, 2048, "%s%s", api_telegram, respuesta_api);
  // Para completar:
  // cx = snprintf ( buffer, 2048, "%s%s", api_telegram, strbuf2.ptr);
  //
  // curl_easy_setopt(curl_api2, CURLOPT_URL, buffer);
  // res = curl_easy_perform(curl);

  printf("%s\n", buffer);

  return 0;
}
