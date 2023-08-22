#include <stdio.h>
// Prototipo
int sumar(int, int);
void saludo(void);

int main(void) {

  int num1, num2;
  printf("Ingrese num1: ");
  scanf("%d", &num1);
  printf("Ingrese num2: ");
  scanf("%d", &num2);

  int sum = sumar(num1, num2);
  printf("La suma es: %d\n", sum);

  return 0;
}
// Definición
int sumar(int a, int b){
  int sumatoria = a + b;
  return sumatoria;
}

void saludo(void){
  printf("Hola!\n");
}
