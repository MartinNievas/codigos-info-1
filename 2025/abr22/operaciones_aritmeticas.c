#include <stdio.h>

int main(void) {

  int num1, num2;

  printf("Ingrese un número: ");
  scanf("%d", &num1);
  printf("Ingrese un número: ");
  scanf("%d", &num2);

  int suma;
  suma = num1 + num2;
  // Forma incorrecta de asignar
  //num1 + num2 = suma;

  printf("La suma es: %d\n", suma);
  // Ejercicio:
  // Hacer una calculadora con las operaciones:
  // 1. Ingresar dos números
  // 2. Imprimir las operaciones (+, -, /, *)
  // 3. Subir el resultado en: codefile.io/f/Qbh2zkkEkO

  return 0;
}
