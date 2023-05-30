#include <stdio.h>

int main(void) {

  int num;

  // Validar el ingreso de un número positivo
  printf("Ingrese un número positivo: ");
  scanf("%d", &num);
  while (num < 0){
    printf("Ingrese un número positivo: ");
    scanf("%d", &num);
  }

  printf("El número es: %d\n", num);

  return 0;
}
