#include <stdio.h>
#define N 10

// Resolver utilizando aritmética de punteros
float producto_punto(float *a, float *b, int tam){
  float sum = 0;
  for (int i = 0; i < tam; i++){
    sum += *(a + i) * *(b + i);
  }
  return sum;
}

float producto_punto(float *a, float *b, int tam){
  float sum = 0;
  for (int i = 0; i < tam; i++){
    sum += *a * *b;
    a++;
    b++;
  }
  return sum;
}

int main(void) {

  float arreglo1[N], arreglo2[N];
  float res = producto_punto(arreglo1, arreglo2, N);

  printf("El producto es: %f\n", res);

  return 0;
}
