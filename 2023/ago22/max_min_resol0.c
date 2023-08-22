#include <stdio.h>
#define TAM 3

int main(int argc, char *argv[]) {
  int arreglo [TAM], i;
  int Max, Min;

  for (i=0 ; i < TAM; i++){
    printf ("Ingrese valor:\t");
    scanf ("%d", &arreglo [i] );
  }

  Max = Min = arreglo [0];

  for (i=1 ; i < TAM; i++){
    if (Max < arreglo[i]){
      Max = arreglo[i];
    }
    if (Min>arreglo[i]){
      Min =arreglo[i];
    }
  }
  printf ("El maximo es %d y el minimo es %d\n",Max , Min);
  return 0;
}
