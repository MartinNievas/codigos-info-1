#include <stdio.h>
//Funciones sin parámetros ni valor de retorno
// void es nada

// Definición de la función
void imprimir_saludo(void)
{

  printf("Hola mundo!\n");

}

int main(void) {

  // llamado a la función
  imprimir_saludo();
  printf("Fuera de la función\n");
  imprimir_saludo();

  return 0;
}



