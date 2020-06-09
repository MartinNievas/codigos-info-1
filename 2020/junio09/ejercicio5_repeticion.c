#include <stdio.h>

int main(void)
{

  int num;
  int i;

  printf("Ingrese n: ");
  scanf("%d", &num);

  for (i = 0; i < num; i++){
    if (i % 2 == 0)
      printf("%d ", i);
  }

  return 0;
}
