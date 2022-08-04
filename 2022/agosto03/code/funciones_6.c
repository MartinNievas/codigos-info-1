#include <stdio.h>
//Funciones sin parámetros con valor de retorno

int ingreso_y_valida(void)
{
  int num;

  do {
    printf("Ingrese un número entre 0 y 100: ");
    scanf("%d", &num);
  } while (num < 0|| num > 100);

  return num;
}

int main(void) {

  int num;

  // Solicitar ingresar un número en el rango indicado
  // si el número no está dentro del rango, repetir
  // (para completar)

  printf("Ingrese un número entre 0 y 100: ");
  scanf("%d", &num);

  return 0;
}
