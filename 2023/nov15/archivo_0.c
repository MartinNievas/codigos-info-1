// data from: https://github.com/luisgagocasas/rrhh/blob/master/usuarios-csv.csv
#include <stdio.h>

// 1. Nombre y el modo
// 2. Abrir
// 3. Recorrerlo
// 4. Cerrarlo

int main(void) {

  FILE* fPtr;
  char caracter;

  fPtr = fopen("nombres.txt", "r");

  if ( fPtr  == NULL) {
    puts("El archivo no puede ser abierto");
  } else {
    printf("Archivo abierto\n");

    while ( !feof(fPtr) ) {
      caracter = fgetc(fPtr);
      printf("%c", caracter);
    }
    // Cerrar el archivo
    fclose(fPtr);
  }

  return 0;
}
