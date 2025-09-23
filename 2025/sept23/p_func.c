#include <stdio.h>

void saludo_1(void){
  printf("Hola!\n");
}

void saludo_2(void){
  printf("Chau!\n");
}

int main(void) {

  void (* funciones[2] ) ( void ) = {saludo_1, saludo_2};
  void (* temp ) ( void );

  funciones[0]();
  funciones[1]();

  temp = funciones[0];
  funciones[0] = funciones[1];
  funciones[1] = temp;

  funciones[0]();
  funciones[1]();



  return 0;
}
