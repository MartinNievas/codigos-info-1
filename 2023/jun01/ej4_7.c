#include <stdio.h>

int main(int argc, char *argv[]) {

  float precio, descuento;

  printf("Ingrese el total de su compra\n");
  scanf("%f", &precio);

  if(precio>1000){
    descuento = precio * 0.80;
    printf("Tiene un descuento del 20%%\n");
    printf("Tendra que pagar %.2f", descuento);
  } else {
    printf("tendra que pagar %.2f", precio); 
  }


  return 0;
}

