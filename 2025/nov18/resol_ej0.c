#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 1l<<10l

void ordenar(int *, int );
void imprimir(int *, int);
int buscar_num_mbinario(int *, int, int);


int main(void) {

  int *arreglo;
  int num;
  srand(time(NULL));
  arreglo = malloc (TAM * sizeof(int));

  if (arreglo == NULL){
    printf("No se reservó memoria\n");
    exit(1);
  }

  for(int i = 0; i < TAM; i++){
    arreglo[i] = (-100) + rand() % (10101); 
  }

  ordenar(arreglo, TAM);
  imprimir(arreglo, TAM);

  printf("Ingrese el numero que desea buscar: ");
  scanf("%d", &num);

  int index = buscar_num_mbinario(arreglo, TAM, num);
  if (index != -1)
    printf("\nEl numero buscado se encuentra en la posicion: %d\n", index);
  else
    printf("El número no se encuentra en el arreglo\n");

  return 0;
}
void ordenar(int *arreglo, int tam) {
  int i, j, temp;
  for (i = 0; i < tam - 1; i++) {
    for (j = 0; j < tam - i - 1; j++) {
      if (arreglo[j] > arreglo[j + 1]) {

        temp = arreglo[j];
        arreglo[j] = arreglo[j + 1];
        arreglo[j + 1] = temp;
      }
    }
  }
}
void imprimir(int *arreglo, int tam){
  for(int i = 0; i < tam; i++){
    printf("%d) %d\n",i + 1, arreglo[i]);
  }
}
int buscar_num_mbinario(int *arreglo, int tam, int num){
  int low = 0;
  int high = tam - 1;
  int mid;

  while (low <= high) {
    mid = low + (high - low) / 2;
    if (arreglo[mid] == num) {
      return mid;
    }
    if (arreglo[mid] < num) {
      low = mid + 1; 
    } 
    else {
      high = mid - 1;
    }
  }
  return -1;
}
