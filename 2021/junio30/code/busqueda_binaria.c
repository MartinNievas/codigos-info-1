#include <stdio.h>
#define TAM 10

int main(void) {

  int primero, final, medio, num;
  int arreglo[TAM] = {1, 20, 23, 45, 60, 63, 70, 90, 200, 340};

  printf("Ingrese el número a buscar: ");
  scanf("%d", &num);

  // búsqueda binaria

  // Inicializo los índices
  primero = 0;
  final = TAM - 1;
  medio = (primero+final)/2;

  while (primero <= final) {

    // Si el número que busco es más grande que el elemento
    // del medio, muevo el inicio
    if (num > arreglo[medio]) {
      primero = medio + 1;
    } else if (arreglo[medio] == num) {
      // Lo encontré en el medio!
      printf("%d está en la posición %d.\n", num, medio+1);
      break;  // Salimos del while
    } else {
      // El número que busco es menor que el elemento del
      // medio, muevo el final
      final = medio - 1;
    }

    medio = (primero + final)/2;
  }

  if (primero > final)
    printf("El número %d no se encuentra en el arreglo.\n", num);

  return 0;
}

