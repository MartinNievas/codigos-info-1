#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
// OjO, tenemos que correr el programa con sudo

int main() {

  // El nombre del archivo varía con cada computadora
  char archivo[100] = "/sys/class/leds/input79::capslock/brightness";
  FILE *fPtr = fopen(archivo, "w");
  if (fPtr == NULL) {
    printf("No se puede abrir el archivo.\n");
    exit(1);
  } else {

    printf("Archivo abierto.\n");

    for (int i = 0; i < 100; i++) {
      printf("Prende\n");
      fprintf(fPtr, "%d", 1);
      fflush(fPtr);
      sleep(1);
      printf("Apaga\n");
      fprintf(fPtr, "%d", 0);
      fflush(fPtr);
      sleep(1);
    }
    fclose(fPtr);

  }


  return 0;
}
