#include <stdio.h>

int main(void) {

  float balance;
  printf("Ingrese el balance: ");
  scanf("%f", &balance);

  printf("balance: %010.2f\n", balance);

  if (balance == 12.5){
    printf("El balance es igual a 12.5\n");
  } else {
    printf("El balance NO es igual a 12.5\n");
  }

  return 0;
}
