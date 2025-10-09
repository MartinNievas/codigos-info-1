#include<stdio.h>

struct inventario {
  char nombre[30];
  int numero_parte;
  float precio;
  int stock;
};

void imprimir_inventario ( struct inventario item ){
  printf("El nombre es: %s\n", item.nombre);
  printf("El codigo es: %d\n",item.numero_parte);
  printf("El precio es: %f\n",item.precio);
  printf("El stock es: %d\n", item.stock);

}

int main () {

  struct inventario item1 = { " Resistor 10 k " , 1234 , 0.15 ,250};

  imprimir_inventario ( item1 ) ;

  return 0;
}


