#include <stdio.h>

int main(void) {

  int operacion;

  printf("1- Suma\n2- Resta\n3- Salir\n");
  do{
    printf("Ingrese una operación: ");
    scanf("%d", &operacion);
    if (operacion > 3 || operacion < 1){
      printf("Operación inválida\n");
    }
  }while(operacion > 3 || operacion < 1);

  printf("%d\n", operacion);

  return 0;
}

