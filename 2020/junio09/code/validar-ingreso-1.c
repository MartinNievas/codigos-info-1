#include <stdio.h>

int main(void)
{

  int num;
  int repetir = 1;

  while (repetir == 1){
    printf("Ingrese un número entre 0 y 100: ");
    scanf("%d", &num);

    // 0)-(100
    if (num > 100 || num < 0){
      repetir = 1;
    } else {
      repetir = 0;
    }
  }

  printf("Usted ingresó: %d", num);

  return 0;
}
