#include <stdio.h>

int main(void){

  int operacion;
  float a, b;
  printf("1. Suma\n");
  printf("2. Resta\n");
  printf("3. salir\n");

  do
  {
    printf("Ingrese una opción: ");
    scanf("%d", &operacion);

    switch (operacion)
    {
      case 1:
        printf("Ingrese 2 numeros:\n");
        scanf("%f %f", &a, &b);
        printf("La suma es: %.2f\n", a+b);
        break;
      case 2:
        printf("Ingrese 2 numeros:\n");
        scanf("%f %f", &a, &b);
        printf("La resta es: %.2f\n", a-b);
        break;
      case 3:
        printf("Adios\n");
        break;
      default:
        printf("Opción no válida\n");
        break;
    }
  } while (!(operacion >=1 && operacion <=3));

  return 0;
}
