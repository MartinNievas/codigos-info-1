#include <stdio.h>

int main(void) {

  int notas[10];

  for (int i = 0; i < 10; i++){
    printf("Ingrese la nota %d: ", i);
    scanf("%d", &notas[i]);
  }

  for (int i = 0; i < 10; i++){
    printf("La nota %d es: %d\n", i, notas[i]);
  }

  return 0;
}
