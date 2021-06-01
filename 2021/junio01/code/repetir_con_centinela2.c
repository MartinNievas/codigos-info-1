#include <stdio.h>
// (2)
// Lo mismo pero con la variable centinela como flag directo

int main(void) {

  int centinela = 1;
  int num;

  while (centinela){
    printf("Ingrese el número 23: ");
    scanf("%d", &num);

    if (num == 23){
      centinela = 1;
    } else {
      printf("Número incorrecto\n");
    }
  }

  printf("Usted ingresó el %d!\n", num);

  return 0;
}
