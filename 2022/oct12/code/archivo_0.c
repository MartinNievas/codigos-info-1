// data from: https://github.com/luisgagocasas/rrhh/blob/master/usuarios-csv.csv
#include <stdio.h>

int main(void) {

  FILE *fPtr;
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
    fclose(fPtr); // fclose closes file
  }
}
