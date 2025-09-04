#include <stdio.h>
#define TAM 3

void validar_positividad ( int * a ){

  do{
    printf("Ingrese un número: ");
    scanf("%d", a);
    if (*a <= 0){
      printf("Números solo positivos!\n");
    }
  }while(*a <= 0);

}

int main(void) {

  int numeros[TAM];

  // Completar para cargar solo números positivos
  for (int i = 0; i < TAM; i++){
    validar_positividad(&numeros[i]);
  }

  // Hasta acá
  for (int i = 0; i < TAM; i++){
    printf("numeros[%d]: %d\n", i, numeros[i]);
  }

  return 0;
}
