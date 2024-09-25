#include <stdio.h>
#define N 4

void incrementar(int * const arr, int tam)
{
  for (int i = 0; i < tam; i++){
    arr[i]++;
  }
}

void imprimir(const int * const arr, int tam){
  for (int i = 0; i < tam; i++){
    printf("%d\n", arr[i]);
  }

}

int main(void) {

  int arreglo[N];

  for (int i = 0; i < N; i++){
    arreglo[i] = i;
  }

  printf("Antes de incrementar:\n");
  for (int i = 0; i < N; i++){
    printf("%d\n", arreglo[i]);
  }

  incrementar(arreglo, N);

  printf("Después de incrementar:\n");
  for (int i = 0; i < N; i++){
    printf("%d\n", arreglo[i]);
  }



  return 0;
}
