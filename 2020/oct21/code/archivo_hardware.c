#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
// OjO, tenemos que correr con sudo el programa

int main() {

  // El nombre del archivo varía con cada computadora
  FILE *fPtr = fopen("nombre_", "w");
  if (fPtr == NULL) {
    printf("No se puede abrir el archivo.\n");
    exit(1);
  } else {

    printf("Archivo abierto.\n");

    printf("Prende\n");
    fprintf(fPtr, "%d", 3);

  }

  fclose(fPtr);

  return 0;
}
