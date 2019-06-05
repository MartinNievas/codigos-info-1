#include <stdio.h>

int main(void)
{
  int n;
  int contador = 0;
  int resultado = 0;

  printf("Ingrese n :");
  scanf("%d", &n);

  while (contador <= n) {
    resultado = resultado + contador;
    contador = contador + 1;
  }
  
  printf("El resultado es: %d\n", resultado);


  return 0;
}
