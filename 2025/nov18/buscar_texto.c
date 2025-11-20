#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void) {

  // Texto del mensaje recibido
  char *text = "hola!";

  // Responder a ciertos saludos
  char reply_text[512] = {0};
  char *nombre = "Nombre";

  if (strncasecmp(text, "hola", strlen("hola")) == 0)
  {
    snprintf(reply_text, sizeof(reply_text), "Hola, %s", nombre);
    printf("Respuesta preparada: %s\n", reply_text);
  }


  return 0;
}

