#include <stdio.h>

float celsiusToFahrenheit(float celsius){
  float far;
  far = celsius * 1.8 + 32;
  return far;
}

int main(void) {

  float temp;
  printf("Ingrese una temperatura en celsius: ");
  scanf("%f", &temp);

  float fahrenheit = celsiusToFahrenheit(temp);
  printf("El resultado es: %.2f\n", fahrenheit);



  return 0;
}
