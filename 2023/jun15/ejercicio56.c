#include <stdio.h>

int main(int argc, char *argv[]) {
  float precio; 
  printf("ingrese su precio inicial: ");
  scanf ("%f", &precio);

  if (precio > 1000){
    precio=precio*0.8;
    printf("su precio final es:%.2f",precio);
  }
  else 
    printf("su monto final es: %.2f",precio);
  return 0;


