#include <stdio.h>

union entero_y_chars{
  int entero;
  char letras[4];
};

int main(void) {

  union entero_y_chars conversor;

  //|00000000|00000000|00000000|00000010|
  conversor.letras[1] = 1;

  printf("entero: %d\n", conversor.entero);
  printf("letras[0]: %d\n", conversor.letras[0]);
  printf("letras[1]: %d\n", conversor.letras[1]);
  printf("letras[2]: %d\n", conversor.letras[2]);
  printf("letras[3]: %d\n", conversor.letras[3]);


  return 0;
}
