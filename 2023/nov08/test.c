
#include <stdio.h>
#include <string.h>
// Entrar aca https://codeshare.io/aguanteinfo1_archivo

// Buscar el producto más caro y el más barato
// Imprimir su nombre y el precio

int main(void)
{

  char productos[100];
  float precio;
  int codigo;
  FILE *fPtr;
  float max= 0.0;
  float min= 0.0;

  fPtr = fopen("precios_parseados_2.csv", "r");

  if (fPtr == NULL){
    printf("El archivo no se abrio correctamente\n");
  } else {
    printf("Archivo abierto\n");
    fscanf(fPtr,"%f,%d,%s", &precio, &codigo, productos);

    while (!feof(fPtr)){
      fscanf(fPtr,"%f,%d,%s", &precio, &codigo, productos);;
      if(precio > max){
        max=precio;
      }
      if(precio < min){
        min=precio;
      }
    }
    printf("mas caro: %f", max);
    printf("mas barato: %f", min);
    fclose(fPtr);

  }

  return 0;

}
