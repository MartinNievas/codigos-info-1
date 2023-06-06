#include <stdio.h>

int main(int argc, char *argv[]) {

  float numero1, numero2, suma, producto;

  printf("Ingrese dos numeros\n");
  scanf("%f", &numero1);
  scanf("%f", &numero2);

  if(numero1>numero2){
    suma = numero1 + numero2;
    printf("su suma es %.2f", suma);
  } else if(numero2>numero1) {
    producto = numero1*numero2;
    printf("su producto es %.2f", producto);
  } else {
    printf("Sus numeros son iguales");
  }

  return 0;
}

