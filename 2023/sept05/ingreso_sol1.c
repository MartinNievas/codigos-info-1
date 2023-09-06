#include <stdio.h>
#define TAM 10

// Función que solicita ingresar un número
// Pero solo dentro del rango 0-100
int ingreso_y_validación(void){
  // Completar
}

void ingresar_elementos(int a[], int tam)
{
  int i;
  for(i = 0; i < tam ; i++){
    a[i] = ingreso_y_validación();
  }
}

void imprimir_arreglo(int a[] , int tam){
  int i;
  for( i=0; i < TAM ; i++){

    printf("El elemento a[%d] vale: %d\n" ,i , a[i]);

  }
}

float calcular_promedio(int a[] , int tam){
  int prom = 0, i;
  for(i = 0; i < tam ; i++){
    prom = prom + a[i];
    prom += a[i];
  }
  return prom/(float)tam;
}


int main (void) {

  int arreglo[TAM];
  int i;
  float promedio;

  ingresar_elementos(arreglo, TAM);
  imprimir_arreglo(arreglo , TAM);
  promedio = calcular_promedio( arreglo , TAM); 

  printf("El promedio es: %.2f\n" , promedio);



  return 0;
}
