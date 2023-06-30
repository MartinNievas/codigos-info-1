#include <stdio.h>

int main(void) {

  int repetir = 1;
  float temp, max = -1;

  do {

    printf("Ingrese una temperatura\n para salir ingrese 0: ");
    scanf("%f", &temp);

    if (temp == 0){
      repetir = 0;
    } else {
      if (temp > max){
        max = temp;
      }
    }
  } while (repetir == 1);

  printf("La temperatura máxima es: %f\n", max);

  return 0;
}
