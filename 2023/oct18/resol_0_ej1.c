#include <stdio.h>

#define TAM 2

typedef struct {
  char nombre[20];
  int cantidad;
  float precio;
} producto_t;

void cargar_estructura(producto_t*);
void imprimir_estructura(producto_t);

int main(void)
{
  producto_t productos[TAM];
  for (int i = 0; i < TAM; i++) {
    cargar_estructura(&productos[i]);
  }
  for (int i = 0; i < TAM; i++) {
    imprimir_estructura(productos[i]);
  }
  return 0;
}

void cargar_estructura(producto_t* producto) {
  printf("Ingrese el nombre del producto: ");
  scanf("%s", producto->nombre);
  printf("Ingrese la cantidad de producto a tener en cuenta: ");
  scanf("%d", &(*producto).cantidad);
  printf("Ingrese el precio del producto: ");
  scanf("%f", &producto->precio);
}

void imprimir_estructura(producto_t variable) {
  printf("Hay [%d] unidades del producto [%s] con un valor de %f\n",
      variable.cantidad,
      variable.nombre,
      variable.precio);
}
