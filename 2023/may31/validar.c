#include <stdio.h>


int main(void) {

  int num;

  // Quiero ingresar solo positivos
  printf("Ingrese un número positivo: ");
  scanf("%d", &num);

  while(num < 100){
    printf("Ingrese un número positivo: ");
    scanf("%d", &num);
  }

  return 0;
}
