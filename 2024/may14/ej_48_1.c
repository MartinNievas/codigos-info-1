#include <stdio.h>

int main(void) {
  int numero;
  printf("ingresa el precio : $ ");
  scanf("%d",&numero);

  int descuento = (numero * 20/100);

  if (numero >= 1000){
    printf ("el precio total es: %d\n",numero - descuento);
  }
  if (numero < 1000) {
    printf("El precio es: %d\n", numero);
  }
  return 0;

}
