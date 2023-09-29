#include <stdio.h>

void imprimir(int* arr, int tam)
{
  printf("Primera\n");
  for (int i = 0; i < tam; i++){
    printf("%d\n", *(arr+i));
  }
  printf("Segunda\n");
  for (int i = 0; i < tam; i++){
    printf("%d\n", arr[i]);
  }
}

int main(void) {

  int arreglo[] = {1,2,42,1};

  imprimir(arreglo, 4);

  return 0;
}
