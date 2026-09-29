
//8.27

#include <stdio.h>
#include <stdlib.h>
#define N 6

int eliminar_numero(int *vec, int n, int valor);

int main(int argc, char *argv[]) {
  int arr[N], valor = 7;

  printf("hola, ingrese los 6 elementos: \n");
  for(int i = 0; i < N ; i++){
    scanf("%d", &arr[i]);
  }

  printf("Arreglo original: \n");	
  for(int i = 0; i < N; i++){
    printf("%d  ", arr[i]);
  }

  eliminar_numero(arr, N, valor);

  printf("\nArreglo arreglado: \n");
  for(int i = 0; i < N; i++){
    printf("%d  ", arr[i]);
  }

  return 0;
}

int eliminar_numero(int *vec, int n, int valor){
  for(int i = 0; i< n ; i++){
    if(vec[i] == valor){
      vec[i] = 0;
    }
  }
  return *vec;
}


//8.28

#include <stdio.h>
#include <stdlib.h>

void cargar_dinamico(int *vec, int n);

int main(int argc, char *argv[]) {
  int n;
  int *arr;

  do{
    printf("Ingrese una cantidad: ");
    scanf("%d", &n);
  }	while(n < 0);

  arr = malloc(n * sizeof(int));
  if (arr == NULL){
    printf("ERROR\n");
    return -1;
  }

  cargar_dinamico(arr, n);

  for(int i = 0 ; i < n ; i++){
    printf("%d  ", arr[i]);
  }

  free(arr);

  return 0;
}

void cargar_dinamico(int *vec, int n){
  printf("Ahora cargue %d números: ", n);

  for(int i = 0 ; i < n ; i++){
    scanf("%d", vec+i);
  }
}


