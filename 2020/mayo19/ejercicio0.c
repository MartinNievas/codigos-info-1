// Escribir un algoritmo que determine si un número n tiene 2 cifras.
// El usuario debe ingresar el número n.

#include <stdio.h>

int main(void)
{

  int num;

  printf("Ingrese un número: ");
  scanf("%d", &num);

  if (num > 9){
    if (num < 100){
      printf("El número tiene dos cifras\n");
    } else {
      printf("El número NO tiene dos cifras\n");
    }
  } else {
      printf("El número NO tiene dos cifras\n");
  }

  return 0;
}
