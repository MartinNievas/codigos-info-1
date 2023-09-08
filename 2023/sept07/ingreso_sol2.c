#include <stdio.h>
#define N 10

void ingresar_elementos(int a[], int tam)
{
  // Cargar todos los elementos del arreglo
  for (int i = 0; i < tam; i++) {
    printf("Ingrese el valor del a[%d]: ", i);
    scanf("%d", &a[i]);
  }

}

void imprimir_arreglo(int a[], int tam, int mayor, int menor, float prom)
{
  // Imprime todos los elementos
  for (int i = 0; i < tam; i++) {
    printf("El arreglo [%d] vale: %d\n", i, a[i]); 
  }

  printf("El mayor es: %d\n", mayor);
  printf("El menor es: %d\n", menor);
  printf("El promedio es: %.2f\n", prom);
}

int buscar_mayor (int a[], int tam);
int buscar_menor (int a[], int tam);
float calcular_promedio (int a[], int tam);

int main(void) {

  int arreglo[N];
  int mayor, menor;
  float promedio;

  //pedir datos
  ingresar_elementos(arreglo, N);


  //buscar mayor y menor
  printf("Buscando el menor y el mayor...\n");
  mayor = buscar_mayor(arreglo, N);
  menor = buscar_menor(arreglo, N);


  //promedio
  printf("Calculando el promedio...\n");
  promedio = calcular_promedio(arreglo, N);

  //imprimir en pantalla

  imprimir_arreglo(arreglo, N, mayor, menor, promedio);
}

int buscar_mayor (int a[], int tam) {
  int grande = 0;

  for (int i = 0; i < tam ; i++) {
    if (grande  < a[i]) {
      grande = a[i];
    }
  }

  return grande;
}

int buscar_menor (int a[], int tam) {
  int chico = 2147483647;

  for (int i = 0; i < tam ; i++) {
    if (chico > a[i]) {
      chico = a[i];
    }
  }

  return chico;
}

float calcular_promedio (int a[], int tam) {
  float prom = 0;

  for (int i = 0; i < tam; i++) {
    prom += a[i];
  }

  prom = prom/(float)tam;

  return prom;
}
