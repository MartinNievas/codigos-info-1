#include <stdio.h>

int main(int argc, char *argv[]) {
  int edad;
  float altura, peso;
  printf("ingrese su edad: \n");
  scanf("%d", &edad);
  printf("ingrese su altura:\n");
  scanf("%f", &altura);
  printf("ingrese su peso: \n");
  scanf("%f", &peso);
  printf ("- edad: %d \n- altura: %f \n- peso %f", edad, altura, peso);


  return 0;
}

