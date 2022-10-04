#include <stdio.h>

int suma(int a, int b)
{
  return a+b;
}


int main(void) {
  // Puntero a función que recibe un puntero a otra función
  // int (*fun)(int (int*)(int,int));

  int (*fun[])(int a, int b) = {suma};

  char* operaciones[] = {"Suma"};
  int op=0, resultado, num1, num2;

  printf("Ingrese la operación: ");
  scanf("%d", &op);

  printf("Ingrese num1: ");
  scanf("%d", &num1);
  printf("Ingrese num2: ");
  scanf("%d", &num2);

  resultado = fun[op](num1,num2);

  printf("El resultado es: %d\n", resultado);

return 0;
}
