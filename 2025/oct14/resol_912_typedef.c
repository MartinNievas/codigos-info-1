#include <stdio.h>

typedef struct{
  char nombre[30];
  float precio;
  int cantidad;
}prod_t;


struct producto_t cargar_producto(void);
void imprimir_producto(struct producto_t p);

int main(void)
{

  prod_t producto = cargar_producto();

  imprimir_producto(producto);
}

struct producto_t cargar_producto(void)
{
  struct producto_t p;

  printf("\nIngrese el nombre del producto");
  scanf("%s", p.nombre);
  printf("\nIngrese el precio del producto");
  scanf("%f", &p.precio);
  printf("\nIngrese la cantidad del producto");
  scanf("%d", &p.cantidad);

  return p;
}

void imprimir_producto(struct producto_t p){
  printf("\nProducto");
  printf("\nNombre: %s", p.nombre);
  printf("\nPrecio: %.2f", p.precio);
  printf("\nCamtidad: %d", p.cantidad);

}
