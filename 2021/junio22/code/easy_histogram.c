#include <stdio.h>

int main(void) {

  // Queremos almacenar las notas
  int notas[10] = {0};
  int cal;
  int i;

  // Vamos a cargar 5 notas
  for (i = 0; i < 5; i++){
    printf("Ingrese la calificación alcanzada: ");
    scanf("%d", &cal);

    notas[cal-1]++;

  }

  for (i = 0; i < 10; i++)
    printf("personas con nota %d: %d\n", i+1, notas[i]);

  return 0;
}
