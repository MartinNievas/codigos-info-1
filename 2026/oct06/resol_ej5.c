
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  int *vector1;
  int *vector2;

  printf("Ingrese la cantidad de elementos: ");
  scanf("%d", &n);

  // COMPLETAR: reservar memoria para vector1
  vector1 = malloc(n* sizeof (n));

  // COMPLETAR: reservar memoria para vector2
  vector2 = malloc(n* sizeof (n));

  // COMPLETAR: verificar las reservas
  if (vector1 == NULL || vector2 == NULL){
    printf("ERROR: No se pudo reservar memoria\n");
    return -1;
  }

  // COMPLETAR: cargar vector1
  //byanarepro
  for (int i = 0; i < n; i++){
    printf("Elemento [%d] del vector1: ",i);
    scanf("%d", (vector1 + i));
  }

  // COMPLETAR: copiar vector1 en vector2
  for (int i = 0; i < n; i++){
    *(vector2 + i) = *(vector1 + i);
  }

  // vector2 = vector1; // NO

  // COMPLETAR: mostrar ambos vectores
  printf("Tu vector1:\n");

  for (int i = 0; i < n; i++){
    printf("%d\n", *(vector1 + i));
  }
  printf("Vector2 copiado:\n");

  for (int i = 0; i < n; i++){
    printf("%d\n", *(vector2 + i));
  }

  // COMPLETAR: liberar ambas memorias
  free(vector1);
  free(vector2);

  return 0;
}

