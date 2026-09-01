#include <stdio.h>
#define TAM 10

int main(void) {

  int temperaturas[TAM] = {0};
  int i, temp, min = 0, max = 300;

  for (i = 0; i < TAM; i++){

    do {
      printf("Ingrese la temperatura [%d] (entre %d y %d): ", i, min, max);
      scanf("%d", &temp);
    } while (temp < min || temp > max);
    temperaturas[i] = temp;
  }

  printf("Las temperaturas son:\n");
  for (i = 0; i < TAM; i++){
    printf("%d ", temperaturas[i]);
  }

  return 0;
}
