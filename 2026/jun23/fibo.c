#include <stdio.h>
#define N 2
// Escribir un algoritmo que imprima los primeros N términos de la suce-
// sión de Fibonacci, donde N es un número entero positivo ingresado por
// el usuario. La sucesión comienza con 0 y 1, y cada término siguiente
// es la suma de los dos anteriores.

int main(void) {

  int n1 = 0, n2 = 1, termino;

  for (int i = 0; i < N-2; i++){
    termino = n1 + n2;
    n1 = n2;
    n2 = termino;
  }

  if (N == 1)
    printf("0\n");
  else if (N ==2)
    printf("1\n");
  else
  printf("%d\n", termino);


  return 0;
}
