#include <stdio.h>

int main(void) {

  float precio;

  do {
    printf("Ingrese un precio positivo: ");
    scanf("%f", &precio);
  } while (precio < 0.0);

  return 0;
}
