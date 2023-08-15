#include <stdio.h>

int main(void) {

  int notas[5];

  for (int i = 0; i < 5; i++){
    printf("Inrese la nota %d: ", i);
    scanf("%d", &notas[i]);
  }

  for (int i = 0; i < 5; i++){
    printf("La nota %d es: %d\n", i, notas[i]);
  }

  return 0;
}
