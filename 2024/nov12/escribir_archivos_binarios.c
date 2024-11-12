#include <stdio.h>
#include <stdlib.h>

struct producto {
  int id;
  float precio;
};

int main() {
  FILE *archivo;
  struct producto prod;
  int n, i;

  // Abrir el archivo en modo binario de escritura
  archivo = fopen("productos.dat", "wb");
  if (archivo == NULL) {
    perror("Error al abrir el archivo");
    return 1;
  }

  printf("Ingrese la cantidad de productos a guardar: ");
  scanf("%d", &n);

  // Leer y guardar los datos de cada producto
  for (i = 0; i < n; i++) {
    printf("\nProducto %d\n", i + 1);
    printf("ID: ");
    scanf("%d", &prod.id);
    printf("Precio: ");
    scanf("%f", &prod.precio);

    // Escribir la estructura en el archivo
    fwrite(&prod, sizeof(struct producto), 1, archivo);
  }

  // Cerrar el archivo
  fclose(archivo);
  printf("\nDatos guardados en 'productos.dat' correctamente.\n");

  return 0;
}
