#include <stdio.h>

void cargar_num(void)
{
  int num;
  printf("Antes vale: %d \n", num);
  printf("Ingrese num: ");
  scanf("%d", &num);
  printf("%d\n", num);
}

int main(void) {

  cargar_num();
  cargar_num();
  cargar_num();

  return 0;
}
