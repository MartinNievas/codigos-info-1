// data from: https://github.com/luisgagocasas/rrhh/blob/master/usuarios-csv.csv
#include <stdio.h>

int main(void) {

  // Puntero a la estructura de tipo FILE
  FILE *cfPtr;

  // Cuando abrimos un archivo, nos devuelve un puntero a FILE
  cfPtr = fopen("nombres.txt", "r");

  // Si el archivo no se puede abrir, devuelve un puntero NULL
  if ( cfPtr  == NULL) {
    puts("El archivo no puede ser abierto\n");
  } else {
    printf("Archivo abierto\n");

    char nombre[10];
    char apellido[10];
    int id;

    while ( !feof(cfPtr) ) {

      // Leemos el archivo como si el usuario ingresara los datos
      fscanf(cfPtr, "%s\t%s\t%d", nombre, apellido, &id);

      // Imprimimos los datos
      printf("%s %s %d\n", nombre, apellido, id);
    }
    // Cerramos el archivo
    fclose(cfPtr);
  }
}



