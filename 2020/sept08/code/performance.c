#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>
#include "funciones_arreglos.h"


int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}


// Burbuja "normal"
// 7 segundos
// < 1
// 4
// 0.4

// Burbuja "normal"
// La mitad

int main(void)
{

  int arreglo[TAM];
  int tam;
  float start, end;


  //tam = ingresar_tam();
  tam = TAM;

  srand(time(NULL));

  cargar_arreglo(arreglo, tam);

  start = omp_get_wtime();
  ordena_arreglo_burbuja(arreglo, tam, swap_mayor);
  end = omp_get_wtime();
  printf("ordena burbuja: %f\n", end-start);

  //imprime_arreglo(arreglo,100);
  //cargar_arreglo(arreglo, tam);

  start = omp_get_wtime();
  ordena_arreglo_burbuja_mejorado(arreglo, tam, swap_mayor);
  end = omp_get_wtime();
  printf("ordena burbuja mejorado: %f\n", end-start);

  //imprime_arreglo(arreglo,100);

  cargar_arreglo(arreglo, tam);

  start = omp_get_wtime();
  qsort(arreglo, tam, sizeof(int), cmpfunc);
  end = omp_get_wtime();
  printf("ordena burbuja mejorado: %f\n", end-start);

  //imprime_arreglo(arreglo,100);

  int num;
  int pos;

  printf("Ingrese un elemento a buscar: ");
  scanf("%d", &num);

  // Si num existe, me devuelve la posición
  // si no existe, devuelve un -1
  start = omp_get_wtime();
  pos = buscar_elemento_secuencial(arreglo, tam, num);
  end = omp_get_wtime();
  printf("tiempo secuencial: %f\n", end-start);

  if (pos != -1){
    printf("El número %d está en la posición: %d\n", num, pos);
    printf("num: %d\n", arreglo[pos]);
  } else {
    printf("El número %d no se encuentra en el arreglo\n", num);
  }

  start = omp_get_wtime();
  pos = buscar_elemento_binario(arreglo, tam, num);
  end = omp_get_wtime();
  printf("tiempo binario: %f\n", end-start);

  if (pos != -1){
    printf("El número %d está en la posición: %d\n", num, pos);
    printf("num: %d\n", arreglo[pos]);
  } else {
    printf("El número %d no se encuentra en el arreglo\n", num);
  }


  return 0;
}
