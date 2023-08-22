#include <stdio.h>

int main(void) {

  char letra;
  char palabra[10];

  printf("Ingrese una letra: ");
  letra = getchar();
  printf("La letra es: %c\n", letra);

  printf("Ingrese una palabra: ");
  scanf("%s", palabra);
  printf("La palabra es: %s\n", palabra);

  return 0;
}
