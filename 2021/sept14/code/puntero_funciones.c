#include <stdio.h>


// int* <- almaceno una dirección de memoria
// int <- almacenan un número
int max(int num1, int num2){
  int max;

  if (num1 > num2)
    max = num1;
  else
    max = num2;

  return max;
}

int min(int num1, int num2){
  int min = num2;

  if (num1 < num2)
    min = num1;

  return min;
}

int main(void)
{

  int arreglo[10];
  int *parreglo;
  parreglo = arreglo;
  // arreglo <==> &arreglo[0]
  printf("%d\n", arreglo[1]);
  printf("%d\n", *(parreglo+1));

  // puntero a una función que devuelve un entero y recibe
  // dos enteros
  int (*fun)(int a, int b);
  int (*arr[2])(int a, int b);

  int resultado;
  int temp1 = 100;
  int temp2 = 300;

  // asigno el puntero con la dirección de memoria de la
  // función max
  fun = max;

  // arreglo[i] <==> *(arreglo+i)
  arr[0] = max;// 0x123123124124
  arr[1] = min;// 0x523423498798

  resultado = arr[1](temp1, temp2);

  printf("El resultado es: %d\n", resultado);

  printf("%d\n", sizeof(arr[0]));

  return 0;
}
