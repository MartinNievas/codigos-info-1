#include <stdio.h>
#define TAM 3

int main(void)
{
  int num[TAM] = {3,14,15};
  int *pnum[TAM];
  int i;

  for (i = 0; i < TAM; i++)
    pnum[i] = &num[i];

  printf("Imprimir las variables\nForma directa:\n");
  for (i = 0; i < TAM; i++)
    printf("num[%d]: %d\n", i, num[i]);
  printf("Forma indirecta:\n");
  for (i = 0; i < TAM; i++)
    printf("*pnum[%d]: %d\n", i, *pnum[i]);

  printf("------------------------------\n");

  printf("Imprimir las direcciones\nForma 1:\n");
  for (i = 0; i < TAM; i++)
    printf("&num[%d]: %p\n", i, &num[i]);
  printf("Forma 2:\n");
  for (i = 0; i < TAM; i++)
    printf("pnum[%d]: %p\n", i, pnum[i]);




  return 0;
}
