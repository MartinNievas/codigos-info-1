#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>
#define TAM 1<<15


int ingresar_tam(void);
void cargar_arreglo(int *, int);
void ordena_arreglo_burbuja(int *, int, void (*)(int *, int *));
void ordena_arreglo_burbuja_mejorado(int *, int, void (*)(int *, int *));
void imprime_arreglo(int *, int);
int buscar_elemento_secuencial(int *,int , int );
int buscar_elemento_binario(int *,int , int );
void swap_menor(int *, int *);
void swap_mayor(int *, int *);

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
  printf("diff: %f\n", end-start);

  if (pos != -1){
    printf("El número %d está en la posición: %d\n", num, pos);
    printf("num: %d\n", arreglo[pos]);
  } else {
    printf("El número %d no se encuentra en el arreglo\n", num);
  }

  start = omp_get_wtime();
  pos = buscar_elemento_binario(arreglo, tam, num);
  end = omp_get_wtime();
  printf("diff: %f\n", end-start);

  if (pos != -1){
    printf("El número %d está en la posición: %d\n", num, pos);
    printf("num: %d\n", arreglo[pos]);
  } else {
    printf("El número %d no se encuentra en el arreglo\n", num);
  }


  return 0;
}

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

void cargar_arreglo(int *a, int tam){

  for (int i = 0; i < tam; i++)
    *(a+i) = rand() % 1000;

}

void swap_menor(int *a, int *b)
{
  int temp;
  if (*a < *b){
    temp = *a;
    *a = *b;
    *b = temp;
  }
}

void swap_mayor(int *a, int *b)
{
  int temp;
  if (*a > *b){
    temp = *a;
    *a = *b;
    *b = temp;
  }
}

void ordena_arreglo_burbuja(int *a, int tam, void (*mayor_menor)(int *a, int *b))
{
  int i, j;
  for (i = 0; i < tam; i++){
    for (j = 0; j < tam-1; j++){
      mayor_menor(&a[j], &a[j+1]);
    }
  }

}

void ordena_arreglo_burbuja_mejorado(int *a, int tam, void (*mayor_menor)(int *a, int *b))
{
  int i, j;
  for (i = 0; i < tam; i++){
    for (j = 0; j < tam - 1 - i; j++){
      mayor_menor(&a[j], &a[j+1]);
    }
  }

}

void imprime_arreglo(int *a, int tam){
  for (int i = 0; i < tam; i++){
    printf("%d\n", a[i]);
  }
}

int buscar_elemento_secuencial(int *a, int tam, int elemento){

  int pos = -1;
  for (int i = 0; i < tam; i++){
    if (a[i] == elemento){
      pos = i;
    }
  }
  return pos;
}

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
