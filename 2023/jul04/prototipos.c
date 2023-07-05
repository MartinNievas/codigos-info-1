#include <stdio.h>
// Prototipo o declaraciones
int suma(int, int);

int main(void) {

  int num1 = 10, num2 = 20;
  printf("La suma de %d y %d es: %d\n",
          num1,
          num2,
          suma(num1,num2));
  return 0;
}

//Definición
int suma(int n1, int n2){
  return n1 + n2;
}

