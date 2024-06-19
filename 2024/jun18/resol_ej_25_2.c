//Teo Cipolla 5.25

#include <stdio.h>

int main(int argc, char *argv[]) {
  int num1;
  int num2;
  int num3;

  printf("Ingrese el primer número: ");
  scanf("%d",&num1);
  printf("Ingrese el segundo número: ");
  scanf("%d",&num2);
  printf("Ingrese el tercer número: ");
  scanf("%d",&num3);

  if (num3 == num2 && num3 == num1){
    printf ("El numero es igual al resto %d\n", num3);
  } else {
    if (num1 >= num2 && num1>= num3){
      printf ("El numero %d es el mayor\n", num1);
    }
    if (num2 >= num1 && num2>= num3){
      printf ("El numero %d es el mayor\n", num2);
    }
    if (num3 >= num2 && num3>= num1){
      printf ("El numero %d es el mayor\n", num3);
    }
  }
  return 0;
}
