
// Solicitar una cantidad `N` de números reales.
// Reservar dinámicamente un vector de `N` elementos de tipo `float`.
// Cargar los valores, calcular el promedio y mostrarlo.
// Finalmente, liberar la memoria.
#include <stdio.h>
#include <stdlib.h>
//Quinteros Brian
int main() {
  int n;
  float *vector;
  float suma = 0;

  printf("Ingrese la cantidad de elementos: ");
  scanf("%d", &n);

  // COMPLETAR: reservar memoria para N valores float

  vector = malloc(n*sizeof(float));

  // COMPLETAR: verificar que la reserva fue exitosa

  if(vector == NULL){
    printf("No se a reservado memoria\n");
    return -1;
  }

  for (int i =0; i<n;i++){
    printf("Ingrese el valor: \n");
    scanf("%f", vector+i);
  }

  for (int i =0; i<n;i++){
    suma = suma + *(vector+i);
  }

  printf("%.2f", suma/n);

  // COMPLETAR: liberar la memoria

  free(vector);

  return 0;
}
----------------------------------------------------------------------
EJ 2 CARRIZO
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  float *vector;
  float suma = 0;

  do{
    printf("Ingrese la cantidad de elementos: \n");
    scanf("%d", &n);

    if(n < 0)printf("Error \n");
  }
  while(n < 0);
  // COMPLETAR: reservar memoria dinámica para n enteros
  vector = malloc(n * sizeof(int));

  // COMPLETAR: verificar si la reserva de memoria fue exitosa
  if(vector == NULL){
    printf("Error \n");
    return -1;
  }

  for(int i = 0 ; i < n ; i++){
    printf("Ingresar valor \n");
    scanf("%f", vector+i);
    suma += *(vector+i);
  }

  // COMPLETAR: cargar los valores
  // COMPLETAR: calcular la suma
  printf("El promedio es: %.2f", (float)suma/n);

  // COMPLETAR: calcular y mostrar el promedio


  // COMPLETAR: liberar la memoria

  free(vector);
  return 0;
}
