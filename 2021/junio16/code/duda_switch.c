#include <stdio.h>

int main(void) {

  int op;
  float sueldo  = 100.212;
  int temperatura = 100;

  scanf("%d", &op);


  switch(op){
    case 1:
      printf("En 1\n");
      printf("la temperatura es: %d\n", temperatura);

      printf("El salario es: %f\n", sueldo);
      break;
    case 2:
      printf("En 2\n");

      printf("El salario es: %f\n", sueldo);
      break;

    default:
      printf("Default\n");

      break;
  }

  return 0;
}
