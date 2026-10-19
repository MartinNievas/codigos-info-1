#include <stdio.h>
#define MAX 100
// Operaciones estadísticas sobre arreglos
// Objetivo: combinar punteros a funciones, arreglos y paso de funciones como parámetros.
// Enunciado
// Desarrollar un programa en C que permita realizar diferentes cálculos estadísticos sobre un vector de números reales.
// El programa debe implementar las siguientes funciones:
// - calcularPromedio: recibe un vector y su cantidad de elementos y devuelve el promedio.
// - calcularMaximo: recibe un vector y su cantidad de elementos y devuelve el valor máximo.
// - calcularMinimo: recibe un vector y su cantidad de elementos y devuelve el valor mínimo.
// Además, se debe implementar una función denominada mostrarResultado que reciba:
// - El vector.
// - La cantidad de elementos.
// - Un puntero a una función estadística compatible con las tres funciones anteriores.
// mostrarResultado debe ejecutar la función recibida y mostrar el resultado.
// En main, se debe solicitar al usuario la cantidad de elementos, cargar el vector y utilizar mostrarResultado para calcular el promedio, el máximo y el mínimo.
// --------------------------
// Ejemplo salida:
//
// Cantidad de elementos: 5
//
// Ingrese los valores:
// 10 20 5 15 30
//
// Promedio: 16.00
// Maximo: 30.00
// Minimo: 5.00
// --------------------------

// Calcula el promedio de los elementos
float calcularPromedio(float *vector, int cantidad)
{
  float suma = 0;

  for (int i = 0; i < cantidad; i++){
    suma += vector[i];
  }

  return suma / cantidad;
}

// Calcula el maximo del vector
float calcularMaximo(float *vector, int cantidad)
{
  float max = vector[0];

  for (int i = 0; i < cantidad; i++){
    if(vector[i] > max)
      max = vector[i];
  }

  return max;
}

// Calcula el minimo del vector
float calcularMinimo(float *vector, int cantidad)
{
  float min = vector[0];

  for (int i = 0; i < cantidad; i++){
    if(vector[i] < min)
      min = vector[i];
  }

  return min;
}

// Ejecuta una funcion estadistica y muestra el resultado
void mostrarResultado(
    float vector[],
    int cantidad,
    float (*operacion)(float*, int),
    const char *descripcion
)
{
    float resultado;

    // Completar: Ejecutar la funcion recibida y guardar
    // el resultado.
    resultado = operacion(vector, cantidad);

    // Mostrar la descripcion y el resultado.
    printf("%s: %f\n", descripcion, resultado);

}

int main(void)
{
    float vector[MAX];
    int cantidad;

    // COMPLETAR:
    // Validar que la cantidad sea mayor que cero
    // y no supere MAX.
    do{
      printf("Ingrese la cantindad de elementos:");
      scanf("%d", &cantidad);
    }while(cantidad < 0 || cantidad > MAX);

    // COMPLETAR:
    // Solicitar y cargar los elementos del vector.
    for (int i = 0; i < cantidad; i++){
      printf("ingrese el elemento: ");
      scanf("%f", &vector[i]);
    }

    // Ejecutar cada operacion estadistica
    mostrarResultado(
        vector,
        cantidad,
        calcularPromedio,
        "Promedio"
    );

    mostrarResultado(
        vector,
        cantidad,
        calcularMaximo,
        "Maximo"
    );

    mostrarResultado(
        vector,
        cantidad,
        calcularMinimo,
        "Minimo"
    );

    return 0;
}
