#include <stdio.h>

int main(void) {

  int numero;

  printf("Ingrese un número: ");
  scanf("%d", &numero);


  if (numero > 99){
   if (numero < 1000){
     printf("El número tiene 3 cifras!\n");
   }
  }

  return 0;
}
