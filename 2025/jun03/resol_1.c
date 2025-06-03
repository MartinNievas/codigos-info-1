#include <stdio.h>

int main()
{
  unsigned int A=0;
  unsigned int B=1;
  unsigned int C=1;
  unsigned int meta=0;

  printf("Ingrese la meta para saber quien gana:");
  scanf("%u",&meta);
  while(A<=meta && B<=meta && C<=meta){
    A+=3;
    B*=2;
    C+=2;
    printf("La posicion esta\n");
    printf("A:%u\n",A);
    printf("B:%u\n",B);
    printf("C:%u\n",C);
  }

  if(A>=meta){
    printf("Gano A\n");
  }
  if (B>=meta){
    printf("Gano B\n");
  }
  if(C>=meta){
    printf("Gano C\n");
  }

}
