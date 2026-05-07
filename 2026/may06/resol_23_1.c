
#include <stdio.h>

int main(void) 
{
  int edad; float altura; float peso;

  printf("Ingrese su edad: "); scanf("%d",&edad);
  printf("Ingrese su altura:"); scanf("%f",&altura);
  printf("Ingrese su peso :"); scanf("%f",&peso);

  printf("\n-Edad: %d\n-Altura: %.2f m\n-Peso: %.2f Kg",edad,altura,peso);

  return 0;
}
