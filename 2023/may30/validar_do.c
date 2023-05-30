#include <stdio.h>

int main(void) {

  int num;

  //1. Pedir al usuario un número negativo
  //2. Validar que num sea negativo utilizando
  //   un do..while
  do{
    printf("Ingrese un número: ");
    scanf("%d", &num);
    if( num >= 0){
      printf("Solo número negativos\n");
    }
  }while(num >= 0);


  printf("El número negativo es: %d\n", num);

  return 0;
}
