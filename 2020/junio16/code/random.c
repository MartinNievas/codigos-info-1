#include <stdio.h>
// Como generar números aleatorios?
#include <stdlib.h>
#include <time.h>

int main(void)
{

  int num;
  // Generamos una semilla diferente cada vez que corremos
  // Probar comentar la siguiente línea y correr varias veces le programa
  srand(time(NULL));

  // Imprimimos 10 números "aleatorios"
  for (int i = 0; i < 10; i++){
    num = rand();
    printf("%d\n", num);
  }

  return 0;
}
