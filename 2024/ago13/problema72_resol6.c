#include <stdio.h>
#define elem 5

int main(void){

  int arreglo[elem];
  int num;
  int mayor;

  for (int i=0 ; i < elem ; i++ ){

    printf("Ingresar el valor:");
    scanf("%d", &num);

    arreglo[i] = num;

    if (i == 0){
      mayor = num;
    } else if (mayor < num){
      mayor = num;
    }

  }
  printf("El mayor es: %d ", mayor);
}


