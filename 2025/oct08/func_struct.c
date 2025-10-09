#include <stdio.h>
#define TAM 2

struct producto_t {
  float precio;
  char nombre[100];
  int stock;
};

struct producto_t cargar_producto(void);

int main(void) {

  struct producto_t prod1;
  prod1 = cargar_producto();

  printf("Nombre: %s\n", prod1.nombre);
  printf("Precio: %f\n", prod1.precio);
  printf("Stock: %d\n", prod1.stock);

  return 0;
}

struct producto_t cargar_producto(void){
  struct producto_t prod_cargado;

  printf("Ingrese el nombre: ");
  scanf("%s", prod_cargado.nombre);

  printf("Ingrese el stock: ");
  scanf("%d", &prod_cargado.stock);

  printf("Ingrese el precio: ");
  scanf("%f", &prod_cargado.precio);


  return prod_cargado;

}
