#include <stdio.h>

int main(void) {

  int num;


  printf("Ingresar un número positivo: ");
  scanf("%d", &num);

  if (num < 0){
    printf("Número incorrecto ingrese de nuevo\n");
    printf("Ingresar un número positivo: ");
    scanf("%d", &num);
  }

  printf("El número es:%d\n", num);

  return 0;
}
