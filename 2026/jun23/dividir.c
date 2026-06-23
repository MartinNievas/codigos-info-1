#include <stdio.h>
/** Escribir un algoritmo que permita realizar la división entera de dos números enteros positivos mediante restas sucesivas, mostrando el cociente y el resto resultantes. */

int main(void) {

  int num1, num2;
  int resultado = 0, temp = 1;

  printf("Ingrese dos números: ");
  scanf("%d%d", &num1, &num2);
  temp = num1;

  while(temp >= 0){
    temp = temp - num2;
    if (temp >= 0)
      resultado++;
  }
  printf("Contador: %d\n", resultado);




  return 0;
}
