#include <stdio.h>
#define SI 1
#define NO 0


int main(void)
{

  int repetir = SI;
  int num;

  while (repetir){
    printf("Ingrese un número entre 10 y 100: ");
    scanf("%d", &num);

    if (num >= 10 && num <= 100)
      repetir = NO;

  }

  printf("Usted ingresó el %d\n", num);

  return 0;
}
