#include <stdio.h>
// Operadores
// Realizar un programa que determine si el caracter ingresado es un número o una letra.
// Ayuda:buscar “tabla ASCII”

int main(void) {

  char caracter;

  printf("Ingrese un caracter: ");
  scanf("%c", &caracter);


  printf("la letra original: %c\n", caracter);
  printf("la letra más ' ': %c\n", caracter + ' ' );

  if (caracter >= '0' && caracter <= '9'){
    printf("El caracter ingresado es un número\n");
  } else if (caracter >= 65 && caracter <= 90){
    printf("El caracter es una letra\n");
  } else if (caracter >= 97 && caracter <= 122){
    printf("El caracter es una letra\n");
  }


  return 0;
}
