#include <stdio.h>

int main(void)
{

  int num;
  int repetir = 1;

  while (repetir == 1){
    printf("Ingrese un número entre 0 y 100: ");
    scanf("%d", &num);

    if (num <= 100 && num >= 0)
      repetir = 0;
  }

  printf("Usted ingresó: %d", num);

  return 0;
}
