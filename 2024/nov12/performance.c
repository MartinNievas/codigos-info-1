#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// OpenMP
#include <omp.h>
#define TAM 100000l

// Tarea opcional mover todo esto a una biblioteca separada
// Para compilar:
// !clear && gcc -Wall -std=c99 % -lm -lgomp && ./a.out


/** Función para inicializar tam elementos de un arreglo a partir de
  * la dirección del primer elemento. Se inicializan de forma
  * aleatoria
  *
  * Parámetros
  *
  * a: dirección del primer elemento
  * tam: cantidad de elementos a inicializar
  * */
void inicializa_arreglo(int *a, int tam){

  printf("Inicializando con números aleatorios\n");
  for (int i = 0; i < tam; i++)
    *(a+i) = rand() % 100000;

}


/** Intercambia dos elementos a partir de sus direcciones de memoria
  * en caso que el primero sea menor que el segundo
  *
  * Parámetros
  * a: dirección del primer elemento
  * b: dirección del segundo elemento
  *
  *  */
void swap_menor(int *a, int *b)
{
  int temp;
  if (*a < *b){
    temp = *a;
    *a = *b;
    *b = temp;
  }
}

/** Método de ordenamiento burbuja
  *
  * Parámetros
  * a: dirección del primer elemento del arreglo
  * tam: cantidad de elementos en el arreglo
  *  */
void ordena_arreglo_burbuja(int *a, int tam)
{
  int i, j;
  for (i = 0; i < tam; i++){
    for (j = 0; j < tam-1; j++){
      swap_menor(&a[j], &a[j+1]);
    }
  }
}

/** Método de ordenamiento burbuja mejorado
  *
  * Parámetros
  * a: dirección del primer elemento del arreglo
  * tam: cantidad de elementos en el arreglo
  *  */
void ordena_arreglo_burbuja_mejorado(int *a, int tam)
{
  int i, j;
  for (i = 0; i < tam; i++){
    for (j = 0; j < tam - 1 - i; j++){
      swap_menor(&a[j], &a[j+1]);
    }
  }
}

/** Función para imprimir los primeros tam elementos de un arreglo
  * a partir de la dirección del primer elemento
  *
  * Parámetros
  * a: dirección del primer elemento
  * tam: cantidad de elementos a imprimir
  *  */
void imprime_arreglo(int *a, int tam){
  for (int i = 0; i < tam; i++){
    printf("%d\n", a[i]);
  }
}


/** Función de comparación necesaria para la función qsort */
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

/** Función principal */
int main(void)
{

  int arreglo[TAM];
  int tam;
  float start, end;

  tam = TAM;
  printf("%ld elementos\n", TAM);

  srand(time(NULL));

  //for (int i = 0; i < 3; i++){
  //  inicializa_arreglo(arreglo, tam);
  //  start = omp_get_wtime();
  //    ordena_arreglo_burbuja(arreglo, tam);
  //  end = omp_get_wtime();
  //  printf("ordena burbuja: %f\n", end-start);
  //}

  //for (int i = 0; i < 3; i++){
  //  inicializa_arreglo(arreglo, tam);
  //  start = omp_get_wtime();
  //    ordena_arreglo_burbuja_mejorado(arreglo, tam);
  //  end = omp_get_wtime();
  //  printf("ordena burbuja mejorado: %f\n", end-start);
  //}


  for (int i = 0; i < 3; i++){
    inicializa_arreglo(arreglo, tam);
    start = omp_get_wtime();
      qsort(arreglo, tam, sizeof(int), cmpfunc);
    end = omp_get_wtime();
    printf("ordena qsort: %.23f\n", end-start);
  }

  imprime_arreglo(arreglo,100);

  return 0;
}
