#include <stdio.h>
#include <stdlib.h>

// COMPLETAR:
// Crear una función que reciba la cantidad de elementos
// y devuelva un puntero a un vector de enteros   // by ana re pro
int *crearVector(int cantidad) {
  int *vector;
  vector = malloc(cantidad * sizeof (int));
  return vector;
}


// COMPLETAR:
// Crear una función que reciba el vector y su cantidad
// y permita cargar sus elementos   // by ana re pro
void cargarVector(int *vector, int cantidad) {
  for (int i = 0; i < cantidad; i++){
    printf("Elemento [%d]: ",i);
    scanf("%d", (vector + i));
  }
}


// COMPLETAR:
// Crear una función para mostrar el vector   // by ana re pro
void mostrarVector(int *vector, int cantidad) {
  for (int i = 0; i < cantidad; i++){
    printf("%d\n", *(vector + i));
  }
}

int main() {
  int cantidad;
  int *vector;
  // by ana re pro
  printf("Ingrese la cantidad de elementos: ");
  scanf("%d", &cantidad);

  // COMPLETAR:  // by ana re pro
  // Crear el vector utilizando la función crearVector()

  vector = crearVector(cantidad);

  // COMPLETAR:
  // Cargar el vector
  cargarVector (vector, cantidad);

  // COMPLETAR:
  // Mostrar el vector
  mostrarVector(vector,cantidad);

  // COMPLETAR:
  // Liberar la memoria
  free(vector);

  return 0;
}

