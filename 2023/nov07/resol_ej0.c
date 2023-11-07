#include <stdio.h>
#include <string.h>
// Datos de https://www.kaggle.com/tinnqn/precios-claros-precios-de-argentina/
// Buscar el producto más caro y el más barato
// Imprimir su nombre y el precio

int main(void){

  FILE *fPtr;
  float precio;
  unsigned int codigo;
  char nombre[300];


  fPtr = fopen("precios_parseados_2.csv", "r");

  if (fPtr == NULL){
    printf("El archivo no se abrió corréctamente\n");
  } else {

    if(!feof(fPtr))
      fscanf(fPtr ,"%f,%u,%s\n",&precio,&codigo,nombre);

    while (!feof(fPtr)){
      printf("El archivo se abrió corréctamente\n");

      fscanf(fPtr ,"%f,%u,%s\n",&precio,&codigo,nombre);
      printf("%f %u %s\n" , precio, codigo , nombre);

    }

    fclose(fPtr);

  }

  return 0;
}
