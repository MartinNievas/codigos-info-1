#include <stdio.h>
// Escribir en un archivo

int main(void) {

  FILE *cfPtr;

  // Abrir el archivo
  cfPtr = fopen("base_datos.txt", "r+");

  // Si no se abrió corréctamente, imprime el mensaje y termina
  if ( cfPtr  == NULL) {
    puts("El archivo no puede ser abierto\n");
  } else {
    printf("Archivo abierto\n");

    char nombre[10];
    char apellido[10];
    int id;

    int centinela = 1;
    printf("Ingrese el nombre apellido e id: ");
    scanf("%10s%10s%d", nombre, apellido, &id);

    //while ( id != 1 ) {
    while ( !feof(stdin) ){

      fprintf(cfPtr, "%s\t%s\t%d\n", nombre, apellido, id);
      printf("Ingrese el nombre apellido e id: ");
      scanf("%10s%10s%d", nombre, apellido, &id);

    }
    fclose(cfPtr);
  }
}



