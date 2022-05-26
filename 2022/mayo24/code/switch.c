#include <stdio.h>

int main(void) {

  int op;
  int num1, num2;
  do{
    printf("Menú:\n");
    printf("0- Suma\n1- Resta\n3- División\n5- Salir");
    scanf("%d", &op);

    switch(op){
    case 0:
      printf("operación es suma\n");
      printf("Ingrese num1: ");
      scanf("%d", &num1);
      printf("Ingrese num2: ");
      scanf("%d", &num2);
      printf("La suma es: %d\n", num1+num2);
    break;

    case 1:
      printf("operación es resta\n");
      printf("Ingrese num1: ");
      scanf("%d", &num1);
      printf("Ingrese num2: ");
      scanf("%d", &num2);
      printf("La resta es: %d\n", num1-num2);
    break;
    case 3:
      printf("operación es división\n");
      printf("Ingrese num1: ");
      scanf("%d", &num1);
      do{
        printf("Ingrese num2: ");
        scanf("%d", &num2);
        if (num2==0)
          printf("No se puede dividir por cero\n");
      }while(num2 == 0);
      printf("La división es: %d\n", num1/num2);
    break;

    case 5:
      printf("Fin del programa\n");
    break;

    default:
      printf("La opción no es correcta\n");
    break;
    }
  }while(op!=5);

  return 0;
}
