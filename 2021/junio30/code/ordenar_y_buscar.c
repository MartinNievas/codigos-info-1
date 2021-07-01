#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

int main(void) {

  int primero, final, medio, num;
  int tam;
  int arreglo[TAM];
  int temp;

  // Inicializamos la semilla para el generador de números
  // pseudo aleatorios
  srand(time(NULL));

  // Validar que tam esté entre 0 y TAM
  do {
    printf("Ingrese la cantidad de elementos a generar: ");
    scanf("%d", &tam);
  } while (tam < 0 || tam > TAM );

  // Inicializamos el arreglo con número aleatorios
  for (int i = 0; i < tam; i++){
    arreglo[i] = rand() % TAM;
  }

  // Imprimir el arreglo desordenado
  printf("\nArreglo desordenado\n");
  for (int i = 0; i < tam; i++)
    printf("%d \n", arreglo[i]);

  // Ordenamiento burbuja
  for (int i = 0; i < tam; i++){
    for (int j = 0; j < tam-1; j++){
      if (arreglo[j] > arreglo[j+1]){
        temp = arreglo[j];
        arreglo[j] = arreglo[j+1];
        arreglo[j+1] = temp;
      }
    }
  }

  // Imprimir el arreglo ordenado
  printf("\nArreglo ordenado\n");
  for (int i = 0; i < tam; i++)
    printf("%d \n", arreglo[i]);


  printf("\nIngrese el número a buscar: ");
  scanf("%d", &num);

  // búsqueda binaria
  primero = 0;
  final = tam - 1;
  medio = (primero+final)/2;
  while (primero <= final) {
    if (arreglo[medio] < num)
      primero = medio + 1;
    else if (arreglo[medio] == num) {
      printf("%d está en la posición %d.\n", num, medio+1);
      break;
    }
    else
      final = medio - 1;
    medio = (primero + final)/2;
  }
  if (primero > final)
    printf("El número %d no se encuentra en el arreglo.\n", num);
  return 0;
}
