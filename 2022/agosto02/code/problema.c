#include <stdio.h>

int main(void) {

  float precios[] = {23.23, 41.32, 414.31};
  char *productos[] = {"prod-a","prod-b","prod-c"};
  int stock[] = {10, 2, 30};

  printf("Producto\tPrecio\t\tStock\n");
  for (int i = 0; i < 3; i++){
    printf("%s\t\t%f\t", productos[i], precios[i]);

    if (stock[i] < 15){
      printf("\033[0;31m %d", stock[i]);
    } else {
      printf("\033[0;32m %d", stock[i]);
    }
    printf("\033[0m\n");
  }

  return 0;
}
