// data from: https://github.com/luisgagocasas/rrhh/blob/master/usuarios-csv.csv
#include <stdio.h>
#include <string.h>
#define CANT_PERSONAS 8
// Resolver en clase

int main(void) {

  FILE *cfPtr;

  cfPtr = fopen("nombres.txt", "r");

  if ( cfPtr  == NULL) {
    puts("El archivo no puede ser abierto\n");
  } else {
    printf("Archivo abierto\n");

    char nombre[20];
    char apellido[20];
    int id;

    int ids[CANT_PERSONAS];
    char nombres[CANT_PERSONAS][20];
    char apellidos[CANT_PERSONAS][20];
    int cont = 0;

    fscanf(cfPtr, "%s\t%s\t%d", nombre, apellido, &id);

    while ( !feof(cfPtr) ) {
      ids[cont] = id;
      strcpy(&nombres[cont][0],nombre);
      strcpy(&apellidos[cont][0],apellido);
      cont++;

      printf("%s\t%s\t%d\n", nombre, apellido, id);
      fscanf(cfPtr, "%s\t%s\t%d", nombre, apellido, &id);
    }

    int max = ids[0];
    int id_max = 0;
    // Buscar el máximo idx e imprimir valor, nombre y apellido
    printf("\n\nEl máx es %d, y corresponde a  %s,%s\n", max, nombres[id_max], apellidos[id_max]);


    fclose(cfPtr);
  }
}
