#include <stdio.h>
// !Operadores
// Escribir un programa que determine el mayor de 3 números ingresados.
// Si los n ́umeros son iguales, se debe imprimir un mensaje que lo indique

int main(void) {


  int num1, num2, num3;

  if (num1 == num2){
    if (num2 == num3){
      printf("Los números son iguales\n");
    }
  } else {
    if (num1 > num2){
      if (num1 > num3){
        printf("El mayor es el primero\n");
      } else {
        printf("El mayor es el tercero\n");
      }
    } else {
      if (num2 > num3){
        printf("El mayor es el segundo\n");
      } else {
        printf("El mayor es el tercero\n");
      }
    }
  }

  return 0;
}

