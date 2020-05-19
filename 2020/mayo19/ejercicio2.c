// Escribir un algoritmo que imprima los número divisibles por 3 desde 0 hasta N.
// Donde N es ingresado por el usuario.

#include <stdio.h>

int main(void)
{

  int num;
  int contador;

  printf("Ingrese N: ");
  scanf("%d", &num);

  contador = 0;

  while (contador < num){
    if ((contador % 3) == 0){
      printf("%d ", contador);
    }
    contador++;
  }


  return 0;
}
