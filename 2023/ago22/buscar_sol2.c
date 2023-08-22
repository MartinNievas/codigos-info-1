#include <stdio.h>
#define TAM 10
int main()
{

  int arreglo[TAM] ={3,2,5,4,5,6,7,8,9,10};
  int posicion = -1;
  for(int i = 0; i<10;i++){
    if(arreglo[i]==3){
      posicion = i;
    }

  }

  if(posicion != -1){
    printf("la posicion del numero 3 es: %i ",posicion);
  }
  else{
    printf("el numero 3 no existe en el arreglo");
  }


  return 0;
}
