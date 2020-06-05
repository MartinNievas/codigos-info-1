#include <stdio.h>

int main(void)
{

  char option;
  int num1, num2;

  printf("1)Gerente\n2)A detajo\n3)Salir\n");
  printf("\nIngrese una opción: ");

  scanf("%c", &option);


  switch(option){
  case '1':
    printf("Ingrese el pago semanal: ");
    scanf("%d", &num1);
    printf("Ingrese la cantidad de semanas trabajadas: ");
    scanf("%d", &num2);
    printf("La suma es %d\n", num1*num2);
  break;
  case '2':
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    printf("El producto %dx%d=%d\n", num1, num2, num1*num2);
  break;
  case '3':
  printf("Fin del programa\n");
  break;
  default:
    printf("Opción incorrecta\n");
  break;
  }


  return 0;
}
