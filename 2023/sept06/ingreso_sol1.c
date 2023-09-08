#include <stdio.h> //leandro*2
#define N 10

void ingresar_elementos(int a[], int tam)
{
  // Cargar todos los elementos del arreglo
  for(int i=0;i<tam;i++){
    printf("ingrese el valor del primer arreglo:");
    scanf("%d",&a[i]);
  }
}

void imprimir_arreglo(int a[], int tam)
{
  // Imprime todos los elementos
  for(int i=0;i<tam;i++){
    printf("%d\n",a[i]);
  }
}


int main(void) {

  int arreglo[N];
  ingresar_elementos(arreglo, N);
  imprimir_arreglo(arreglo, N);

  return 0;
