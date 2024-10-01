#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1000

int ingresar_cantidad_elementos(void);

int main(void) {
  int tam;
  int *arreglo = NULL;
  int *positivos = NULL, *negativos = NULL;
  int cant_positivos = 0, cant_negativos = 0;

  srand(time(NULL));  // Inicializar la semilla para los números aleatorios

  // Requisito 1: Solicitar el tamaño del arreglo
  tam = ingresar_cantidad_elementos();
  printf("%d", tam);

  return 0;
}

int ingresar_cantidad_elementos(void){

  int tam;

  do{
    printf("Ingrese la cantidad de elementos del arreglo: ");
    scanf("%d", &tam);
  } while (tam < 0 || tam > N);

  return tam;
}

