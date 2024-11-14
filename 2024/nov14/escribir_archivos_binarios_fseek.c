#include <stdio.h>
#include <stdlib.h>

struct producto {
  int id;
  float precio;
};

int main() {
  FILE *cfPtr;
  struct producto prod;
  int n, i;

  // Abrir el archivo en modo binario de escritura
  cfPtr = fopen("productos.dat", "wb");
  if (cfPtr == NULL) {
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
    fseek(cfPtr, prod.id * sizeof(struct producto), SEEK_SET);

    fwrite(&prod, sizeof(struct producto), 1, cfPtr);
  }

  // Cerrar el archivo
  fclose(cfPtr);
  printf("\nDatos guardados en 'productos.dat' correctamente.\n");

  return 0;
}

