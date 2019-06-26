#include <stdio.h>
#define TAM_FREC 11
#define TAM_ALU 23

int main(void)
{
  int frecuencia[TAM_FREC] = {0};
  int notas[TAM_ALU] = {2,2,1,4,5,3,1,9,7,3,5,7,3,4,6,7,8,9,10,10,2,7,8};

  for (int i = 0; i < TAM_ALU; i++)
    ++frecuencia[notas[i]];

  printf("%6s\t%10s\n","Nota","Frecuencia");

  for (int i = 1; i < TAM_FREC; i++)
    printf("%6d\t%10d\n", i,frecuencia[i]);


  return 0;
}
