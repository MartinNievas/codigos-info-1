#include <stdio.h>
#define CANT_PREGUNTAS 5
#define CANT_ALUMNOS 10

int main(void)
{
  int respuestas[CANT_PREGUNTAS] = {0};
  int resp;

  printf("Las respuestas válidas son entre 1 y 4\n");
  for (int i = 0; i < CANT_ALUMNOS; i++)
  {
    printf("Ingrese la respuesta del alumno[%d]: ",i);
    scanf("%d", &resp);
    ++respuestas[resp];
  }

  printf("%10s\t%s\n","Respuesta","Cantidad");
  for (int i = 1; i < CANT_PREGUNTAS; i++)
    printf("%10d\t%d\n", i, respuestas[i]);

  return 0;
}
