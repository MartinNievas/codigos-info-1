#include <stdio.h>
// Modificar para validar la operación ingresada

int main(void) {
  float num1, num2;
  int operacion = 1;

  while(operacion != 3){


    do{
    printf("1- Suma\n2- Resta\n3- Salir\n");
    printf("Ingrese una operación: ");
    scanf("%d", &operacion);
    }while(operacion < 1 || operacion > 3);

    switch(operacion){
      case 1:
        printf("Ingrese dos números: ");
        scanf("%f %f", &num1, &num2);
        printf("Suma: %f\n", num1+num2);
        break;
      case 2:
        printf("Ingrese dos números: ");
        scanf("%f %f", &num1, &num2);
        printf("Resta: %f\n", num1-num2);
        break;
      case 3:
        printf("Adiós\n");
        break;
      case -1:
        break;
      default:
        printf("Operación no válida\n");
    }
  }


  return 0;
}
