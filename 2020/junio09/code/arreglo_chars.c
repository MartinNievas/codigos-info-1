#include <stdio.h>

int main(void)
{

  char palabra[10] = "Hola\n";
  int i;

  for (i = 0; i < 10; i++){
    printf("%c", palabra[i]);
  }

  return 0;
}
