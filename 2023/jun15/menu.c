#include <stdio.h>

int main(void) {

  char op;
  float num1, num2;

  printf("+ \n");
  printf("- \n");
  printf("Ingrese la operación: ");
  scanf("%c", &op);

  switch(op){
    case '+':
      printf("Ingrese num1: ");
      scanf("%f", &num1);
      printf("Ingrese num2: ");
      scanf("%f", &num2);
      printf("La suma es: %.2f\n", num1+num2);
      break;
    case '-':
      printf("Ingrese num1: ");
      scanf("%f", &num1);
      printf("Ingrese num2: ");
      scanf("%f", &num2);
      printf("La resta es: %f\n", num1-num2);
      break;
    default:
      printf("No es una opción válida\n");

  }

  return 0;
}
