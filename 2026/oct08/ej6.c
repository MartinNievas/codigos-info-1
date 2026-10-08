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
int *crearArreglo(int n){
  int *parr;
  parr = malloc(n * sizeof(n));
  return parr;
}


// COMPLETAR: implementar función para cargar el vector
void cargarArrgelo(int *vinicio, int n){
  for (int i = 0; i < n; i++){
    printf("Ingrese elemento: ");
    scanf("%d", vinicio + i);
  }
}

// COMPLETAR: implementar función para mostrar el vector
void mostrarArreglo(int *v, int n){
  for (int i = 0; i < n; i++)
    printf("%d\n", *(v + i));
}


// COMPLETAR: implementar función para calcular el promedio
void calcularPromedio(int *v, int n, float *promedio){
  int suma = 0;

  for (int i = 0; i < n; i++)
    suma += *(v + i);

  *promedio = (float)suma / n;

}

int main() {
    int n;
    int *vector;

    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);

    // COMPLETAR: crear el vector utilizando una función
    vector = crearArreglo(n);

    // COMPLETAR: cargar el vector
    cargarArrgelo(vector, n);

    // COMPLETAR: mostrar el vector
    mostrarArreglo(vector, n);

    // COMPLETAR: calcular y mostrar promedio
    float promedio;
    float *pprom;
    pprom = &promedio;
    calcularPromedio(vector, n, pprom);

    printf("Promedio: %.2f", promedio);

    // COMPLETAR: liberar memoria
    free(vector);


    return 0;
}
