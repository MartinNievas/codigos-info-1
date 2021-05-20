#include <stdio.h>
// Diseñar un programa que imprima la fase del agua esperada, para una
// temperatura en grados centígrados ingresada por el usuario. Las fases
// serán:
//
// sólido para temperatura menor a 0 °C
// líquido para temperatura mayor igual a 0 °C y menor que 100 °C
// gaseoso para temperatura mayor igual a 100 °C

int main(void) {

  int temperatura;

  printf("Ingrese la temperatura: ");
  scanf("%d", &temperatura);

  if ( !(temperatura < 0)){
    printf("Es positiva\n");
  }

  if (temperatura < 0){
    printf("Sólido\n");
  } else {
    if (temperatura < 100){
      printf("Líquido\n");
    } else {
      printf("Gaseoso\n");
    }
  }

  return 0;
}
