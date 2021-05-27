#include <stdio.h>

int main(void) {

  int op = 0;

  printf("0) Convertir un número\n1)Salir\n");
  printf("Ingrese la opción: ");
  scanf("%d", &op);

  while (!( op == 1 )) {
    printf("Ingrese el número a convertir\n");
    //... convierten el número
    //
    //.. Final de la conversión

    printf("0) Convertir un número\n1)Salir\n");
    printf("Ingrese la opción: ");
    scanf("%d", &op);
  }

  printf("Final del programa\n");

  return 0;
}
