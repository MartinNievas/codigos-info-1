#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>
#include "funciones_arreglos.h"


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

  cargar_arreglo(arreglo, tam);

  start = omp_get_wtime();
  ordena_arreglo_burbuja_mejorado(arreglo, tam, swap_mayor);
  end = omp_get_wtime();
  printf("ordena burbuja mejorado: %f\n", end-start);

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
