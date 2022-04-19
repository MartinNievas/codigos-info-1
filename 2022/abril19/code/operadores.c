#include <stdio.h>
int main(void) {

  int total;

  printf("Ingrese total: ");
  scanf("%d", &total);

  if (total <= 10)
    printf("Es menor o igual que 10\n");

  if (total < 50)
    printf("Es menor que 50\n");

  return 0;
}
