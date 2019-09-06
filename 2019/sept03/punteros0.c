#include <stdio.h>
#define TAM 3

int main(void)
{
  float num[TAM];
  float *pnum[TAM];
  int i;

  for (i = 0; i < TAM; i++)
      num[i] = i;

  for (i = 0; i < TAM; i++)
    pnum[i] = &num[i];

  printf("Imprimir las variables\nForma directa:\n");
  
  for (i = 0; i < TAM; i++)
    printf("%f\n", num[i]);

  for (i = 0; i < TAM; i++)
    printf("%f\n", *pnum[i]);

  printf("Direcciones de memoria: \n");
  for (i = 0; i < TAM; i++)
    printf("%p\n", pnum[i]);

  for (i = 0; i < TAM; i++)
    printf("%p\n", &pnum[i]);


  return 0;
}
