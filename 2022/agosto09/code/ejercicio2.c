#include <stdio.h>
// Modificar la función 'obtener_num_incrementado' para que la salida del programa sea:
// 0 1 2 3 4


int obtener_num_incrementado(void)
{
  static int num = 0;

  return num+=1;
}


int main(void) {

  for (int i = 0; i < 5; i++){
    printf("%d ", obtener_num_incrementado());
  }

  return 0;
}
