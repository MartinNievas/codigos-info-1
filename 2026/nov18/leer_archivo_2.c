// data from: https://github.com/luisgagocasas/rrhh/blob/master/usuarios-csv.csv
#include <stdio.h>

// Modos de apertura
//
// r : lectura
// w : escritura. Si no existe lo crea. Si existe borra lo anterior
// a : escritura. Agrega al final del archivo (Append)
// r+: lectura y escritura, desde el inicio
// w+: lectura y escritura. Si existe, borra el contenido

int main(void) {

  FILE *cfPtr;
  char caracter;

  cfPtr = fopen("nombres.txt", "r");

  if ( cfPtr  == NULL) {
    puts("El archivo no puede ser abierto\n");
  } else {
    printf("Archivo abierto\n");

    char nombre[10];
    char apellido[10];
    int id;
    while ( !feof(cfPtr) ) {

      fscanf(cfPtr, "%s\t%s\t%d", nombre, apellido, &id);

      printf("%s\t%s\t%d\n", nombre, apellido, id);

    }
    fclose(cfPtr);
  }
}



