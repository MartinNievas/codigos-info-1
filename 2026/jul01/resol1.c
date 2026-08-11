#include <stdio.h>

int main()
{
  int nota;
  do {
    printf("Ingrese nota del examen: [1, 10] \n");
    scanf("%d", &nota);

    if (nota<1 || nota>10)
      printf("Error. Ingrese el numero nuevamente... \n\n");
  //} while(nota<1 || nota>10);
  } while( !(nota > 0 && nota < 11));

  printf("Numero correcto de nota, dentro del rango.");

  return 0;
}
