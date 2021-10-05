// data from: https://github.com/luisgagocasas/rrhh/blob/master/usuarios-csv.csv
#include <stdio.h>

int main(void) {

  FILE *cfPtr;
  char caracter;

  cfPtr = fopen("nombres.txt", "r");
  if ( cfPtr  == NULL) {
    puts("El archivo no puede ser abierto");
  } else {
    printf("Archivo abierto\n");

    while ( !feof(cfPtr) ) {
      caracter = fgetc(cfPtr);
      printf("%c", caracter);
    }
    fclose(cfPtr); // fclose closes file
  }
}
