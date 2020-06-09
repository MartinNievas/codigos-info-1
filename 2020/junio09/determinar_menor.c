#include <stdio.h>
#define TAM 10

int main(void)
{

  int menor;
  int num;
  int i;

  printf("Ingrese un número: ");
  scanf("%d", &num);
  menor = num;

  for (i = 0; i < TAM-1; i++){
    printf("Ingrese un número: ");
    scanf("%d", &num);
    if (num < menor){
      menor = num;
    }
  }

  printf("El menor es: %d\n", menor);

  return 0;
}
