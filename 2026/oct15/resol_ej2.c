//Ejercici/o 2 Maxi
#include <stdio.h>

int cuadrado(int n)
{
  return n*n;
}


int doble(int n)
{
  return 2*n;
}

void procesarVector( int vector[], int cantidad,int (*operacion)(int)){

  for (int i = 0; i < cantidad; i++)
  {
    printf("%d \n", operacion(vector[i]));
  }

  printf("\n");
}

int main(void)
{
  int vector[] = {2, 4, 6, 8, 10};
  int cantidad = 5;
  int (*operacion)(int);
  printf("Cuadrados:\n");
  operacion = cuadrado;
  procesarVector(vector, cantidad, operacion);



  printf("Dobles:\n");
  operacion = doble;
  procesarVector(vector, cantidad, operacion);


  return 0;
}
