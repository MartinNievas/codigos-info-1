#include <stdio.h>

// Recursión
void imprimir(void)
{
  static int num = 0;

  printf("%d\n", num++);

  if( num < 10)
    imprimir();

}
// 1 2 3 5 8 13 ...
// Completar (Ver en el Deitel y Deitel)
int fibo(int num){
return fibo(num-1) + fibo(num-2);
}


int main(void) {

  imprimir();

  return 0;
}
