#include <stdio.h>
// (5)

int main(void) {

  int nota;
  int repetir = 1;

  while (repetir){
    printf("Ingrese una nota NO válida: ");
    scanf("%d", &nota);

    // [0,10]
    if (nota >= 0 && nota <= 10){
        repetir = 0;
    }

    // 0),(10
    //if (nota < 0 || nota > 10) // Ejemplo para notas NO válidas
  }

  printf("La nota es válida! y vale: %d\n", nota);

  return 0;
}
