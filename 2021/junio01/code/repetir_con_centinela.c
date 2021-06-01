#include <stdio.h>
// (1)

int main(void) {

  int centinela = 0;
  int num;

  while (centinela == 0){
    printf("Ingrese el número 23: ");
    scanf("%d", &num);

    if (num == 23)
      centinela = 1;
    else
      printf("Número incorrecto\n");
  }

  printf("Usted ingresó el %d!\n", num);

  return 0;
}
