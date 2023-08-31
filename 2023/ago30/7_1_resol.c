#include <stdio.h>
#define TAM 3
int main() {
  int arreglo[TAM];

  for(int i=0;i<TAM;++i){
    printf("ingrese el valor %d: ",i+1);
    scanf("%d",&arreglo[i]);
  }

  for(int i=0; i < TAM ; ++i){
    if(arreglo[i] < 0){
      arreglo[i]* = -1;
    }
  }

  for(int i = 0; i < TAM; ++i){
    printf("valor: %d\n", arreglo[i]);
  }

  return 0;
}
