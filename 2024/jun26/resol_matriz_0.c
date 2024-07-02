#include <stdio.h>

int main()
{
  int i, j, filas, col,elementos2, elementos;
  elementos = 0 ;
  do {
    printf("ingrese la cantidad de filas que quieras que tenga la matriz: ");
    scanf("%d", &filas);
    if (filas < 0)
      printf("Error: el numero de filas debe ser positivo:\n Intente nuevamente: ");
  } while(filas < 0);

  do {
    printf("ingrese la cantidad de columnas que quieras que tenga la matriz: ");
    scanf("%d", &col);
    if (col < 0)
      printf("Error: el numero de columnas debe ser positivo:\n Intente nuevamente: ");
  } while(col < 0);

  for (j = 0; j < filas; j++)
  {
    for(i = 0; i < col; i++)
    {
      if ( i <= j)
        printf("%d\t", ++elementos);
      else
        printf(" ");

    }
    printf("\n");
  }
  return 0;
}
