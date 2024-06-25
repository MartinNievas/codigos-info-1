//Luciano Nievas**
//ejercicio 5.31**
#include <stdio.h>

int main(int argc, char *argv[]) {
  int num;
  printf("ingrese un numero entre el 0 y 100");
  scanf("%d",&num);
  while( num < 0 || num > 100)
  {
    printf("Error: Ingresar un numero dentro del rango de 0 a 100\nIntente nuevamente:");
    scanf("%d", &num);
  }

  printf("su numero elegido es: %d",num);
  return 0;
}
