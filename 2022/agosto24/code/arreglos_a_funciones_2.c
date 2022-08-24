#include <stdio.h>


float buscar_el_mayor(float arreglo[], int tam){

  float max_func = arreglo[0];
  // Inicio desde el segundo, porque el primero ya lo tengo en max_func
  for (int i = 1; i < tam; i++){
    if (arreglo[i] > max_func){
      max_func = arreglo[i];
    }
  }
  return max_func;
}

int main(void)
{

  float max_main;
  float temperaturas[20] = {
      25, 33, 1, 49, -19,
      6, 50, 40, -5, 32,
      -17, 22, 35, -3, -2,
      35, 33, 35, 30, 39
  };

  max_main = buscar_el_mayor(temperaturas, 20);

  printf("La temperatura máxima es: %f\n", max_main);

  return 0;
}

