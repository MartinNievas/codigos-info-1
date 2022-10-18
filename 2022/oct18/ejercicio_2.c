#include <stdio.h>
// El operador de desplazamiento se puede usar para almacenar valores de cuatro caracteres en una variable ints de cuatro bytes.
// Escriba un programa que ingrese a cuatro caracteres desde el teclado y los pasa a funciones PackCharacters.
// Para empacar cuatro caracteres en una variable int, asigne el primer carácter a la variable unsigned int, desplazar la variable unsigned int en 8 bits y combinar la variable con el segundo carácter utilizando el operador |
// Repita este proceso para el tercer y cuarto caracter.
// El programa debe generar los caracteres en su formato de bits antes y después de que se empaqueten en el int para demostrar que los caracteres están empaquetados correctamente en la variable sin int.

void PackCharacters(char* cadena, unsigned int* num);

int main(void) {

  char letras[4];
  unsigned int num = 0;

  printf("Antes del llamado: %lu\n", num);
  PackCharacters(letras, &num);
  printf("Después del llamado: %lu\n", num);

  return 0;
}
