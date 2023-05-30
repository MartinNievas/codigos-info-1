#include <stdio.h>
// Escribir un algoritmo que determine si un número n tiene tres cifras. El usuario debe ingresar el número n.

int main(void) {

  int num;

  printf("Ingrese un número: ");
  scanf("%d", &num);

  if (num <= 999){
    if (num >= 100){
      printf("El número tiene 3 cifras\n");
    }
  }

  return 0;
}
