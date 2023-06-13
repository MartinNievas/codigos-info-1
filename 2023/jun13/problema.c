#include <stdio.h>

int main(int argc, char *argv[]) {
  int numero, mayor;
  mayor = 0;
  do{
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    if(numero > mayor){
      mayor = numero;
    }
  } while(numero != -1 || numero >= 0);

  printf("El mayor numero es: %d", mayor);

  return 0;
}
