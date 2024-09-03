#include <stdio.h>
#define TAM 10
/* Resolver: */
/* 1. Ingresar TAM elementos en un arreglo de enteros */
/** - Solo se permiten número entre: (-100,100) */
/* 2. Solicitar al usuario un número para buscar*/
/* 3. Buscar ese número dentro del arreglo. Si existe, indicar su posición (índice) */
/*   sino, indicar que no existe */

void cargar_y_validar_elementos(int arreglo[], int cantidad);
int buscar(int numero, int arreglo[], int cantidad);

int main(void) {

  int arreglo[TAM], numero;

  // Ingresar los TAM elementos
  cargar_y_validar_elementos(arreglo, TAM);

  // Solicitar al usuario el número a buscar
  printf("Ingrese el número a buscar: ");
  scanf("%d", &numero);

  // Buscar el número
  int res = buscar(numero, arreglo, TAM);
  // Si existe: imprimir el índice, no existe: imprimir un -1

  return 0;
}
