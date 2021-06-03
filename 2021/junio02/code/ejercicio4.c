#include <stdio.h>
// Operadores
// Realizar un programa que determine si el caracter ingresado es un número o una letra.
// Ayuda:buscar “tabla ASCII”

int main(void) {

  char caracter;

  printf("Ingrese: ");
  scanf("%c", &caracter);

  // '0' -> 42
  if (caracter >= '0' && caracter <= '9'){
    printf("Es un número\n");
  } else if (caracter >= 65 && caracter <= 90) { // 32 -> [space]
    printf("Es una letra\n");
  } else if (caracter >= 97 && caracter <= 122) {
    printf("Es una letra\n");
  }

  printf("%c el mismo pero + 32 %c\n", caracter, caracter+' ');




  return 0;
}
