#include <stdio.h>
//modificar el programa naterior para que el numero de filas y columnas sea ingresado por el usuario

int main(void){

  int i,j,fil,col;

  printf("Ingrese el numero de filas: ");
  scanf("%d",&fil);
  while(fil <= 0){
    printf("Ingrese el numero de filas: ");
    scanf("%d",&fil);
  }

  do{
    printf("Ingrese el numero de columnas: ");
    scanf("%d",&col);
  }while(col <= 0);

  for (i = 0; i < fil; i++){
    for (j = 0; j < col; j++){
      printf("%4d ",i*col+j);
    }
    printf("\n");
  }
  return 0;
}
