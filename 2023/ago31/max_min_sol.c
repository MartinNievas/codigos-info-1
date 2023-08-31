#include <stdio.h>
#define TAM 3
int main() {
  int arreglo[TAM];
  int may;
  int men;

  for(int i=0;i<TAM;++i){
    printf("ingrese el valor %d: ",i+1);
    scanf("%d",&arreglo[i]);
  }

  men=arreglo[0];
  may=arreglo[0];

  for(int i=0;i<TAM;++i){
    if(arreglo[i]>may){
      may=arreglo[i];
    }
    if(arreglo[i]<men){
      men=arreglo[i];
    }
  }
  printf("valor mayor: %d\n",may);
  printf("valor menor: %d\n",men);
  return 0;
}
