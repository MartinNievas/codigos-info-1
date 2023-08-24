#include <stdio.h>

int main(void) {

  int cantidad;
  do{
    printf("Ingrese la cantidad de elementos: ");
    scanf("%u", &cantidad);
  }while(cantidad < 0);

  // VLA: Variable Length Array
  int arreglo[cantidad];

  return 0;
}
