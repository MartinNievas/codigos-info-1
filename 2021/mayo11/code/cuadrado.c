#include <stdio.h>
#include <math.h>

int main(void) {

  float temp = 10.1;

  float temp_cuadrada;

  temp_cuadrada = pow(temp, 2);
  printf("%f\n", temp_cuadrada);

  printf("%f\n", temp*temp);

  return 0;
}
