#include <stdio.h>

int main(int argc, char *argv[]) {
  int num1 = 1;
  int suma = 0;
  printf("Algo\n");

  while (num1) {
    printf("\nIngrese numeros enteros, para finalizar ingrese 0: ");
    scanf("%d", &num1);
    if(num1!=0){
      suma+=num1;
      printf("%d", num1);
    } else {
      printf("\n%d", suma);
    }
  }

  return 0;
}
