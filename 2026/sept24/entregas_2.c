/*
 * Ejercicio 1: Reserva y liberación básica de un entero
 * Enunciado: Escribe un programa que solicite memoria dinámica con malloc para·
 * almacenar un número entero. Asigna un valor ingresado por el usuario, muéstralo·
 * en pantalla y libera la memoria con free. Verifica que la asignación no retorne NULL.
 */
#include <stdio.h>
#include <stdlib.h>

void main(void) {
  int *ptr, tam;
  do{
    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &tam);
  }while(tam < 0);

  ptr = malloc(tam * sizeof(int));
  if (ptr == NULL){
    printf("Error en la reserva de memoria\n");
    return -1;
  }

  free(ptr);

  return 0;
}

/*----------------------------------------------------------------------------------------------*/
#include<stdio.h>
#include<stdlib.h>


int main(){
  int *p=(int*)malloc(sizeof(int));
  printf("Ingrese numero entero: ");
  scanf("%d", p);
  printf("%d", *p);

  return 0;
}
/*----------------------------------------------------------------------------------------------*/

/*
 * Ejercicio 4: Inversión de un arreglo dinámico in-situ
 * Enunciado: Reserva memoria para un arreglo de N enteros. Rellénalo con valores·
 * aleatorios o secuenciales. Implementa una función que invierta los elementos·
 * dentro de la misma memoria asignada usando aritmética de punteros, y libera la memoria.
 */
void ejercicio_4(void) {
  int n = 6;
  int *arr = malloc((size_t)n * sizeof(int));
  if (arr == NULL) return;

  for (int i = 0; i < n; i++)
    arr[i] = (i + 1) * 10;

  // Invertir

  for (int i = 0; i < n; i++) printf("%d ", arr[i]);
  printf("\n"); 

  free(arr);
  return 0;
}
