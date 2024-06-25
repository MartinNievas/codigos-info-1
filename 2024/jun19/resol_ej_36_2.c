//Luciano Nievas**
#include <stdio.h>
int main()
{
  int num3;
  printf("Ingrese un numero impar: ");
  scanf("%d", &num3);
  if (!(num3%2==1))
  {
    do{
      printf("error: el numero ingresado es par\nIngrese un numero IMpar, de nuevo... : ");
      scanf("%d", &num3);
    } while(num3%2==0);
  }
  printf("Bien ahi crac, el numero ingresado es el: %d y es impar :) (y)", num3);
  return 0;
}
