#include <stdio.h>
#define N 10

int ingreso_y_validación(void);
void ingresar_elementos(int a[], int tam);
void imprimir_arreglo(int a[], int tam);
int busca_mayor(int a[], int tam);
int busca_menor(int a[], int tam);
float calcular_promedio(int a[], int tam);

int main(void) {

  int arreglo[N];
  // 1. Se deben ingresar los elementos en el rango válido de (-100,100)
  ingresar_elementos(arreglo, N);

  // 2. Imprimir los elementos uno debajo del otro
  printf("Los elementos son:\n");
  imprimir_arreglo(arreglo, N);

  // 3. Imprimir valores
  printf("El mayor elemento es: %d\n", busca_mayor(arreglo, N));
  printf("El menor elemento es: %d\n", busca_menor(arreglo, N));
  printf("El promedio de los elementos es: %f\n", calcular_promedio(arreglo, N));

  return 0;
}

// Función que solicita ingresar un número
// y devuelve un número válido dentro del rango -100,100
// Si el número está fuera del rango vuelve a solicitarlo
int ingreso_y_validación(void){
  // Completar
}

// Función para cargar todos los elementos del arreglo con un for
// Dentro del for llamar a la función ingreso_y_validación()
void ingresar_elementos(int a[], int tam)
{
  // Completar
  // for(int i...
}

// Función que imprime los elementos del arreglo
void imprimir_arreglo(int a[], int tam)
{
  // Completar
}

// Función que devuelve el promedio de los elementos del arreglo
float calcular_promedio(int a[], int tam)
{
  // Completar
}
