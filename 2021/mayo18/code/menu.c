#include <stdio.h>

int main(void) {

  char letra = 'e';

  printf("Letra vale: %c\n", letra);
  printf("Letra vale: %d\n", letra);

  switch(letra){
    case 'a':
      printf("La letra es \"a\"\n");
    break;
    case 's':
      printf("La letra es \"s\"\n");
    break;

    default:
      printf("No existe esa letra\n");
    break;
  }
  return 0;
}
