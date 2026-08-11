#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {

  srand(time(NULL));
  int num_secreto = rand() % 101;
  int num;

  do{
    printf("Ingrese un número: ");
    scanf("%d", &num);
    if(num < num_secreto)
      printf("Es más grande\n");
    if(num > num_secreto)
      printf("Es más chico\n");
  }while(num != num_secreto);

  printf("Adivinaste!!\n");

  return 0;
}
