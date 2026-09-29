#include <stdio.h>

void imprimir(int *a, int tam)
{
  for(int i = 0; i < tam ; i+=1){
    printf("%d\t", *(a + i));
  }
}

int main(void) {

  int arr[] = {1, 5, 2, 5, 12, 35};
  int tam = sizeof(arr) / sizeof(arr[0]);

  imprimir(arr, tam);

  return 0;
}
