//ejercicio 5.25
// gimenez bosch 
#include <stdio.h>

int main(int argc, char *argv[]) {
  int num1;
  int num2;
  int num3;
  printf("Ingrese el primer número: ");
  scanf("%d", &num1);
  printf("\nIngrese el segundo número: ");
  scanf("%d", &num2);
  printf("\nIngrese el tercer número: ");
  scanf("%d", &num3);

  if(num1>num2 && num1>num3){
    printf("El mayor es el primero.");
  }
  if(num2>num1 && num2>num3){
    printf("El mayor es el segundo.");
  }
  if(num3>num1 && num3>num2){
    printf("El mayor es el tercero.");
  }
  if(num1==num2 && num1==num3){
    printf("Los numeros ingresados son iguales.");
  }
  return 0;
}

