#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {

  int num;
  int num_secreto;
  srand(time(NULL));

  num_secreto = rand() % 101;

  do{
    printf("Ingresar un número: ");
    scanf("%d", &num);
    if (num != num_secreto){
      printf("Seguí participando\n");
    }
    if(num < num_secreto)
      printf("El número es más grande\n");
    if(num > num_secreto)
      printf("El número es más chico\n");
  }while(num != num_secreto);

  printf("Adivinaste!\n");

  return 0;
}
