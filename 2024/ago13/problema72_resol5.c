#include <stdio.h>
#define TAM 5
int main()
{
  int num, max=0;
  int arreglo [TAM];

  for(int i=0; i<TAM;i++){
    printf("Ingrese el elemento [%d]: ", i);
    scanf("%d", &num);
    arreglo[i] = num;
  }

  for(int j=0; j<num; j++){
    j=num;
    max=j;
  }

  printf("El elemento mayor es: %d", max);





  return 0;
}

