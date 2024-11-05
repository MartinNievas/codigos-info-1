// data from: https://github.com/luisgagocasas/rrhh/blob/master/usuarios-csv.csv
#include <stdio.h>

typedef struct{
  char nombre[15];
  char apellido[15];
  int num;
}prod_t;

int main(void) {
  FILE *fPtr;

  if (( fPtr = fopen("nombres.txt", "r") ) == NULL) {
    puts("El archivo no puede ser abierto");
  } else {
    printf("Archivo abierto\n");

    prod_t actual;

    fscanf(fPtr,"%s%s%d",
        actual.nombre,
        actual.apellido,
        &actual.num);

    while ( !feof(fPtr) ) {
      printf("nombre: %s\n", actual.nombre);
      printf("apellido: %s\n", actual.apellido);
      printf("num: %d\n\n", actual.num);

      fscanf(fPtr,"%s%s%d",
          actual.nombre,
          actual.apellido,
          &actual.num);

    }
    // Cerrar el archivo
    fclose(fPtr);
  }
  return 0;
}
