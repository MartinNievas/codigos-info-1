#include <stdio.h>

struct producto_t
{
  char nombre[30];
  float precio;
  int cantidad;
};

struct producto_t cargar_producto(void);
void imprimir_producto(struct producto_t p);

int main(void)
{

  struct producto_t producto = cargar_producto();

  imprimir_producto(producto);
}

struct producto_t cargar_producto(void)
{
  struct producto_t p;
  printf("\nIngrese el nombre del producto");
  scanf("%s", p.nombre);
  do
  {
    printf("\nIngrese el precio del producto");
    scanf("%f", &p.precio);
  } while (p.precio <= 0);
  do
  {
    printf("\nIngrese la cantidad del producto");
    scanf("%d", &p.cantidad);
  } while (p.cantidad <= 0);
  return p;
}

void imprimir_producto(struct producto_t p){
  printf("\nProducto");
  printf("\nNombre: %s", p.nombre);
  printf("\nPrecio: %.2f", p.precio);
  printf("\nCamtidad: %d", p.cantidad);

}
