#include <stdio.h>

int main(void) {

  float precio;
  float precio_descuento;

  printf("Ingrese el precio: ");
  scanf("%f", &precio);

  if (precio > 1000){
    precio_descuento = precio * 0.8;
    printf("El precio con descuento es: %f\n", precio_descuento);
  }

  if (precio <= 1000){
    printf("El precio es: %f\n", precio);
  }

  return 0;
}
