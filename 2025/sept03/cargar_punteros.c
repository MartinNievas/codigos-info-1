#include <stdio.h>

void cargar(int *p)
{
  printf("Ingrese un número: ");
  scanf("%d", p);
}
int main(void) {

  int num = 10;
  int *pnum;
  pnum = &num;

  cargar(pnum);

  printf("num: %d\n", num);
  printf("num: %d\n", *pnum);
  printf("num: %p\n", pnum);


  return 0;
}
