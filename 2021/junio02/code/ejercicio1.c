#include <stdio.h>
// Operadores
// Realizar un programa que determine si un número ingresado por el usuario está en el rango10-100.
// En caso de no estar en el rango, el programa debe informarlo y terminar.
// Si el número está dentro del rango, el programa debe determinar si el número es par.

int main(void) {

  int num;

  printf("Ingrese un número: ");
  scanf("%d", &num);

  if (num >= 10){
    if (num <= 100){
      if (num % 2 == 0){
        printf("El número es par\n");
      } else {
        printf("El número es impar\n");
      }
    } else {
      printf("El número está fuera del rango\n"); // si el número es mayor que 100
    }
  } else {
    printf("El número está fuera del rango\n");
  }

  if (num >= 10 && num <= 100){
    if (num % 2 == 0)
      printf("El número es par\n");
    else
      printf("El número es impar\n");
  } else {
    printf("El número está fuera del rango\n");
  }



  return 0;
}
