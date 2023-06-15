#include <stdio.h>
// Modificar el siguiente programa para que:
//  - El número de filas y columnas es ingresado por el usuario
//  - El número de filas y columnas debe ser positivo
//  - Si son negativos, se deben volver a ingresar

int main(void) {

  int i,j, filas, col;

  printf("Ingrese filas: ");
  scanf("%d", &filas);
  while(filas < 0){
    printf("Ingrese filas: ");
    scanf("%d", &filas);
  }

  do{
    printf("Ingrese columnas: ");
    scanf("%d", &col);
  }while(col < 0);

  for (i = 0; i < filas; i++){
    for (j = 0; j < col; j++){
      printf("%4d ", i*col+j);
    }
    printf("\n");
  }

  return 0;
}
