#include <stdio.h>

int main(void) {

  float nom, tol, medido;

  printf("Ingrese la tolerancia: ");
  scanf("%f", &tol);
  printf("Ingrese el nominal: ");
  scanf("%f", &nom);
  printf("Ingrese el medido: ");
  scanf("%f", &medido);

  float limite_superior, limite_inferior;
  limite_superior = nom + nom * (tol/100);
  limite_inferior = nom - nom * (tol/100);

  if (medido > limite_superior){
    printf("Fuera de la tolerancia\n");
  } else if (medido < limite_inferior){
    printf("Fuera de la tolerancia\n");
  } else {
    printf("Dentro del rango\n");
  }


  return 0;
}
