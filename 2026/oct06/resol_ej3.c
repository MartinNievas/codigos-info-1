//ej 3

#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  int *vector;

  printf("Ingrese la cantidad de elementos: ");
  scanf("%d", &n);

  // COMPLETAR: reservar memoria
  vector = malloc(n* sizeof (int));


  // COMPLETAR: verificar reserva
  if (vector == NULL){
    printf("ERROR: No se pudo reservar memoria\n");
    return -1;
  }

  // COMPLETAR: cargar vector
  for (int i = 0; i < n; i++){
    printf("Elemento [%d]: ",i);
    scanf("%d", (vector + i));
  }

  // COMPLETAR: buscar máximo y su posición
  int max = *vector;
  int pos_max = 0;
  for (int i = 0; i < n; i++){
    if (max < *(vector + i)){
      max = *(vector + i);
      pos_max = i;
    }
  }

  // COMPLETAR: buscar mínimo y su posición
  int pos_min = 0;
  for (int i = 0; i < n; i++){
    if (*(vector + pos_min) > *(vector + i)){
      pos_min = i;
    }
  }

  // COMPLETAR: mostrar resultados
  printf("MAXIMO: %d\n", pos_max);
  printf("MINIMO: %d\n", pos_min);

  // COMPLETAR: liberar memoria
  free(vector);

  return 0;
}
