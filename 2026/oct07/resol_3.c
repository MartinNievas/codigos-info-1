#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, max = 0, min = 0, pos;
  int *vector;

  do{
    printf("Ingrese la cantidad de elementos: \n");
    scanf("%d", &n);

    if(n < 0)printf("Error \n");
  }
  while(n < 0);

  vector = malloc(n * sizeof(int));


  if(vector == NULL){
    printf("Error \n");
    return -1;
  }

  for(int i = 0 ; i < n ; i++){
    printf("Ingresar valor \n");
    scanf("%d", vector+i);
  }

  max = vector[0];
  min = vector[0];
  int pos_min = 0, pos_max = 0;

  for( int i = 0; i < n ; i ++){
    if(*(vector + i) > max){
      max = *(vector + i);
      pos_max = i;
    }
  }

  for( int i = 0; i < n ; i ++){
    if(*(vector + i) < min){
      min = *(vector + i);
      pos_min = i;
    }
  }

  // COMPLETAR: buscar máximo y su posición
  printf("el valor maximo es: %d y se encuentra en: %d\n", max, pos_max);
  printf("el valor minimo es: %d y se encuentra en: %d\n", min, pos_min);

  // COMPLETAR: buscar mínimo y su posición
  for( int i = 0; i < n ; i ++){
    if(*(vector + i) == max) printf("la posicion del elemento maximo es: %d",i);
    if(*(vector + i) == min) printf("la posicion del elemento minimo es: %d",i);
  }

  // COMPLETAR: mostrar resultados


  // COMPLETAR: liberar memoria

  free(vector);
  return 0;
}
