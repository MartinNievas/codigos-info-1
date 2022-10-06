#include <stdio.h>
/** Una estructura inventario que contenga: */
/** - un arreglo de 30 char llamado nombre */
/** - un entero numero_parte */
/** - flotante precio */
/** - un entero stock */

struct inventario {
  char nombre[30];
  int numero_parte;
  float precio;
  int stock;
};

int main(void) {

  struct inventario taladro;

  return 0;
}
