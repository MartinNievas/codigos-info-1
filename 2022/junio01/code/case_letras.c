#include <stdio.h>

int main(void) {

  char letra;

  printf("Ingrese la operación: ");
  scanf("%c", &letra);

  switch(letra){
  case '+':
    printf("Suma\n");
  break;
  }

  return 0;
}
