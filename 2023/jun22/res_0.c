#include <stdio.h>

int main(void) {
  int contador = 0;
  int num;

  printf ("Ingrse un número: ");
  scanf ("%d", &num);

  while (contador <= num){
    printf ("El contador vale: %d\n", contador);
    contador++;
  }
  return 0;
}
