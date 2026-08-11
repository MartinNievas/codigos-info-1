
#include <stdio.h>

int main(void) {

  int num;

  // Validación
  do{
    printf("Ingrese un número positivo: ");
    scanf("%d", &num);
  }while( num < 0);


  return 0;
}
