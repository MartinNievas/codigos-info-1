#include <stdio.h>

int main(void) {

  int mi_arreglo[100];
  int i;

  for (i = 0; i < 100; i++)
    mi_arreglo[i] = i;

  int contador = 0;
  while (contador < 100){
    printf("%d ", mi_arreglo[contador++]);
  }

  return 0;
}
