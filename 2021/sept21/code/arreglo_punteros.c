#include <stdio.h>
// Arreglo bidimensional a una función

void imprimir_frase_aleatoria(char **p)
{
  printf("%s\n", p[2]);
}

void imprimrir_bidimensional(float m[][10])
{
  printf("%f\n", *(*(m+2)+2));
}

int main(void) {

  char *frases[] = {
  "primera frase", // char *pf = "primera frase";
  "segunda frase"
  };

  float matriz[10][10] = {
    {0,0,0,0,0,0},
    {0,0,0,0,0,0},
    {0,0,0,0,0,0},
    {0,0,0,0,0,0}
  };

  imprimrir_bidimensional(matriz);
  //int temp;
  //int *ptemp;
  //int **pptemp;

  //ptemp = &temp;
  //pptemp = &ptemp;

  imprimir_frase_aleatoria(frases);


  return 0;
}
