#include <stdio.h>

int main(void) {

  int n = -1;

  while(n < 0){
    printf("Ingrese un número positivo: ");
    scanf("%d", &n);
  }

  return 0;
}
