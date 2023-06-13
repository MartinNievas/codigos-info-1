#include <stdio.h>

int main(void) {

  int operacion;
  float num1, num2;

  do {
    printf("1- Suma\n");
    printf("2- Resta\n");
    #ifdef PRODUCTO
    printf("3- Producto\n");
    #endif
    #ifdef DIV
    printf("4- División\n");
    #endif
    printf("Ingrese una operación: ");
    scanf("%d", &operacion);
  } while (operacion < 0 || operacion > 4);


  switch(operacion){
    case 1:
      printf("Ingrese el primer número: ");
      scanf("%f", &num1);
      printf("Ingrese el segundo número: ");
      scanf("%f", &num2);
      printf("La suma es: %f\n", num1+num2);
    break;
    case 2:
      printf("Ingrese el primer número: ");
      scanf("%f", &num1);
      printf("Ingrese el segundo número: ");
      scanf("%f", &num2);
      printf("La resta es: %f\n", num1-num2);
    break;
    #ifdef PRODUCTO
      case 3:
        printf("Ingrese el primer número: ");
        scanf("%f", &num1);
        printf("Ingrese el segundo número: ");
        scanf("%f", &num2);
        printf("El producto es: %f\n", num1*num2);
      break;
    #else
      printf("Operación no disponible\n");
      break;
    #endif
    #ifdef DIV
      case 4:
        printf("Ingrese el primer número: ");
        scanf("%f", &num1);
        printf("Ingrese el segundo número: ");
        scanf("%f", &num2);
        printf("El cociente es: %f\n", num1/num2);
      break;
    #else
      printf("Operación no disponible\n");
      break;
    #endif
    default:
      printf("Operación no disponible\n");
    break;
  }


  return 0;
}
