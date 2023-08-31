#include <stdio.h>
#define TAM 5
int main(void) {
  int arreglo[TAM];
  int numbuscado;
  int f=0;

  for (int i = 0; i < TAM; i++){
    printf("Ingrese elemento [%d]: ", i);
    scanf("%d", &arreglo[i]);
  }

  printf("Ingrese un número que quiera buscar: ");
  scanf("%d", &numbuscado);

  for(int i = 0; i < TAM; i++) {
    if(numbuscado == arreglo[i]){
      printf("El índice del número buscado es: %d\n", i);
      f=1;
    }
  }
  if(f==0){
    printf("El número no existe");
  }
  return 0;
}
