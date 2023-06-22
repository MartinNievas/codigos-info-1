#include <stdio.h>

int main(void) {

  int repetir = 1, num;

  while (repetir == 1){
    printf("Ingrese un número\nIngrese -1 para salir:");
    scanf("%d", &num);

    if (num == -1)
      repetir = 0;
  }

  printf("num: %d\n", num);

  return 0;
}
