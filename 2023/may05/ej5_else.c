#include <stdio.h>

int main(void) {

  float precio;
  float precio_descuento;
  printf("Ingrese el precio del producto: ");
  scanf("%f", &precio);

  if (precio >= 1000){
    precio_descuento = precio * 0.8;
    printf("El precio final es: %f\n", precio_descuento);
  } else {
    printf("El precio final es: %f\n", precio);
  }


  return 0;
}
