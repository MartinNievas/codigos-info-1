#include <stdio.h>

int main(void)
{
  float precio;
  float nuevo_precio;

  printf("Ingrese el núm: ");
  scanf("%f", &precio);

  if (precio > 1000) 
  {
    nuevo_precio = precio * 0.8;
    printf("El nuevo precio es %f\n", nuevo_precio);
  }
  else 
  {
    printf("El precio es : %f\n", precio);
  }

  return 0;
}
