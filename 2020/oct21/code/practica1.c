#include <stdio.h>

//1) Abrir el archivo "precios.csv" de forma secuencial, y guardar los datos en
// un archivo de acceso aleatorio, para poder buscar el producto por su número de id
// (primera columna). Los productos tienen que ser almacenados en el archivo como
// una estructura producto_t
//
//2) Una vez cargados almacenados los productos, implementar una función para buscar un
// producto e imprimir su precio en la pantalla. La función debe recibir como argumento
// el nombre del archivo y el "id" del producto a buscar.
// Si el producto existe se imprime el precio. Si no existe, se imprime "Producto no
// existente"

void imprimir_precio(FILE *, int id_producto);

typedef struct {
  char nombre[20];
  int id;
  float precio;
}producto_t;

int main(void) {

  FILE *file1;
  FILE *file2;

  file1 = fopen("precios.csv", "r");
  file2 = fopen("precios.dat", "wb+");

  // Convertir de acceso secuencial -> acceso aleatorio
  if (file1 == NULL && file2 == NULL){
    printf("ERROR\n");
  } else {

    producto_t producto;

    while (!feof(file1)){
      fscanf(file1, "%d,%f,%s", &producto.id
          , &producto.precio
          , producto.nombre);

      fseek(file2, producto.id*sizeof(producto_t), SEEK_SET);
      fwrite(&producto, sizeof(producto_t), 1, file2);
    }


    int id_buscar;


    printf("Ingrese el id del producto a buscar\nIngrese -1 para salir\nid: ");
    scanf("%d", &id_buscar);

    while (id_buscar != -1){

      imprimir_precio(file2, id_buscar);

      printf("Ingrese el id del producto a buscar\nIngrese -1 para salir\nid: ");
      scanf("%d", &id_buscar);

    }

    fclose(file1);
    fclose(file2);
  }

  return 0;
}

void imprimir_precio(FILE *file, int id_producto){

  producto_t producto;

  fseek(file, id_producto*sizeof(producto_t), SEEK_SET);
  fread(&producto, sizeof(producto_t), 1, file);

  if(producto.id != 0){
    printf("El producto existe\n");
    printf("%d,%f,%s\n", producto.id
        , producto.precio
        , producto.nombre);
  } else {
    printf("El producto no existe\n");
  }

}
