//ejercicio 34**
#include <stdio.h>
int main()
{
  int num2;
  printf("ingrese un numero entre el 0 y 100: ");
  scanf("%d", &num2);
  if(num2 < 0 || num2 >100)
  {
    do{
      printf("Error: te dije que el numero sea entre el 0 y 100\nIntente nuevamente: ");
      scanf("%d", &num2);
    } while(num2 < 0 || num2 >100);
  }
  printf("su numero elegido fue: %d", num2);
  return 0;
}
