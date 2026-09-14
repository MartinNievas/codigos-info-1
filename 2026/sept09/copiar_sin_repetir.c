#include <stdio.h>
#define N 8

int main(void) {

  int arr[N] = {1, 5, 6, 7, 4, 1, 5, 7};
  int narr[N] = {0};
  int pos = 0;

  for (int i = 0; i < N; i++){
    int n_a_copiar = arr[i];
    int existe = 0;

    for (int k = 0; k < N; k++){
        if (narr[k] == n_a_copiar)
          existe = 1;
    }

    if (existe == 0){
      narr[pos] = n_a_copiar;
      pos++;
    }

  }

  printf("arr\n");
  for (int i = 0; i < N; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");

  printf("Narr\n");
  for (int i = 0; i < N; i++){
    printf("%d ", narr[i]);
  }
  

  return 0;
}
