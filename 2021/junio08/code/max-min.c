#include <stdio.h>

int main(void) {

  int num;
  int max;

  printf("Ingrese un número: ");
  scanf("%d", &num);
  max = num;

  for (int i = 0; i < 9; i++){
    printf("Ingrese un número: ");
    scanf("%d", &num);

    if (num > max){
      max  = num;
    }

  }
  printf("max: %d \n", max);


  return 0;
}
