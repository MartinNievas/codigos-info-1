#include <stdio.h>

int main(void) {

  char nombre[20];

  scanf("%[^\n]s", nombre);


  printf("El nombre es: %s\n", nombre);

  return 0;
}
