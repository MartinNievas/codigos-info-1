#include <stdio.h>
// Definición de la función saludo
void saludo(void){
  int temp = 10;
  printf("Hola! %d\n", temp);
}

int main(void) {
  int temp = 0;
  printf("Inicio\n");
  // Llamada de la función
  saludo();
  printf("temp: %d\n", temp);

  return 0;
}
