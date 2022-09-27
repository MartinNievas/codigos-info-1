#include <stdio.h>

struct inventario{
  char nombre[30];
  int numero_parte;
  float precio;
  unsigned int stock;
};

int main(void) {

  struct inventario piezas[10];

  for( int i = 0; i < 10; i++){
    printf("Ingrese el nombre: ");
    scanf("%s", piezas[i].nombre);

    printf("Ingrese el precio: ");
    scanf("%f", &piezas[i].precio);
  }


  return 0;
}
