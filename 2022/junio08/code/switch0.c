#include <stdio.h>

int main(void) {

  int op, num1, num2;
  printf("0- Suma\n1- Resta\n2- División\n3- Producto\n");

  printf("Ingrese la op: ");
  scanf("%d", &op);

  while (op != 5){
    switch(op){
    case 0:
      printf("Es la suma\n");
      printf("Ingrese num1: ");
      scanf("%d", &num1);
      printf("Ingrese num2: ");
      scanf("%d", &num2);
      printf("La suma es %d\n", num1+num2);
    break;

    case 1:
      printf("Es la resta\n");
      printf("Ingrese num1: ");
      scanf("%d", &num1);
      printf("Ingrese num2: ");
      scanf("%d", &num2);
      printf("La resta es %d\n", num1-num2);
    break;

    case 2:
      printf("Es la división\n");
      printf("Ingrese num1: ");
      scanf("%d", &num1);
      printf("Ingrese num2: ");
      scanf("%d", &num2);

      if (num2 == 0){
        printf("No se puede dividir por 0!\n");
      } else {
        printf("La división es %d\n", num1/num2);
      }
    break;

    default:
      printf("Esto es default\n");
    break;
    }
    printf("Ingrese la op: ");
    scanf("%d", &op);

  }

  return 0;
}
