#include <stdio.h>

int main(void) {

  int opcion;
  int num1, num2;

  printf("1. Suma\n2. Resta\n6.Salir");
  printf("\nIngrese una opción: ");
  scanf("%d", &opcion);

  printf("Ingrese el primer número: ");
  scanf("%d", &num1);
  printf("Ingrese el segundo número: ");
  scanf("%d", &num2);

  switch(opcion){
  case 1:
    printf("La suma es: %d\n", num1+num2);
  break;

  case 2:
    printf("La resta es: %d\n", num1-num2);
  break;

  case 6:
    printf("Gracias por utilizar la calculadora\n");
  break;

  default:
    printf("Opción no válida\n");
  break;
  }

  return 0;
}
