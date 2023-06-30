#include <stdio.h>
void incremento(void)
{
  int contador = 100;
  printf("Dentro de incremento vale: %d\n",contador);
}

void saludo(void){
  printf("Hola!\n");
  incremento();
}


int main(void) {

  int contador = 99;

  incremento();
  printf("después del llamado: %d\n", contador);
  return 0;
}
