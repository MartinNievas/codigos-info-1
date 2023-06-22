#include <stdio.h>

int main(int argc, char *argv[]) {

  int contador=0;
  int numero;

  printf("ingrese un numero al que se cuente: ");
  scanf("%d", &numero);

  if(numero>=0)
  {
    while(contador<=numero){
      printf("%d\n", contador);
      contador++;
    }
  } else {

    while(contador>=numero)
    {
      printf("%d\n", contador);
      contador--;
    }

  }
  return 0;
}

