#include <stdio.h>

int main(void) {

  float balance; // 32bits
  printf("Ingrese el balance: ");
  scanf("%lf", &balance);

  printf("balance: %f\n", balance);
  printf("balance: %.10f\n", balance);

  if (balance == 12.23){
    printf("El balance es igual a 12.23\n");
  } else {
    printf("El balance NO es igual a 12.23\n");
  }

  return 0;
}
