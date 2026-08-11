#include <stdio.h>

int main(void) {

  int op;

  do{
    printf("1) Saludo\n2)Salir\n");
    printf("Ingrese una opción: ");
    scanf("%d", &op);

    switch(op){
    case 1:
      printf("Hola!\n");
    break;
    case 2:
      printf("Chau\n");
      break;
    default:
      printf("No es una opción válida\n");
    break;
    }
  }while(op != 2);


  return 0;
}
