#include <stdio.h>

// Con const no puedo modificar a
void incrementar_constante(const int a)
{
  printf("%d\n", ++a);
}

int main(void) {

  incrementar_constante(2);

  return 0;
}
