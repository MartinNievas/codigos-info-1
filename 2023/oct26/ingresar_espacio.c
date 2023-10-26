#include <stdio.h>

int main(void) {

  char nombre_completo[100] = {0};


  scanf("%[a-zA-Z0-9^' ']s", nombre_completo);
  printf("Su nombre completo es: %s\n", nombre_completo);

  return 0;
}
