#include <stdio.h>

int main(void) {

  float temperatura = 1.2;

  // a > b -> cuando a es mayor que b
  if (temperatura > 100 ){
    printf("Encender ventilación\n");
  }

  // a < b -> cuando a es menor que b
  if (temperatura < 50){
    printf("Encender la calefacción\n");
  }

  return 0;
}
