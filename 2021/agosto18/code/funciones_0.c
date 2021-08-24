#include <stdio.h>

//retorno nombre(lista de parámetros);
// Definición de la función
void saludo(void){

  printf("Hola!\n");

}

void imprimir_suma(int inf, int sup){

  // int inf = 1;
  // int sup = 10;
  printf("%d\n", sup+inf);
  return;
}

int main(int argc, int *argv) {

  int temp;
  saludo();

  imprimir_suma(1, 10);

  return 0;
}
