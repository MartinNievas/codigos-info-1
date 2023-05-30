#include <stdio.h>

int main(void) {

  int n1, n2, cont;
  unsigned long int resultado;
  printf("Ingrese n1: ");
  scanf("%d", &n1);
  printf("Ingrese n2: ");
  scanf("%d", &n2);

  cont = 0;
  resultado = 1;

  while (cont < n2){
    resultado = resultado * n1;
    cont = cont + 1;
  }
  printf("El resultado es: %lu\n", resultado);


  return 0;
}
