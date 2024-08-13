#include <stdio.h>
#define TAM 5
int main(int argc, char *argv[]) {
  int arreglo[TAM];
  int mayor = 0;
  for(int i = 0; i < TAM; i++){
    printf("Hola, ingrese el numero[%d]: ", i);
    scanf("%d", &arreglo[i]);
    if(arreglo[i] > mayor){
      mayor = arreglo[i];
    }
  }
  printf("El mayor es: %d", mayor);
  return 0;
}
