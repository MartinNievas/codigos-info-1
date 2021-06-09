#include <stdio.h>

int main(void) {

  int nota;

  // Validación de rango
  do {
    printf("Ingrese una nota válida: ");
    scanf("%d", &nota);

    if (nota < 0 || nota > 10)
      printf("La nota no es válida\n");

  } while (nota < 0 || nota > 10);

  // nota es válida

  return 0;
}
