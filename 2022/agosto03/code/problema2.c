#include <stdio.h>

void imprimir_stock_color(int cant_stock){

    if (cant_stock < 15){
      printf("\033[0;31m %d", cant_stock);
    } else {
      printf("\033[0;32m %d", cant_stock);
    }
    printf("\033[0m\n");

}

int main(void) {

  float precios[] = {23.23, 41.32, 414.31};
  char *productos[] = {"prod-a","prod-b","prod-c"};
  int stock[] = {10, 2, 30};

  printf("Producto\tPrecio\t\tStock\n");
  for (int i = 0; i < 3; i++){
    printf("%s\t\t%f\t", productos[i], precios[i]);
    imprimir_stock_color(stock[i]);
  }

  return 0;
}
