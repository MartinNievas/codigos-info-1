//Escribir un algoritmo que determine el menor de 10 números ingresados.
//El usuario debe ingresar cada uno de los 10 números.

#include <stdio.h>

int main(void)
{

  int num;
  int menor;
  int contador;

  printf("Ingrese un número: ");
  scanf("%d", &num);
  menor = num;

  contador = 0;
  while (contador < 9){
    printf("Ingrese un número: ");
    scanf("%d", &num);
    if (num < menor){
      menor = num;
    }
    contador++;
  }

  printf("El menor es: %d\n", menor);

  return 0;
}
