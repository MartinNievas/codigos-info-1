#include <stdio.h>

int main(void) {

  int num;
  int cont = 0;

  printf("Ingrse un núm: ");
  scanf("%d", &num);

  for (int i = 1; i <= num; i++){
    if (num % i == 0)
      cont++;
  }

  if (cont == 2 || num == 1)
    printf("Es primo\n");
  else
    printf("No es primo\n");

  return 0;
}
