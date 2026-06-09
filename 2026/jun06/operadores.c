#include <stdio.h>

int main(void) {

  int num1=10, num2=-1;

  if ((num1 > 0) && (num2 > 0)){
      printf("Los dos son positivos\n");
  }

  if ((num1 > 0) || (num2 > 0)){
      printf("Hay al menos un positivo\n");
  }

  return 0;
}
