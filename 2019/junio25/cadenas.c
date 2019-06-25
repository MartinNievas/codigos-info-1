#include <stdio.h>
#define N 10

int main(void)
{
  char arreglo[N];
  /** char password[N] = {'c','l','a','v','e','\0'}; */

  printf("Ingrese la clave: ");
  scanf("%s", arreglo);

  printf("La clave es: %s\n", arreglo);


  return 0;
}
