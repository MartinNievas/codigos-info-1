#include <stdio.h>

int main(void) {
  int num;
  printf("Ingrese un num: ");
  scanf("%d", &num);
  if (num >= 10 && num <=100){
    if (num%2==0){
      printf("El numero %d es par", num);

    }
    else{
      printf("El numero %d es impar", num);
    }
  }
  else{
    printf("El numero %d no esta dentro del rango", num);
  }
  return 0;
}
