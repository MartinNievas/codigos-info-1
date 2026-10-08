// Solicitar una cantidad "n"
// Crear dos vectores dinámicos de "n" enteros.
// Cargar el primer vector y copiar sus elementos al segundo vector.
// Mostrar ambos vectores.
// Liberar correctamente ambas regiones de memoria.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *vector1;
    int *vector2;

    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);

    // COMPLETAR: reservar memoria para vector1
    // COMPLETAR: reservar memoria para vector2
    vector1 = malloc(n * sizeof(int));
    vector2 = malloc(n * sizeof(int));

    // COMPLETAR: verificar las reservas
    if(vector1 == NULL || vector2 == NULL){
      printf("ERROR\n");
      return -1;
    }

    // COMPLETAR: cargar vector1
    for(int i = 0; i < n; i+=1){
      printf("Ingrese un número: ");
      scanf("%d", vector1 + i);
    }
    // COMPLETAR: copiar vector1 en vector2
    for(int i = 0; i < n; i+=1)
      *(vector2 + i) = *(vector1 + i);

    // COMPLETAR: mostrar ambos vectores
    for(int i = 0; i < n; i+=1)
      printf(" vector1[%d]: %d, vector2[%d]: %d\n",
          i, *(vector1 + i), i, *(vector2 + i));

    // COMPLETAR: liberar ambas memorias
    free(vector1);
    free(vector2);
    return 0;
}
