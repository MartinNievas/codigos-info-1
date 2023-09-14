#include <stdio.h>
// Inicializarla elemento a elemento

int main(void) {

  char nombre[] = "Hola, mundo!";
  nombre[4] = 0;
  printf("%s\n", nombre);
  nombre[4] = '@';
  printf("%s\n", nombre);

  for (int i = 0; i < sizeof(nombre); i++){
    printf("%c: %d\n", nombre[i]);
  }

  return 0;
}
