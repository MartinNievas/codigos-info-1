#include <stdio.h>
int sumarElementos(int vec[], int tam);

int main(int argc, char *argv[])
{
  int nota[5] = {1, 2, 3, 4, 5};
  int tam = 5;
  int fin = sumarElementos(nota,tam);

  printf("%d",fin);

  return 0;
}

int sumarElementos(int vec[], int tam){
  int sum = 0;

  for(int i = 0; i < tam; i++){
    sum += vec[i];
  }
  return sum;
}

