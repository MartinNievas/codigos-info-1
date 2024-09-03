#include <stdio.h>
#define SIZE 30

int main(void) {

  int dni[SIZE] = {0};
  int tam;


  printf("Ingrese tamaño: ");
  scanf("%d", &tam);

  for (int i = 0; i < SIZE; i++){
    printf("%d\n", dni[i]);
  }



  return 0;
}
