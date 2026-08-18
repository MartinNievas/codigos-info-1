#include <stdio.h>

int main(void) {

  int num;

  printf("Ingrese un número positivo: ");
  scanf("%d", &num);

  while (num < 0){
    printf("Ingrese un número positivo: ");
    scanf("%d", &num);
  }

  printf("%d\n",num);

  return 0;
}
