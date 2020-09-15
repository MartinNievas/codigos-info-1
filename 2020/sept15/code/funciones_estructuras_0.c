#include <stdio.h>

typedef struct {
  char nombre[20];
  int cantidad;
  float precio;
} producto_t;

void imprimir_estructura(producto_t produ);

int main(void)
{

  producto_t producto = {"taladro", 0, 1.23};
  producto_t *p;

  p = &producto;

  printf("Ingrese la cantidad disponible: ");
  scanf("%d", &p->cantidad);

  printf("%d\n", p->cantidad);

  imprimir_estructura(producto);

  return 0;
}

void imprimir_estructura(producto_t produ){
  printf("Hay [%d] unidades del producto [%s] con un valor de %f\n", produ.cantidad, produ.nombre, produ.precio);
}
