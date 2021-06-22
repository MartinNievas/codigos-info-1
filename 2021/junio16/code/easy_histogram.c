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

  // Ingresa 3
  //notas[0 ] -> Acá van los 1
  //notas[1 ] -> 
  //notas[2 ]
  //notas[3 ] -> Acá van los 4
  //notas[4 ]
  //notas[5 ]
  //notas[6 ]
  //notas[7 ]
  //notas[8 ]
  //notas[9 ] -> Acá van los 10

  for (i = 0; i < 10; i++)
    printf("personas con nota %d: %d\n", i+1, notas[i]);

  return 0;
}
