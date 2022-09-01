#include <stdio.h>
#define TAM 300

void cargar(int a[], int tam)
{
  for (int i = 0; i < tam; i++){
    printf("Ingrese %d: ", i);
    scanf("%d", &a[i]);
  }
}

int main(void) {

  /** const int arreglo[TAM] = {0}; */
  int arreglo[TAM] = {0};
  int n = 3;

  cargar(arreglo, n);

  for (int i = 0; i < n; i++){
    printf("%d\n", arreglo[i]);
  }

  return 0;
}
