#include <stdio.h>


int main(void){

  char *nombres[5] = {
    "Avery",
    "Riley",
    "Jordan",
    "Angel",
    "Parker"
  };

  for (int i = 0; i < 5; i++)
    printf("%s\n", nombres[i]);

  printf("\nDirecciones\n");
  for (int i = 0; i < 5; i++)
    printf("%p\n", &nombres[i]);

  printf("\nTamaño en base a las direcciones de inicio de cadena\n");
  for (int i = 0; i < 4; i++)
    printf("%ld\n", nombres[i+1] - nombres[i]);

  // Para conocer la longitud del último array
  int cont = 0;
  char *p = nombres[4];

  while (*(p++)!='\0'){
    cont++;
  }
  printf("\nel último: %d\n", cont);

  return 0;
}
