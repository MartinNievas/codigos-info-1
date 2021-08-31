#include <stdio.h>


int main(void) {

  int flag;
  int num;

  do {
    printf("Ingrese la operación a realizar\n");
    printf("1)suma\n2)resta\n0)salir\n");
    scanf("%d", &flag);

    switch(flag){
    case 1:
      do {
        printf("Responda las preguntas\n");
        printf("Ingrese un número:\n");
        scanf("%d", &num);
      } while (num < 10);
    break;
    case 2:
      do {
        printf("Responda las preguntas\n");
        printf("Ingrese un número:\n");
        scanf("%d", &num);
      } while (num < 10);
    default:
    break;
    }


  } while (flag != 0);

  return 0;
}
