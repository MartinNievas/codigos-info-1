// data from: https://github.com/luisgagocasas/rrhh/blob/master/usuarios-csv.csv
#include <stdio.h>
// Unidad 11

int main(void) {

  // Puntero a la estructura de tipo FILE
  FILE *cfPtr;
  char caracter;

  // Cuando abrimos un archivo, nos devuelve un puntero a FILE
  cfPtr = fopen("nombres.txt", "r");

  // Si el archivo no se puede abrir, devuelve un puntero NULL
  if ( cfPtr  == NULL) {
    puts("El archivo no puede ser abierto\n");
  } else {
    printf("Archivo abierto\n");

    // La función feof devuelve verdadero después de leer la siguiente
    // linea del final del archivo
    // Traducción: "¿Pasamos el final del archivo?"
    while ( !feof(stdin) ) {

      // Leemos un solo caracter del archivo y lo imprimimos en pantalla
      caracter = fgetc(cfPtr);
      printf("%c", caracter);

    }
    // Cerramos el archivo
    fclose(cfPtr);
  }
}



