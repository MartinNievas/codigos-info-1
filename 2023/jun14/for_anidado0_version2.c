#include <stdio.h>
// Modificar el siguiente programa para que:
//  - El número de filas y columnas es ingresado por el usuario
//  - El número de filas y columnas debe ser positivo
//  - Si son negativos, se deben volver a ingresar

int main(void) {

  int i,j, filas, col;

  do{
    printf("Ingrese filas: ");
    scanf("%d", &filas);

    printf("Ingrese columnas: ");
    scanf("%d", &col);
  }while(col < 0 || filas < 0);

  for (i = 0; i < filas; i++){
    for (j = 0; j < col; j++){
      printf("%4d ", i*10+j);
    }
    printf("\n");
  }

  return 0;
}

