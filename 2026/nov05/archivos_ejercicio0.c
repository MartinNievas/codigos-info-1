#include <stdio.h>
#include <string.h>
// Datos de https://www.kaggle.com/tinnqn/precios-claros-precios-de-argentina/
//
// Código: codeshare.io/info1R1
// Archivo: codeshare.io/info1R1_archivo
// Buscar el producto más caro y el más barato
// Imprimir su nombre y el precio

int main(void)
{

  FILE *fPtr;

  fPtr = fopen("precios_parseados_2.csv", "r");

  if (fPtr == NULL){
    printf("El archivo no se abrió corréctamente\n");
  } else {

    while (!feof(fPtr)){

      }

    fclose(fPtr);

  }

  return 0;
}
