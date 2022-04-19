#include <stdio.h>
// En un local se hace un descuento del %20
// cuando la compra supera los $ 1000. Escribir un
// algoritmo que calcule el precio a pagar por el
// cliente teniendo como dato el valor de la compra.
int main(void) {

  float monto;
  int cantindad_productos;

  printf("Ingrese el valor de la compra: ");
  scanf("%f", &monto);

  printf("Ingrese la cantidad de elementos: ");
  scanf("%d", &cantindad_productos);

  if (monto > 1000){
    printf("El monto final es: %.3f\n", cantindad_productos * monto*0.8);
  } else {
    printf("El monto final es: %.3f\n", cantindad_productos * monto);
  }

  return 0;
}
