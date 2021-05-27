#include <stdio.h>
// (5)

int main(void) {

  int temp;
  int repetir = 1;

  // Validación de datos
  // [0-80]
  while (repetir){
    printf("Ingrese una temp del agua líquida válida: ");
    scanf("%d", &temp);

    // (   (cond1  &&   cond2)    ||   cond3     )
    //        1           1              0         verdadero
    //        1           0              0         falso
    //        1           0              1         verdadero
    //        1           1              1         verdadero
    if ((temp >= 0 && temp <= 80) || temp == 1000)
        repetir = 0;

  }

  printf("La temp es válida! y vale: %d\n", temp);

  return 0;
}
