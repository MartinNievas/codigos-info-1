#include <stdio.h>

int main(void) {

  FILE *cfPtr;

  cfPtr = fopen("base_datos.txt", "a");

  if ( cfPtr  == NULL) {
    puts("El archivo no puede ser abierto\n");
  } else {
    printf("Archivo abierto\n");

    char nombre[10];
    char apellido[10];
    int id;
    printf("Ingrese el nombre apellido e id: ");
    scanf("%10s%10s%d", nombre, apellido, &id);

    while ( !feof(stdin) ) {

      fprintf(cfPtr, "%s\t%s\t%d\n", nombre, apellido, id);
      printf("Ingrese el nombre apellido e id: ");
      scanf("%10s%10s%d", nombre, apellido, &id);

    }
    fclose(cfPtr);
  }
}



