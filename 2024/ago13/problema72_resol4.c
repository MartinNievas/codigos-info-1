#include <stdio.h>
#define TAM 5
int main(int argc, char *argv[]) {

  int arreglo[TAM];
  int num;
  int max = 0;

  for(int i=0; i<TAM; i++){

    printf("Ingrese el elemento [%d]: ", i);
    scanf("%d", &num);

    //num = arreglo[i];
    arreglo[i] = num;

    if(arreglo[i-1]>arreglo[i]){
      max = arreglo[i+1];
      printf("%d\n", max);
    }
  }
  printf("el mayor elemento del arreglo es: %d", max);
  return 0;
}
}
