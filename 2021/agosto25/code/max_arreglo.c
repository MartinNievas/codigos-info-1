#include <stdio.h>
#define TAM 20

int main(void)
{

  int i;
  float max;
  float temperaturas[TAM] = {
      25, 33, 1, 49, -19,
      6, 50, 40, -5, 32,
      -17, 22, 35, -3, -2,
      35, 33, 35, 30, 39
  };

  max = temperaturas[0];
  // Inicio desde el segundo, porque el primero ya lo tengo en max
  for (i = 1; i < TAM; i++){
    if (temperaturas[i] > max){
      max = temperaturas[i];
    }
  }

  printf("La temperatura máxima es: %f\n", max);


  return 0;
}

