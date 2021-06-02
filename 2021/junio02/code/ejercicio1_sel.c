#include <stdio.h>
// !Operadores
// Realizar un programa que determine el mayor entre dos números ingresados por el usuario

int main(void) {

  int num1, num2;

  printf("Ingrese el primer número: ");
  scanf("%d", &num1);
  printf("Ingrese el segundo número: ");
  scanf("%d", &num2);


  if (num1 > num2){
    printf("El primero es el mayor\n");
  } else {
    printf("El segundo es el mayor\n");
  }

  return 0;
}
