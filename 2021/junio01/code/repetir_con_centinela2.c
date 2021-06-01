#include <stdio.h>
// (2)
// Lo mismo pero con la variable centinela como flag directo

int main(void) {

  int centinela = 1;
  int num;

  // 0 Falso
  // Verdadera

  while (centinela){ // Verdadera para centinela distinto de 0
    printf("Ingrese el número 23: ");
    scanf("%d", &num);

    if (num == 23){
      centinela = 0;
    } else {
      printf("Número incorrecto\n");
    }
  }

  printf("Usted ingresó el %d!\n", num);

  return 0;
}
