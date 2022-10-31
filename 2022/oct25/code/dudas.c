#include <stdio.h>

int *suma(int, int);
struct dudas_t {
  int x;
  int y;
};

int main(void) {

  int *p;
  int arreglo[10];
  int (*pf)(); // Puntero a función
  int (*pf[10])(); // Arreglo de punteros a función

  // Resolver:
  // - Escribir un arreglo de 10 punteros a funciones
  // que reciben un puntero a int y devuelve
  // un puntero  a float
  float *(*arreglo[10])(int*)

  // - Escribir un arreglo de 10 punteros a int
  int* arreglo[10];

  // - Escribir un puntero a una función que
  // recibe dos punteros a float y devuelve
  // un puntero a int
  int* (*pfun)(float*, float*);


  int temp;
  int* ptemp;
  ptemp = &temp;
  int** pptemp;
  pptemp = &ptemp;


  return 0;
}
