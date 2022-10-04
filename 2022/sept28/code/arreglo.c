#include <stdio.h>

void suma_2(int a)
{
  printf("%d\n", a + 2);
}

int main(void) {

  int arreglo[10] = {20,30};
  int* pa;
  pa = arreglo;

  void (*pfun)(int);
  void (*apfun[10])(int) = {suma_2, suma_2};
  pfun = suma_2;

  printf("%d\n", arreglo[1]);
  printf("%d\n", *(pa+1));
  printf("%d\n", pa[1]);

  printf("Llamado\n");
  suma_2(10);
  pfun(10);

  printf("Llamado al arreglo\n");
  apfun[0](10);
  apfun[1](10);



  return 0;
}
