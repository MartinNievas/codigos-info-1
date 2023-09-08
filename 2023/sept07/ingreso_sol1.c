#include <stdio.h>
#define N 10

void ingresar_elementos(int a[], int tam)
{
  for(int i=0;i<tam;i++){
    printf("Ingrese el elemento %d: ", i);
    scanf("%d", &a[i]);
  }
}

void imprimir_arreglo(int a[], int tam)
{
  for(int i=0;i<tam;i++){
    printf("El elemento %d es el numero: %d\n", i, a[i]);
  }
}

float calcular_promedio (int a[], int tam){
  float prom=0, suma=0;
  for(int i=0;i<tam;i++){
    suma+=a[i];
  }
  prom=suma/tam;
  return 0;
}

int buscar_maximo(int a[],int tam){
  int max=a[0];
  for(int i=0;i<tam;i++){
    if (a[i] > max )
      max = a[i];

  }
  return max;
}

int buscar_minimo(int a[],int tam){
  int min=a[0];
  for(int i=0;i<tam;i++){
    if (a[i] < min )
      min = a[i];
  }
  printf("El minimo es: %d\n", min);
  return min;
}


int main(void) {

  int arreglo[N];
  ingresar_elementos(arreglo, N);
  imprimir_arreglo(arreglo, N);
  float promedio;
  promedio = calcular_promedio(arreglo, N);
  printf("El promedio es: %f\n", promedio);
  printf("El maximo es: %d\n", buscar_maximo(arreglo, N));
  buscar_minimo(arreglo, N);
  return 0;
}
