#include <stdio.h>
#define N 3

typedef struct {
  char nombre[30];
  int cuit;
} proveedor;

typedef struct {
  char nombre[30];
  float precio;
  proveedor proveedor_s;
} producto;

int main() {

  producto p[N];
  int max = 0;

  for (int i = 0; i < N; i++){

    printf("Ingrese el nombre del %d° producto: ", i + 1);
    scanf(" %[^\n]s", p[i].nombre);

    do {
      printf("Ingrese el precio del %d° producto: ", i + 1);
      scanf("%f", &p[i].precio);
    }while (p[i].precio < 0);

    printf("Ingrese el nombre del proveedor del %d° producto: ", i + 1);
    scanf(" %[^\n]s", p[i].proveedor_s.nombre);
    printf("Ingrese el cuit del proveedor del %d° producto: ", i + 1);
    scanf("%d", &p[i].proveedor_s.cuit);

  }

  // Buscar el máximo
  for (int i = 0; i < N; i++){
    if (p[i].precio > p[max].precio){
      max = i;
    }
  }

  for (int i = 0; i < N; i++){

    printf("%d° PRODUCTO:\n", i + 1);
    printf("%s\t", p[i].nombre);
    printf("%f\t", p[i].precio);
    printf("%s\t", p[i].proveedor_s.nombre);
    printf("%d\n\n", p[i].proveedor_s.cuit);
  }

  printf("El producto mas caro es %s y vale $%.2f", p[max].nombre, p[max].precio);

  return 0;
}
