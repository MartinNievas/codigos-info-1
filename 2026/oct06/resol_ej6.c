// Crear un programa que utilice una función para crear dinámicamente un vector.
// La función deberá recibir la cantidad de elementos y devolver un puntero al vector creado.
// Luego crear funciones para:
// * Cargar el vector.
// * Mostrar el vector.
// * Calcular el promedio.

#include <stdio.h>
#include <stdlib.h>

// COMPLETAR: implementar una función que reserve memoria
// y devuelva un puntero al vector
//by ana re pro
int *reservador(int n){
  int *vector;
  vector = malloc(n * sizeof (int));

  return vector;
}


// COMPLETAR: implementar función para cargar el vector
void cargador(int n, int *vector){
  for (int i = 0; i < n; i++){
    printf("Elemento [%d]: ",i);
    scanf("%d", (vector + i));
  }}

// COMPLETAR: implementar función para mostrar el vector
void mostrador(int n, int *vector){
  for (int i = 0; i < n; i++){
    printf("%d\n", *(vector + i));
  }}

// COMPLETAR: implementar función para calcular el promedio
void promediador(int n, int *vector){
  float suma = 0;

  for (int i = 0; i < n; i++){
    suma+=*(vector + i);
  }
  printf("Promedio = %.2f", suma/n);
}


// Calcula el promedio de los elementos
float calcularPromedio(int *vector, int cantidad) {
    int suma = 0;

    for (int i = 0; i < cantidad; i++) {
        suma += vector[i];
    }

    return (float)suma / cantidad;
}

int main() {
  int n;
  int *vector;

  printf("Ingrese la cantidad de elementos: ");
  scanf("%d", &n);

  // COMPLETAR: crear el vector utilizando una función
  vector = reservador(n);

  // COMPLETAR: cargar el vector
  cargador(n,vector);

  // COMPLETAR: mostrar el vector
  mostrador(n,vector);

  // COMPLETAR: calcular y mostrar promedio
  promediador(n,vector);

  // COMPLETAR: liberar memoria
  free(vector);

  return 0;
}

