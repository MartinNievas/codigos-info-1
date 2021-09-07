#include <stdio.h>

int main(void) {

  // Para conocer la longitud del último array
  int cont = 0;
  char *nombre = "Martin";
  char *p = nombre;

  while (*(p++)!='\0'){
    cont++;
  }

  printf("cantida de elementos: %d\n", cont);

  return 0;
}
