#include <stdio.h>

int main(void) {

  int operacion;

  printf("1- Suma\n2- Resta\n3- Salir\n");
  printf("Ingrese una operación: ");
  scanf("%d", &operacion);

  while(operacion > 3 || operacion < 1){
    printf("Operación no válida\n");
    printf("Ingrese una operación: ");
    scanf("%d", &operacion);
  }

  printf("%d\n", operacion);

  return 0;
}
