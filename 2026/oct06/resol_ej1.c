// ej1
//Solicitar al usuario la cantidad `N` de números enteros que desea almacenar.
//Crear dinámicamente un vector de `N` enteros, solicitar los valores al usuario y luego mostrarlos.
//Finalmente, liberar la memoria utilizada.
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  int *vector;

  do{
    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);
  }while(n < 0);
  // COMPLETAR: reservar memoria dinámica para N enteros
  vector = malloc(n * sizeof(int));

  // COMPLETAR: verificar si la reserva de memoria fue exitosa
  if(vector == NULL){
    printf("ERROR: No se logró reservar memoria\n");
    return -1;
  }

  // COMPLETAR: cargar los elementos del vector
  for (int i = 0; i < n; i++){
    printf("Ingrese un número: ");
    scanf("%d", vector + i);
  }

  // COMPLETAR: mostrar los elementos
  for (int i = 0; i < n; i++){
    printf("%d\n", *(vector + i));
  }

  // COMPLETAR: liberar la memoria
  free(vector);

  return 0;
}
