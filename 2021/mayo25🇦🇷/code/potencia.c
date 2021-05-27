#include <stdio.h>

int main(void) {

  float potencia = 1;
  int contador, base, exponente;

  printf("Ingrese base: ");
  scanf("%d", &base);

  printf("Ingrese el exponente: ");
  scanf("%d", &exponente);

  contador = exponente;
  while (contador > 0){
    potencia = potencia * base;
    contador = contador - 1;
  }

  printf("El número %d elevado a %d es: %f\n", base, exponente, potencia);

  return 0;
}
