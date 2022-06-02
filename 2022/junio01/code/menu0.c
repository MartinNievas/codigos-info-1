#include <stdio.h>

int main(void) {

  int op;
  int num1, num2;
  printf("1- suma\n2- resta\n3- Producto\n4- División\n");
  printf("Ingrese la operación: ");
  scanf("%d", &op);

  switch(op){
  case 1:
    printf("Suma\n");
    printf("Ingrese el num1: ");
    scanf("%d", &num1);
    printf("Ingrese el num2: ");
    scanf("%d", &num2);
    printf("La suma es: %d\n", num1+num2);
  break;
  case 2:
    printf("Resta\n");
  break;
  case 4:
    printf("División\n");
    printf("Ingrese el num1: ");
    scanf("%d", &num1);
    printf("Ingrese el num2: ");
    scanf("%d", &num2);

    if (num2 == 0){
      printf("No se puede dividir por cero\n");
    } else {
      printf("La división es: %d\n", num1/num2);
    }
  break;
  default:
    printf("Operación no válida\n");
  break;
  }

  return 0;
}
