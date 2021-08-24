#include <stdio.h>

float busca_max(float arreglo[], int tam)
{
  int i;
  float max;

  max = arreglo[0];
  for (i = 1; i < tam; i++){
    if (arreglo[i] > max){
      max = arreglo[i];
    }
  }

  return max;
}

int main(void)
{

  float max;
  int i;
  float temperaturas[20] = {
      25, 33, 1, 49, -19,
      6, 50, 40, -5, 32,
      -17, 22, 35, -3, -2,
      35, 33, 35, 30, 39
  };

  max = temperaturas[0];
  // Inicio desde el segundo, porque el primero ya lo tengo en max
  for (i = 1; i < 20; i++){
    if (temperaturas[i] > max){
      max = temperaturas[i];
    }
  }
  printf("La temperatura máxima es: %f\n", max);

  // función para buscar el máximo
  max = busca_max(temperaturas, 20);
  printf("La temperatura máxima es: %f\n", max);


  return 0;
}
