#include <stdio.h>

int main(void) {

  float temperatura;

  printf("Ingrese la temperatura: ");
  scanf("%f", &temperatura);

  // a >= b -> si a es mayor o igual que b
  if (temperatura >= 100)
    printf("Encender la ventilación\n");
  else {
    printf("Apagar la ventilación\n");
    printf("La ventilación debe estar apagada\n");
  }

  // a <= b -> si a es menor o igual que b

  return 0;
}
