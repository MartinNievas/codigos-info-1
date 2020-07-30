#include <stdio.h>
// Ingresar un números entre 1 y 100

int ingresar_intervalo(void)
{
  int num;
  do{
    printf("Ingrese el número: ");
    scanf("%d", &num);
    if (num < 1 || num > 100){
      printf("Número fuera del rango\n");
    }
  }while(num < 1 || num > 100);

  return num;
}

int main(void)
{

  int num1, num2, num3, num4;

  num1 = ingresar_intervalo();
  num2 = ingresar_intervalo();
  num3 = ingresar_intervalo();
  num4 = ingresar_intervalo();

  printf("El número es: %d", num1);
  printf("El número es: %d", num2);
  printf("El número es: %d", num3);
  printf("El número es: %d", num4);

  return 0;
}
