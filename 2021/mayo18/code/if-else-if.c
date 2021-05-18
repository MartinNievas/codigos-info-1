#include <stdio.h>

int main(void) {

  unsigned int nota;

  printf("Ingrese la nota: ");
  scanf("%u", &nota);

  if (nota >= 8)
    printf("Promociona\n");
  else if (nota >= 6)
      printf("Aprueba\n");
  else
    printf("Libre\n");

  return 0;
}
