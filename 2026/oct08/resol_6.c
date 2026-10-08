//Ejercicio 6 Maxi
#include <stdio.h>
#include <stdlib.h>

void cargarVector(int *vec, int n){
  for(int i =0 ;i<n; i++){
    printf("Ingrese el valor numero %d: ", i+1);
    scanf("%d", vec+i );
  }
}

void mostrarVector(int *vec, int n){
  for(int i=0 ;i<n; i++){
    printf("%d\n", *(vec+i));
  }
}

void calcularPromedio(int *vec, int n){
  int suma = 0;

  for(int i=0;i<n;i++){
    suma+=*(vec+i);
  }
  printf("\nEl promedio es: %d", suma/n);
}

int *reservarMemoria(int n){
  int *vec;
  vec = calloc(n, sizeof(int));
  return vec;

}

int main(int argc, char *argv[]) {
  int *vectest;
  static int n;

  do{
    printf("Ingrese el tamano del vector: ");
    scanf("%d", &n);
  }while(n<0);

  vectest = reservarMemoria(n);
  if(vectest == NULL)
    return -1;

  cargarVector(vectest, n);

  mostrarVector(vectest, n);

  calcularPromedio(vectest, n);
  return 0;
}


//Ejercicio 7 Maxi
#include <stdio.h>
#include <stdlib.h>

int *crearVector(int cantidad) {
  int *vec;

  vec = malloc(cantidad*sizeof(int));

  return vec;

}



void cargarVector(int *vector, int cantidad) {

  for(int i=0;i<cantidad;i++){
    printf("Ingrese el valor numero %d: ", i+1);
    scanf("%d", vector+i);
  }


}



void mostrarVector(int *vector, int cantidad) {

  for(int i = 0; i<cantidad ; i++){
    printf("\n%d", *(vector+i));
  }


}


int main() {
  int cantidad;
  int *vector;

  printf("Ingrese la cantidad de elementos: ");
  scanf("%d", &cantidad);


  vector = crearVector(cantidad);

  cargarVector(vector, cantidad);

  mostrarVector(vector, cantidad);

  free(vector);
  return 0;
}

// ejercicio 6 samu

#include <stdio.h>
#include <stdlib.h>

int *crearArreglo(int n){
  int *p = malloc(n*sizeof(int));
  return p;
}

void cargarArreglo(int *vinicio, int n){
  for(int i=0; i < n; i++){
    printf("cargar el elemento %d: ", i+1);
    scanf("%d", vinicio+i);
  }
}

void mostrarArreglo(int *v, int n){
  for(int j=0; j < n; j++){
    printf("el elemento %d contiene: %d\n", j+1, *(v+j));
  }
}

void calcularPromedio(int *v, int n, float *promedio){
  int suma = 0;
  for(int i=0; i < n; i++){
    suma += *(v+i);
  }
  *promedio = (float)suma/n;
}

int main() {
  int n;
  int *vector;

  printf("Ingrese la cantidad de elementos: ");
  scanf("%d", &n);

  vector = crearArreglo(n);
  cargarArreglo(vector, n);
  mostrarArreglo(vector, n);

  float promedio;
  float *pprom = &promedio;
  calcularPromedio(vector, n, pprom);

  printf("el promedio es: %.2f", promedio);
  free(vector);
  return 0;
}


