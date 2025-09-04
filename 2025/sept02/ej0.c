#include <stdio.h>

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

  int numero;

  // Completar para cargar solo números positivos
  validar_positividad(&numero);

  // Hasta acá
  printf("El número ingresado es: %d\n", numero);
  return 0;
}
