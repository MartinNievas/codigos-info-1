#include <stdio.h>

void cargar(int *a){
  printf("Ingrese un número: ");
  scanf("%d", a);
}

int main(void) {

  int numero;
  cargar(&numero);
  printf("Con & numero vale: %d\n", numero);

  int *pnum;
  pnum = &numero;
  cargar(pnum);

  printf("Con pnum numero vale: %d\n", numero);


  return 0;
}
