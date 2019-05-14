#include <stdio.h>

int main(void)
{
  int prom = 10;
  
  /** Post incremento */
  printf("El valor es: %d \n", prom++);
  printf("El valor es: %d \n", prom);

  prom = 10;

  /** Pre incremento */
  printf("El valor es: %d \n", ++prom);
  printf("El valor es: %d \n", prom);

  prom = 10;

  /** Post decremento */
  printf("El valor es: %d \n", prom--);
  printf("El valor es: %d \n", prom);


  prom = 10;

  /** Pre decremento */
  printf("El valor es: %d \n", --prom);
  printf("El valor es: %d \n", prom);


  return 0;
}
