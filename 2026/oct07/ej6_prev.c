// Punteros a funciones
#include <stdio.h>
#include <stdlib.h>

// función para calcular la sumatoria
int sumatoria(int *v, int n){

  int sum = 0;

  for (int i = 0; i < n; i++){
    sum += *(v + i);
  }

  return sum;
}

int main() {
    int n;
    int *vector;

    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);

    vector = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++){
      printf("Ingrese el elemento [%d]: ", i+1);
      scanf("%d", vector+i);
    }

    for (int i = 0; i < n; i++){
      printf("elemento[%d] = %d\n", i, *(vector+i));
    }

    int suma = sumatoria(vector, n);
    printf("La sumatoria es: %d\n", suma);

    free(vector);


    return 0;
}
