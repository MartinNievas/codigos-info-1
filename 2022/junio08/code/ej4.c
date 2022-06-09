#include <stdio.h>

int main(void) {

  int nota1, nota2, recu;
  float prom;

  printf("Ingrese nota1: ");
  scanf("%d", &nota1);
  printf("Ingrese nota2: ");
  scanf("%d", &nota2);

  if (nota1 < 6 || nota2 < 6){
    printf("Ingrese el recuperatorio: ");
    scanf("%d", &recu);
    prom = (nota1+nota2+recu)/3.0;
  } else {
    prom = (nota1+nota2)/2.0;
  }

  printf("El promedio es: %f\n", prom);

  if (prom >= 8){
    printf("Promociona\n");
  }  else if (prom >=6 ){
    printf("Regular\n");
  } else {
    printf("Desaprueba\n");
  }


  return 0;
}
