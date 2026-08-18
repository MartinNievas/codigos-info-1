#include <stdio.h>

int main(void) {

  unsigned int num, res = 1;

  printf("Ingrese un número: ");
  scanf("%d", &num);

  // Calculamos el factorial
  for (int i = 1; i <= num; i++){
    res*=i;
  }

  printf("Resultado: %u\n", res);

  return 0;
}
