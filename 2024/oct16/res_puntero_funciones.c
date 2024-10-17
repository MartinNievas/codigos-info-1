#include <stdio.h>
#include <math.h>

void suma(int a, int b)
{
  printf("%d\n", a+b);
}

void resta(int a, int b)
{
  printf("%d\n", a-b);
}

// Completar: producto, cociente

void producto(int a, int b){

  printf ("%d\n", a * b);

}

void cociente (int a, int b){

  printf ("%d", a / b);
}



int main(void)
{

  void (*puntero[4])(int, int) = {suma, resta,
                                  producto, cociente};
  int op;
  printf("Ingrese operación: \n");
  scanf("%d", &op);

  puntero[op](2, 3);

  return 0;
}

