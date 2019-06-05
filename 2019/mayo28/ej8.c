#include <stdio.h>


int main(void)
{
  int base;
  int exp;
  int contador = 0;
  int resultado = 1;

  printf("Ingrese la base: ");
  scanf("%d", &base);

  printf("Ingrese el exponente: ");
  scanf("%d", &exp);
  
  while (contador < exp) {
    resultado = resultado * base;
    contador++;
  }
  
  printf("El resultado es: %d\n", resultado);

  return 0;
}
