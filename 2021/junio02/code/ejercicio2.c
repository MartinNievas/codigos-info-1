#include <stdio.h>
// Operadores
// Escribir un programa que determine el mayor de 3 números ingresados.
// Si los n ́umeros soniguales, se debe imprimir un mensaje que lo indique

int main(void) {

  int num1, num2, num3;

  if (num1 == num2 && num2 == num3){
    printf("Los números son iguales\n");
  } else {
    if (num1 > num2 && num1 > num3){
      printf("El primero es el más grande\n");
    } else if (num2 > num1 && num2 > num3){
      printf("El segundo es el mayor\n");
    } else {
      printf("El tercero es el mayor\n");
    }
  }

  return 0;
}
