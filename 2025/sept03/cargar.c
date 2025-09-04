#include <stdio.h>
#define TAM 100

void cargar(int *a, int n){
  for (int i = 0; i < n; i++){
    printf("Ingrese número: ");
    scanf("%d", &a[i]);
  }
}
int main(void) {

  int arreglo[TAM];

  cargar(arreglo, 3);

  for (int i = 0; i < 3; i++)
    printf("%d\n", arreglo[i]);

  return 0;
}
