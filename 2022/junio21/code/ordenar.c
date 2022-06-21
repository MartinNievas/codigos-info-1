#include <stdio.h>
#define N 10

int main(void) {

  int arreglo[N] = {1,-23,124,2,51,24,12,321,4,10};
  int i, j, k,temp;
  int cont_perm = 0;

  printf("Antes de ordenar:\n");
  for (i = 0; i < N; i++)
    printf("%d ", arreglo[i]);

  for (i = 0; i < N; i++){
    for (j = 0; j < N-1-i; j++){
      cont_perm++;
      if (arreglo[j] > arreglo[j+1]){
        temp = arreglo[j];
        arreglo[j] = arreglo[j+1];
        arreglo[j+1] = temp;
      }
      printf("\nDurante\n");
      for (k = 0; k < N; k++)
        printf("%d ", arreglo[k]);

    }
  }

  printf("\nDespués de ordenar:\n");
  for (i = 0; i < N; i++)
    printf("%d ", arreglo[i]);

  printf("\nPermutaciones: %d\n", cont_perm);



  return 0;
}
