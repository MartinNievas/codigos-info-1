#include <stdio.h>

int main(void)
{

  char letra1;
  char letra2;

  scanf("%c", &letra1);
  scanf(" %c", &letra2);
  printf("La primera letra es:%c y la segunda es:%c. Fin del printf\n", letra1, letra2);

  return 0;
}
