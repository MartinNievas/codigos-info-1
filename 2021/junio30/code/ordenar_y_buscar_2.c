#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

// Arreglo TAM
// ingrese tam >>      tam > 0 && tam < TAM
// Inicializar todos los tam elementos con números aleatorios entre 0 y 100
// Ordenar de mayor a menor
// Pedirle al usuario un número a buscar (binario)

int main(void) {

  int arreglo[TAM];
  int tam;
  int temp;

  srand(time(NULL));

  // Ingrese tam y validar
  do {
    printf("Ingrese tam: ");
    scanf("%d", &tam);
  }while (tam < 0 || tam > TAM);
  //} while (!(tam >= 0 && tam <= TAM));

  // Inicializar con números aleatorios los tam elementos entre 10 y 180
  // 0 - 180
  // 10 - 171
  for (int i = 0; i < tam ; i++)
    arreglo[i] = rand() % 171 + 10;

  printf("\nAntes de ordenar\n");
  for (int i = 0; i < tam ; i++)
    printf("%d ", arreglo[i]);

  // Ordenar de menor a mayor por método burbuja
  for (int i = 0; i < tam; i++){
    for (int j = 0; j < tam-1; j++){
      if (arreglo[j] > arreglo[j+1]){
        temp = arreglo[j];
        arreglo[j] = arreglo[j+1];
        arreglo[j+1] = temp;
      }
    }
  }

  printf("\nDespués de ordenar\n");
  for (int i = 0; i < tam ; i++)
    printf("%d ", arreglo[i]);

  int num;
  int final, inicio, medio;
  // Repetir la búsqueda hasta que ingrese un número existente
  do{
    printf("\nIngrese un número a buscar: ");
    scanf("%d", &num);

    inicio = 0;
    final = tam - 1;
    medio = (inicio + final) / 2;

    while (inicio <= final){

      if  ( arreglo[medio] == num){
        printf("Encontré el número %d, en la posición %d\n", num, medio);
        break;
      } else if ( num > arreglo[medio]){
        inicio = medio + 1;
      } else {
        final = final - 1;
      }

      medio = (inicio + final)/2;

    }

    if (inicio > final){
      printf("El elemento no existe en el arreglo\n");
    }
  }while(inicio > final);

  return 0;
}
