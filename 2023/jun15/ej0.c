#include <stdio.h>

int main(int argc, char *argv[]) {

  float precio;

  printf("Ingrese el precio: ");
  scanf("%f" ,&precio);

  if(precio > 1000 ){

    precio= precio*0.80;
    printf("Precio con descuento: %.2f", precio);
  }
  else
    printf("%.2f es el precio sin descuento",precio);


