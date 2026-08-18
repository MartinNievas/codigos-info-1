#include <stdio.h>
// Solicitar al usuario un número entero positivo
// Repetir si es incorrecto

int ingreso_y_validar()
{
  int numero;

  do{
    printf("Ingrese un número positivo: ");
    scanf("%d", &numero);
  }while(numero<0);

  return numero;
}

int main(void) {

  int num;

  num = ingreso_y_validar();

  printf("El número ingresado y validado es: %d\n", num);


  return 0;
}
