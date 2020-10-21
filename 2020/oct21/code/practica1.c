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

  // Convertir de acceso secuencial -> acceso aleatorio

  int id_buscar;
  printf("Ingrese el id del producto a buscar\nIngrese -1 para salir\nid: ");
  scanf("%d", &id_buscar);
  while (id_buscar != -1){
    // LLamado a la función imprimir_precio


    printf("Ingrese el id del producto a buscar\nIngrese -1 para salir\nid: ");
    scanf("%d", &id_buscar);
  }

  return 0;
}
