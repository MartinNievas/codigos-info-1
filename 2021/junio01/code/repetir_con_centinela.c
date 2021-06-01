#include <stdio.h>
// (1)

int main(void) {

  int centinela = 0;
  int num;

  while (centinela == 0){
    printf("Ingrese el número 23: ");
    scanf("%d", &num);

    if (num != 23)
      printf("Número incorrecto\n");
    else
      centinela = 1;
  }

  printf("Usted ingresó el %d!\n", num);

  return 0;
}
