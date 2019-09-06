#include <stdio.h>
#define TAM 3

void funcion1(int);
void funcion2(int);
void funcion3(int);

int main(void)
{
  int op;
  void (*f[TAM])(int) = {funcion1, funcion2, funcion3};

  printf("Ingrese una opción: ");
  scanf("%d", &op);

  (*f[op])(op);
  

  return 0;
}

void funcion1(int a)
{
  printf("Está en la función 1! pasó el valor: %d", a);
}
void funcion2(int b)
{
  printf("Está en la función 2! pasó el valor: %d", b);
}
void funcion3(int c)
{
  printf("Está en la función 3! pasó el valor: %d", c);
}
