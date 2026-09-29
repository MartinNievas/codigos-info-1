#include <stdio.h>

int suma(int a, int b){
  int c = a + b;
  return c;
}

int sumap(int *pa, int *pb){
  int c = *pa + *pb;
  return c;
}

void suma_puntero(int *pa, int *pb, int *pc){
    *pc = *pa + *pb;
}

int main(void) {

  int num1, num2, *pnum1,*pnum2;

  num1 = 10;
  num2 = 20;
  pnum1 = &num1;
  pnum2 = &num2;

  printf("num1: %d\tpnum1: %d\n", num1, *pnum1);
  printf("num2: %d\tpnum2: %d\n", num2, *pnum2);

  printf("Suma\n");
  printf("%d\n", suma(num1, num2));
  printf("%d\n", sumap(pnum1, pnum2));
  int *presultado;
  int resultado;

  presultado = &resultado;

  suma_puntero(pnum1, pnum2, presultado);
  printf("resultado: %d\n", *presultado);


  return 0;
}
