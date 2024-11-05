// data from: https://github.com/luisgagocasas/rrhh/blob/master/usuarios-csv.csv
#include <stdio.h>

int main(void) {
  FILE *fPtr;
  char nombre[15];
  char apellido[15];
  int num;

  if (( fPtr = fopen("nombres.txt", "r") ) == NULL) {
    puts("El archivo no puede ser abierto");
  } else {
    printf("Archivo abierto\n");

    while ( !feof(fPtr) ) {
      fscanf(fPtr,"%s%s%d", nombre, apellido, &num);
      printf("%-15s\t%-15s\t%d\n", nombre, apellido, num);
    }
    // Cerrar el archivo
    fclose(fPtr);
  }
  return 0;
}
