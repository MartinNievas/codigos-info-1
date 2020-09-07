#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 1<<15


int ingresar_tam(void);
void cargar_arreglo(int *, int);
void ordena_arreglo(int *, int, void (*)(int *, int *));
void imprime_arreglo(int *, int);
int buscar_elemento_secuencial(int *,int , int );
int buscar_elemento_binario(int *,int , int );

void swap_menor(int *, int *);
void swap_mayor(int *, int *);

int main(void)
{

  int arreglo[TAM];
  int tam;


  //tam = ingresar_tam();
  tam = TAM;

  srand(time(NULL));

  cargar_arreglo(arreglo, tam);

  //printf("Antes de ordenar:\n");
  //imprime_arreglo(arreglo, tam);

  ordena_arreglo(arreglo, tam, swap_mayor);

  //printf("Después de ordenar:\n");
  //imprime_arreglo(arreglo, tam);

  int num;
  int pos;

  printf("Ingrese un elemento a buscar: ");
  scanf("%d", &num);

  // Si num existe, me devuelve la posición
  // si no existe, devuelve un -1
  pos = buscar_elemento_secuencial(arreglo, tam, num);

  if (pos != -1)
    printf("El número %d está en la posición: %d\n", num, pos);
  else
    printf("El número %d no se encuentra en el arreglo\n", num);

  pos = buscar_elemento_binario(arreglo, tam, num);

  if (pos != -1)
    printf("El número %d está en la posición: %d\n", num, pos);
  else
    printf("El número %d no se encuentra en el arreglo\n", num);


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

void ordena_arreglo(int *a, int tam, void (*mayor_menor)(int *a, int *b))
{
  int i, j;
  for (i = 0; i < tam; i++){
    for (j = 0; j < tam-1; j++){
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
