#include <stdio.h>
// Abrir un proyecto en Zinjai, template: C en blanco
// Ejercicio 5
// En un local se hace un descuento del %20 cuando la compra supera los $ 1000. Escribir un
// algoritmo que calcule el precio a pagar por el cliente teniendo como dato el valor de la compra.

int main(void) {

  float valor_compra;
  float descuento, precio_final;

  printf("Ingrese el valore de la compra: \n");
  scanf("%f", &valor_compra);

  if (valor_compra > 1000){
    descuento = valor_compra * 0.2;
    precio_final = valor_compra - descuento;
    printf("El precio final es: %f\n", precio_final);
  } else {
    printf("El precio final es: %f\n", valor_compra);
  }

  return 0;
}
