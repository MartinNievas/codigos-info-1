#include <stdio.h>
void despedida(void);
void saludo(void);

int main(void) {
  printf("Inicio\n");

  // Llamada de la función
  saludo();

  return 0;
}

void saludo(void){
  printf("Hola!\n");
}

void despedida(void){
  printf("Chau\n");
  saludo();
}

