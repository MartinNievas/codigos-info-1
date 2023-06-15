#include <stdio.h>

int main(int argc, char *argv[]) {

  float precioCompra, num2;

  printf("Ingrese el valor de su compra: ");
  scanf("%f", &precioCompra);

  num2 = (precioCompra*0.8);

  if(precioCompra>1000)
    printf("Su precio con descuento es de: %.2f", num2);
  else
    printf("su compra no tiene descuento");

  return 0;

}
