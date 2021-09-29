#include <stdio.h>
// Primero este ejemplo

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

  // Dado un puntero "p" a una estructura, podemos acceder a sus
  // miembros a través del operador flecha
  // p->miembro;
  // Es equivalente a desreferenciar y luego acceder al miembro
  // (*p).miembro;

  printf("Hay [%d] unidades del producto [%s] con un valor de %f\n", p->cantidad, p->nombre, p->precio);

  return 0;
}
