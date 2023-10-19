#include <stdio.h>
#define TAM 2

typedef struct {
  char nombre[20];
  int cantidad;
  float precio;
  int (*pfun)(int, int);
}producto_t;

/* Completar la función para cargar los datos del arreglo*/
void cargar_arreglo_de_estructuras(producto_t*, int);

/* Completar la función para imprimir los datos del arreglo*/
void imprimir_arreglo_de_estructuras(producto_t*, int);

int main(void)
{
  producto_t productos[TAM];
  int tamanio;

  printf("Ingrese la cantidad de productos a cargar: ");
  scanf("%d", &tamanio);

  cargar_arreglo_de_estructuras(productos, tamanio);
  imprimir_arreglo_de_estructuras(productos, tamanio);

  return 0;
}

void cargar_arreglo_de_estructuras(producto_t*, int){
  /** Completar */
}

void imprimir_arreglo_de_estructuras(producto_t*, int){
  /** Completar */
}
