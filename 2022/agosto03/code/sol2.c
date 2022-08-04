#include <stdio.h>

float ingreso_numero(void)
{
  int num;
  printf("Ingrese un número: ");
  scanf("%d", &num);
  if (num > 0){
    return 1;
  } else {
    return 2;
  }
}

int main(void) {

  printf("Usted ingresó el: %f\n", ingreso_numero());

  return 0;
}
