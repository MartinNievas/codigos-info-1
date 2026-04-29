#include <stdio.h>

int main(void) {
  // Ejemplos mal declarado
  // int -num;
  // int 3num;
  // int el numero;
  // int main
  // int tílde;
  // int pe$os;
  // int printf;
  // Bien declarados
  int num3ro;
  int el_numero;
  int elNumero;
  int contadorDePrograma;
  float TemperaturaDePileta;

  int num;
  printf("Ingrese un número entero: ");
  scanf("%d", &num);

  printf("\nNúmero: %d\n", num);

  return 0;
}
