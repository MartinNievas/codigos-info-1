#include <stdio.h>
#define TAM 10

// Secuencial
int main(void) {
  int arreglo[TAM];

  for(int i = 0; i < TAM; i++){
    printf("Ingrese los numeros del arreglo:");
    scanf("%d",&arreglo[i]);
  }
  int buscado = 0;
  int encontrado = -1;
  printf("Que numero desea buscar?:");
  scanf("%d",&buscado);

  for(int j = 0; j < TAM; j++){
    if(buscado == arreglo[j]){
      encontrado = j;
      break;
    }
  }

  if(encontrado != -1){
    printf("Su numero se encuentra en la posicion nuero %d del arreglo",(encontrado + 1));
  }else
    printf("El numero que desea buscar no existe dentro del arreglo");


  return 0;
}
