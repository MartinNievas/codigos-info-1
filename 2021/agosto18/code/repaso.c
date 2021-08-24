#include <stdio.h>

void imprimir_pantalla(void)
{
  printf("Hola!\n");
}

void  imprimir_suma(int a, int b)
{
  printf("La suma %d + %d = %d\n", a, b, a+b);
}

int ingresar_valor(void)
{
  int numero;
  printf("Ingrese un número: ");
  scanf("%d", &numero);

  return numero;
}

int sumar(int a, int b){
  return a+b;
}

int main(void) {

  int num1, num2, resultado;
  imprimir_pantalla();
  imprimir_suma(1,2);

  num1 = ingresar_valor();
  num2 = ingresar_valor();

  resultado = sumar(num1, num2);
  printf("La suma es: %d \n", resultado);


  return 0;
}
