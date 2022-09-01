#include <stdio.h>

int main(void) {

  char* frase[] = {"Primera", "Segunda"};

  scanf("%s", &frase[0]);
  printf("%s\n", frase[1]);

  return 0;
}
