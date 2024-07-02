#include <stdio.h>


int main(void) {

  int numero;

  printf("Ingrese número\n");
  scanf("%d", &numero);


  for (int i = numero; i >= -numero; i--){
    if (i > 0){
      printf("%d ", i);
    } else {
      printf("%d ", -i);
    }
  }

  return 0;
}
