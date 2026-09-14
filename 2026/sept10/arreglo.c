#include <stdio.h>

void imprimir(int a[], int tam){
  for (int i = 0; i < tam; i++){
    printf("%d\t", a[i]);
  }
  printf("\n");
}

int main(void) {

  int arreglo[4] = {1, 55, 6, -1};

  imprimir(arreglo, 4);

  return 0;
}
