#include <stdio.h> // juan :p
#define TAM 10
int main(void){
  int arreglo[TAM];
  int buscar,temp,i,i2;
  int hay=0;
  printf("ingrese los numeros del arreglo:\n");

  for(i2=0;i2<TAM;i2++){
    printf("el numero de la celda %d es :",i2);
    scanf("%d",&arreglo[i2]);
  }

  printf("ingrese un numero para buscar\n");
  scanf("%d",&buscar);

  for(i=0;i<TAM;i++){
    if (arreglo[i]==buscar){
      printf("su numero se encuentra en la celda %d",i);
      hay=1;
      break;
    }
  }

  if(hay==0){
    printf("ese numero no se encuentra en el arreglo lol\n");
  }

  return 0;
}
