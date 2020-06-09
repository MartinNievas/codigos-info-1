#include <stdio.h>
#include <math.h>

/** Ejemplo de como compilar un programa con la biblioteca matemática
  * En la terminal:
  * gcc -Wall -std=c99 mat.c -lm 
  */

int main(void)
{

  float num;

  scanf("%f", &num);

  printf("%f\n", sqrt(num));

  return 0;
}
