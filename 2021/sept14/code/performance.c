#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// OpenMP
#include <omp.h>
#define TAM 1<<15

// Tarea opcional mover todo esto a una biblioteca separada
// Para compilar:
// !clear && gcc -Wall -std=c99 % -lm -lgomp && ./a.out

/** Función para validar que el tamaño del arreglo ingresado
  * por el usuario esté dentro del intervalo 0-TAM
  *
  *  Devuelve un número entero correspondiente al tamaño
  *
  *  */
int ingresar_tam(void)
{
  int tam;
  do {
    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &tam);
    if (tam < 0 || tam > TAM)
      printf("Número no válido. (1-%d)\n", TAM);
  } while (tam < 0 || tam > TAM);

  return tam;
}


/** Función para inicializar tam elementos de un arreglo a partir de
  * la dirección del primer elemento. Se inicializan de forma
  * aleatoria
  *
  * Parámetros
  *
  * a: dirección del primer elemento
  * tam: cantidad de elementos a inicializar
  * */
void cargar_arreglo(int *a, int tam){

  for (int i = 0; i < tam; i++)
    *(a+i) = rand() % 1000;

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


/** Función de búsqueda secuencial. Busca secuencialmente el número "elemento"
  * en los primeros tam elementos de un arreglo a partir de su dirección de inicio
  *
  * Parámetros
  * a: dirección de inicio del arreglo
  * tam: cantidad de elementos en el arreglo
  * elemento: número a buscar dentro del arreglo
  *
  * Retorno
  * int: En caso de encontrar el elemento dentro del arreglo retorna su posición,
  *   caso contrario retorna -1
  *  */
int buscar_elemento_secuencial(int *a, int tam, int elemento){

  int pos = -1;
  for (int i = 0; i < tam; i++){
    if (a[i] == elemento){
      pos = i;
    }
  }
  return pos;
}

/** Función de búsqueda binaria. Busca de mediante el método binario el número "elemento"
  * en los primeros tam elementos de un arreglo a partir de su dirección de inicio
  *
  * Parámetros
  * a: dirección de inicio del arreglo
  * tam: cantidad de elementos en el arreglo
  * elemento: número a buscar dentro del arreglo
  *
  * Retorno
  * int: En caso de encontrar el elemento dentro del arreglo retorna su posición,
  *   caso contrario retorna -1
  *  */
int buscar_elemento_binario(int *a, int tam, int elemento){

  int primero = 0;
  int ultimo = tam-1;
  int medio;
  int pos = -1;

  while (primero <= ultimo)
  {
    medio = (primero+ultimo)/2;
    if (a[medio] < elemento) {
      primero = medio + 1;
    } else if (a[medio] > elemento) {
      ultimo = medio - 1;
    }else {
      pos = medio;
      break;
    }
  }

  return pos;
}


/** Función principal */
int main(void)
{

  int arreglo[TAM];
  int tam;
  float start, end;

  //tam = ingresar_tam();
  tam = 1<<15;

  srand(time(NULL));

  //cargar_arreglo(arreglo, tam);

  //start = omp_get_wtime();
  //  ordena_arreglo_burbuja(arreglo, tam);
  //end = omp_get_wtime();
  //printf("ordena burbuja: %f\n", end-start);

  ////imprime_arreglo(arreglo,100);
  //cargar_arreglo(arreglo, tam);

  //start = omp_get_wtime();
  //  ordena_arreglo_burbuja_mejorado(arreglo, tam);
  //end = omp_get_wtime();
  //printf("ordena burbuja mejorado: %f\n", end-start);

  //imprime_arreglo(arreglo,100);

  cargar_arreglo(arreglo, tam);

  start = omp_get_wtime();
    qsort(arreglo, tam, sizeof(int), cmpfunc);
  end = omp_get_wtime();
  printf("ordena qsort: %f\n", end-start);

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
