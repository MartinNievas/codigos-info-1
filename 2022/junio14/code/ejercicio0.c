#include <stdio.h>
#define TAM 5

int main(void) {
  // Ingresar 10 temperaturas

  int temps[TAM];
  int i;

  for(i = 0; i < TAM; i++){
    printf("Ingrese el elemento %d: ",i);
    scanf("%d", &temps[i]);
  }

  int mayor = temps[0];
  for(i = 0; i < TAM; i++){

    if (mayor < temps[i]){
      mayor = temps[i];
    }

    printf("%d\n", temps[i]);
  }

  printf("El mayor es: %d\n", mayor);



  return 0;
}
