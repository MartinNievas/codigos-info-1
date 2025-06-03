#include <stdio.h>
//https://codeshare.io/info1R1enunciado
//Ejercicios 5.24 y 6.36

int main(void) {

  int nota;

  do{
    printf("Ingrese nota: ");
    scanf("%d", &nota);
  }while ( nota < 0 || nota > 10);

  printf("La nota %d es válida\n", nota);

  return 0;
}
