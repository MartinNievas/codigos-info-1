#include <stdio.h>
// Escribir un algoritmo que solicite ingresar dos números n1 y n2. Si el pri-
// mero es mayor que el segundo mostrar la suma de ambos, por otro lado si el
// segundo es mayor al primero, mostrar el producto entre los números. En caso
// de que sean iguales imprimir “Los números son iguales”.


int main(void) {

  int n1, n2;

  printf("Ingrese n1: ");
  scanf("%d", &n1);
  printf("Ingrese n2: ");
  scanf("%d", &n2);

  if (n1 > n2){
    printf("La suma es: %d", n1+n2);
  }

  if (n2 > n1){
    int prod;
    prod = n1*n2;
    printf("El producto es: %d\n", prod);
  }

  if (n1 == n2){
    printf("Los números son iguales\n");
  }

  return 0;
}
