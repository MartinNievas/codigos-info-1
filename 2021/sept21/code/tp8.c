#include <stdio.h>

int main(void) {

  int respuestas[5][11] = {{0}};
  char *preguntas[5] = {
    "primer problema",
    "segundo problema",
    "tercera problema",
    "cuarta problema",
    "quinta problema",
  };
  int respuesta;
  int repetir = 0;

  do{
    for (int i = 0; i < 5; i++){
      printf("Ingrese la relevancia:");
      printf("%s\n", preguntas[i]);
      scanf("%d", &respuesta);
      respuestas[i][respuesta]++;
    }

    for (int i = 0; i < 5; i++){
      for (int j = 1; j < 11; j++){
        printf("%d ", respuestas[i][j]);
      }
      printf("\n");
    }
    printf("Para repetir ingrese 1\n");
    scanf("%d", &repetir);
  }while(repetir == 1);

  return 0;
}
