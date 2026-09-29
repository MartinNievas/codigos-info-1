#include <stdio.h>

void ingresar_positivo(int *num){

  do{
    printf("Ingrese un número: ");
    scanf("%d", num);
  }while( *num < 0);

}

int main(void) {

  int num;

  ingresar_positivo(&num);

  printf("El número es: %d\n", num);

  return 0;
}
