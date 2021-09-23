#include <stdio.h>

typedef struct {
  char nombre[20];
  int cantidad;
  float precio;
} producto_t;

int main(void)
{

  producto_t producto;
  producto_t *p;

  p = &producto;

  printf("Ingrese el nombre: ");
  scanf("%s", producto.nombre);
  printf("Ingrese la cantidad disponible: ");
  scanf("%d", &producto.cantidad);
  printf("Ingrese el precio: ");
  scanf("%f", &producto.precio);

  printf("Hay [%d] unidades del producto [%s] con un valor de %f\n", p->cantidad, p->nombre, p->precio);

  return 0;
}
