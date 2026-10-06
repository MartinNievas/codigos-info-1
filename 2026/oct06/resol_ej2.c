#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  float *vector;
  float suma = 0;

  printf("Ingrese la cantidad de elementos: ");
  scanf("%d", &n);

  // COMPLETAR: reservar memoria para N valores float
  vector = malloc(n* sizeof (float));

  // COMPLETAR: verificar que la reserva fue exitosa
  if (vector == NULL){
    printf("ERROR: No se pudo reservar memoria\n");
    return -1;
  }

  // COMPLETAR: cargar los valores
  for (int i = 0; i < n; i++){
    printf("Elemento [%d]: ",i);
    scanf("%f", (vector + i));
  }

  // COMPLETAR: calcular la suma
  for (int i = 0; i < n; i++){
    suma+=*(vector + i);
  }

  // COMPLETAR: calcular y mostrar el promedio
  printf("Promedio = %.2f", suma/n);

  // COMPLETAR: liberar la memoria
  free(vector);

  return 0;
}

