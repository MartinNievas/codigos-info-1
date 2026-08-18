#include <stdio.h>

void saludo(void){

  static int cont = 0;
  cont++;
  if(cont<100)
    saludo();
  printf("%d\n", cont);
}

int main(void) {

  saludo();

  return 0;
}
