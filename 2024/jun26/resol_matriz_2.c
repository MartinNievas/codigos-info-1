#include <stdio.h>// Kisinger Leandro, Aguistina Guevara

int main(void) {


  int fil;
  int col;

  printf(" ingrese la cantidad de filas:\n ");
  scanf("%d",&fil);

  printf(" ingrese la cantidad de columnas:\n ");
  scanf("%d",&col);

  for(int i=1 ; i <= fil ; i++){

    for(int j=1 ; j <= col ; j++){
      printf("%d ", j + col*(i-1));
    }
    printf("\n");
  }
  return 0;

}
