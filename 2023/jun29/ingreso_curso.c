#include <stdio.h>

int ingresar_curso(void){
  int cur;
  printf("Ingrese el curso: ");
  scanf("%d", &cur);

  return cur;
}

int main(void) {

  printf("Hola 1R%d\n", ingresar_curso());

  return 0;
}
