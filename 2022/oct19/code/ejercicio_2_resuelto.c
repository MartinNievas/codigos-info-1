#include <stdio.h>
// El operador de desplazamiento se puede usar para almacenar valores de cuatro caracteres en una variable ints de cuatro bytes.
// Escriba un programa que ingrese a cuatro caracteres desde el teclado y los pasa a funciones PackCharacters.
// Para empacar cuatro caracteres en una variable int, asigne el primer carácter a la variable unsigned int, desplazar la variable unsigned int en 8 bits y combinar la variable con el segundo carácter utilizando el operador |
// Repita este proceso para el tercer y cuarto caracter.
// El programa debe generar los caracteres en su formato de bits antes y después de que se empaqueten en el int para demostrar que los caracteres están empaquetados correctamente en la variable sin int.

void imprimir_binario(unsigned int num)
{
  for (int i = 31; i >= 0; i--){
    printf("%c", (num & 1<<i) ? '1' : '0');
    if (i % 8 == 0)
      printf(" ");
  }
  printf("\n");
}

void PackCharacters(char* cadena, unsigned int* num){

  for (int i = 0; i < 4; i++)
    *num |= cadena[i]<<(i*8);

}

int main(void) {

  char letras[4] = "aaaa";
  unsigned int num = 0;

  printf("\nAntes del llamado: %lu\n", num);
  PackCharacters(letras, &num);
  printf("\nDespués del llamado %lu: ", num);
  imprimir_binario(num);

  return 0;
}
