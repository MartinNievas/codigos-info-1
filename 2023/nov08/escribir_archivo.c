#include <stdio.h>
// Escribir en un archivo

int main(void) {

  FILE *cfPtr;

  // Abrir el archivo
  cfPtr = fopen("base_datos.txt", "w+");

  // Si no se abrió corréctamente, imprime el mensaje y termina
  if ( cfPtr  == NULL) {
    puts("El archivo no puede ser abierto\n");
  } else {
    printf("Archivo abierto\n");

    char nombre[10];
    char apellido[10];
    int id;

    printf("Ingrese el nombre apellido e id: ");
    scanf("%10s%10s%d", nombre, apellido, &id);

    while ( !feof(stdin) ){

      fprintf(cfPtr, "%s\t%s\t%d\n", apellido, nombre, id);
      printf("Ingrese el nombre apellido e id: ");
      scanf("%10s%10s%d", nombre, apellido, &id);

    }
    fclose(cfPtr);
  }
}



