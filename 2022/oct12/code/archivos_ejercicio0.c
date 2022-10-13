#include <stdio.h>
#include <string.h>
// Datos de https://www.kaggle.com/tinnqn/precios-claros-precios-de-argentina/
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
    size_t id;
    char nombre[20];

    float precio_max = -10000;
    char nombre_max[20];

    float precio_min = 100000;
    char nombre_min[20];

    while (!feof(fPtr)){
      fscanf(fPtr, "%f,%ld,%[A-Za-z ]\n", &precio, &id, nombre);
      if (precio > precio_max){
        precio_max = precio;
        // nombre_max = nombre; // No se puede

        // Alternativa 1
        // for (int i = 0; nombre[i] != '\0'; i++){
        //   nombre_max[i] = nombre[i];
        // }

        // Alternativa 2
        strcpy(nombre_max, nombre);

      }

      if (precio < precio_min){
        precio_min = precio;
        strcpy(nombre_min, nombre);
      }

      printf("%f,%ld,%s\n", precio, id, nombre_max);
    }
    printf("%s\t%f\n", nombre_max, precio_max);
    printf("%s\t%f\n", nombre_min, precio_min);

  fclose(fPtr);



  }

  return 0;
}
