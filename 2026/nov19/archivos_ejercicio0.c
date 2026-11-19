#include <stdio.h>
#include <string.h>
// Datos de https://www.kaggle.com/tinnqn/precios-claros-precios-de-argentina/
//
// Código: codeshare.io/info1R1
//
// Buscar el producto más caro y el más barato
// Imprimir su nombre y el precio

int main(void)
{

  FILE *fPtr;

  fPtr = fopen("precios_parseados_2.csv", "r");

  if (fPtr == NULL){
    printf("El archivo no se abrió corréctamente\n");
  } else {

    float precio;
    unsigned long int uuid;
    char nombre[100];

    float precio_max;
    unsigned long int uuid_max;
    char nombre_max[100];
    fscanf(fPtr, "%f,%lu,%s", &precio_max, &uuid_max, nombre_max);

    while (!feof(fPtr)){
      fscanf(fPtr, "%f,%lu,%s", &precio, &uuid, nombre);
      // printf("%f %lu, %s\n", precio, uuid, nombre);
      if (precio > precio_max){
        precio_max = precio;
        uuid_max = uuid;

        for (int i = 0; i < 100; i++){
          nombre_max[i] = nombre[i];
        }

      }

      }
    printf("Caro: %f, %s\n", precio_max, nombre_max);

    fclose(fPtr);

  }

  return 0;
}
