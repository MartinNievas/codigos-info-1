#include <stdio.h>

int main(void){
  int entero;

  printf("Ingrese un número entero: ");
  scanf("%d", &entero);

  printf("El número ingresado es: %d\n", entero++);

  printf("Su sucesor es: %d\n", entero);
  printf("Su antecesor es: %d\n", (entero - 2));

  return 0;   
}


