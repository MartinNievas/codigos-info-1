#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int *parr;
  int cant;

  do{
    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &cant);
  }while(cant < 0);

  parr = malloc(cant * sizeof(int));

  for (int i = 0; i < cant; i++){
    parr[i] = i;
  }

  for (int i = 0; i < cant; i++){
    printf("%d ", parr[i]);
  }


  return 0;
}

