#include <stdio.h>

int main(void) {

  float temperatura_C;

  printf("Ingrese temperatura °C: ");
  scanf("%f", &temperatura_C);


  printf("Temperatura F: %f\n", ((float)9/5)*temperatura_C + 32);

  return 0;
}
