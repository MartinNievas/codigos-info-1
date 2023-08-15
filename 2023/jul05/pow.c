#include <stdio.h>
#include <math.h>
double potencia(double base, double exp)
{
  return pow(base, exp);
}

int main(void) {

  float base = 2.0, exp = 3.2;
  float res;
  res = potencia(base, exp);
  printf("El resultado es: %f\n", res);


  return 0;
}
