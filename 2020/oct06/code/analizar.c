#include <stdio.h>
#include <string.h>
// Datos de https://www.kaggle.com/tinnqn/precios-claros-precios-de-argentina/
// Buscar el producto más caro y el más barato
// Imprimir su nombre y el precio

int main(void)
{

  FILE *fPtr;


  fPtr = fopen("../../sept29/code/precios_parseados_2.csv", "r");

  if (fPtr == NULL){
    printf("El archivo no se abrió corréctamente\n");
  } else {
    float precio;
    long int id;
    char nombre[20];

    char nombre_min[20];
    long int id_min;
    float min;

    char nombre_max[20];
    long int id_max;
    float max;

    max = 0;
    min = (float)(1<<20);

    while (!feof(fPtr)){
      fscanf(fPtr, "%f,%ld,%s\n", &precio, &id, nombre);

      printf("%f,%ld,%s\n", precio, id, nombre);
      if (max < precio){
        max = precio;
        strcpy(nombre_max, nombre);
        id_max = id;
      }
      if (min > precio){
        min = precio;
        strcpy(nombre_min, nombre);
        id_min = id;
      }

    }
    printf("\n\n");
    printf("El producto más caro es: %s con un precio de %f id: %ld\n", nombre_max, max, id_max);
    printf("El producto más barato es: %s con un precio de %f id: %ld\n", nombre_min, min, id_min);

    fclose(fPtr);

  }

  return 0;
}
