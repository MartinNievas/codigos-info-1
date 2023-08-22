#include <stdio.h>
#define TAM 10

int main(int argc, char *argv[]) {

  int busc, N[TAM], i, v;

  for( i = 0 ; i < TAM ; i++){
    printf("ingrese número %d: ", i+1);
    scanf("%d", &N[i]);
  }

  printf("ingrese número a buscar: ");
  scanf("%d", &busc);

  v=0;

  for( i = 0 ; i < TAM ; i++){
    if (N[i]==busc){
      printf("su número existe en la posicion: %d.", i);
      v=1;
      // return 0;
      break;
    }

  }

  if(v==0){
    printf("su número no se encuentra en el arreglo.");
  }

  return 0;
}
