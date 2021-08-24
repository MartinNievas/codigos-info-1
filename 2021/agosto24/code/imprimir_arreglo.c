#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 20
// Sin funciones

void inicializar_arreglo(int arreglo[], int tam){

  for (int i = 0; i < tam; i++)
    arreglo[i] = rand()%100;

}

void imprimir(float arreglo[], int);
void ordenar(float arreglo[], int);


int main(void) {

  int arreglo[TAM];

  // Inicializarlo con números aleatorios
  srand(time(NULL));

  inicializar_arreglo(arreglo, TAM);
  // imprimir(arreglo,TAM);
  // ordenar(arreglo,TAM);
  // imprimir(arreglo,TAM);

  printf("No Ordenado\n");
  // Imprimir el arreglo desordenado
  for (int i = 0; i < TAM; i++)
    printf("%d\n", arreglo[i]);

  // Ordenar el arreglo - men a may
  for (int i = 0; i < TAM; i++){
    for (int j = 0; j < TAM -1; j++){
      if (arreglo[j] > arreglo[j+1]){
        int temp = arreglo[j];
        arreglo[j] = arreglo[j+1];
        arreglo[j+1] = temp;
      }
    }
  }

  printf("Ordenado\n");
  // Imprimir el arreglo ordenado
  for (int i = 0; i < TAM; i++)
    printf("%d\n", arreglo[i]);

  return 0;
}
