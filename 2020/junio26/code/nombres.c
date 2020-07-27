#include <stdio.h>


int main(void)
{

  char nombres[20][20];
  char palabra[20];

  printf("Ingresar la palabra: ");
  scanf("%s", palabra);

  printf("Ingresar el nombre 1: ");
  scanf("%s", &nombres[0]);
  printf("Ingresar el nombre 2: ");
  scanf("%s", &nombres[1]);

  printf("La palabra es: %s\n", palabra);
  printf("El nombres es: %s\n", nombres[0]);
  printf("El nombres es: %s\n", nombres[1]);


  return 0;
}
