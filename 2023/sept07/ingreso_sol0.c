#include <stdio.h>
#define N 10

void ingresar_elementos(int a[], int tam)
{
  for (int i = 0; i < tam ; i++){
    printf("Ingrese el elemento [%d]: ", i);
    scanf("%d", &a[i]);
  }
}

void imprimir_arreglo(int a[], int tam)
{

  for (int i = 0; i < tam ; i++){
    printf("[%d]", a[i]);
  }
}

int main(void) {

  int arreglo[N];
  ingresar_elementos(arreglo, N);
  imprimir_arreglo(arreglo, N);

  return 0;
}

