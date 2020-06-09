#include <stdio.h>

int main(void)
{

  int num;
  int divisores = 0;
  int i;

  printf("Ingrese un número: ");
  scanf("%d", &num);

  for (i = 1; i <= num; i++){
    if (num % i == 0)
      divisores++;
  }

  if (divisores == 2){
    printf("El número es primo\n");
  } else {
    printf("El número no es primo\n");
  }

  return 0;
}
