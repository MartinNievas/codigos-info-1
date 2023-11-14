// data from: https://github.com/luisgagocasas/rrhh/blob/master/usuarios-csv.csv
#include <stdio.h>

typedef struct{
  char nombre[15];
  char apellido[15];
  int num;
}prod_t;

int main(void) {
  FILE *fPtr;
  char nombre[15];
  char apellido[15];
  int num;

  if (( fPtr = fopen("nombres.txt", "r") ) == NULL) {
    puts("El archivo no puede ser abierto");
  } else {
    printf("Archivo abierto\n");

    prod_t actual, max, min;

    fscanf(fPtr,"%s%s%d", actual.nombre, actual.apellido, &actual.num);

    while ( !feof(fPtr) ) {

      // Preguntar por el precio

      fscanf(fPtr,"%s%s%d", nombre, apellido, &num);
    }
    // Cerrar el archivo
    fclose(fPtr);
  }
  return 0;
}
