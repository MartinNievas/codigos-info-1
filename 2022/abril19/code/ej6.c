#include <stdio.h>
// En un local se hace un descuento del %20
// cuando la compra supera los $ 1000. Escribir un
// algoritmo que calcule el precio a pagar por el
// cliente teniendo como dato el valor de la compra.
int main(void) {

  float monto;
  float descuento;
  float total_con_descuento;

  printf("Ingrese el valor de la compra: ");
  scanf("%f", &monto);

  if (monto > 1000){
    descuento = monto * 0.2;
    total_con_descuento = monto - descuento;
  } else {
    total_con_descuento = monto;
  }

  printf("El monto final es: %.2f\n", total_con_descuento);

  return 0;
}
