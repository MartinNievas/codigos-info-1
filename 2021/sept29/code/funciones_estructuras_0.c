#include <stdio.h>
#define TAM 2

typedef struct {
  char nombre[20];
  int cantidad;
  float precio;
}producto_t;

void imprimir_estructura(producto_t);

int main(void)
{
  producto_t productos[TAM];

  for (int i = 0; i < TAM; i++){
    printf("Ingrese la cantidad disponible del producto N[%d]: ", i);
    scanf("%d", &productos[i].cantidad);
    printf("Ingrese el precio del producto N[%d]: ", i);
    scanf("%f", &productos[i].precio);
    printf("Ingrese el nombre  del producto N[%d]: ", i);
    scanf("%s", productos[i].nombre);
  }

  for (int i = 0; i < TAM; i++)
    imprimir_estructura(productos[i]);

  return 0;
}

void imprimir_estructura(producto_t variable){
  printf("Hay [%d] unidades del producto [%s] con un valor de %f\n",
                                                                    variable.cantidad,
                                                                    variable.nombre,
                                                                    variable.precio);
}
