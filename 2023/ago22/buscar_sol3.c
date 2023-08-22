#include <stdio.h>
#define TAM 3

int main(int argc, char *argv[]) {
  int arreglo [TAM], i;
  int elem;

  for (i=0 ; i < TAM; i++){
    printf ("Ingrese valor:\t");
    scanf ("%d", &arreglo [i] );
  }
  printf ("Ingrese elemento a buscar:\t");
  scanf ("%d", &elem);

  for (i=0; i< TAM ; i++){
    if (arreglo [i] == elem){
      printf ("El elemento se encuentra en el indice %d\n", i);
      break;
    }
    if (i==(TAM-1) && elem != arreglo [i]){
      printf ("El elemento no existe en el arreglo.\n");
    }
  }
  return 0;
}
