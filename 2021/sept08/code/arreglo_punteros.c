#include <stdio.h>


int main(void){

  char *nombres[5] = {
    "Avery",
    "Riley_____",
    "Jordan",
    "Angel",
    "Parker"
  };

  for (int i = 0; i < 5; i++)
    printf("%s\n", nombres[i]);

  printf("Direcciones\n");
  for (int i = 0; i < 5; i++)
    printf("%p\n", &nombres[i]);

  printf("Direcciones de inicio de cadena\n");
  for (int i = 0; i < 4; i++)
    printf("%d\n", nombres[i+1] - nombres[i]);

  // 0x7ffc2cd2ca00 -> "asdasd" 0x700
  // 0x7ffc2cd2ca08 -> "assd" 0x706
  // 0x7ffc2cd2ca10 -> "asdasd" 0x700
  // 0x7ffc2cd2ca18 -> "asdasd" 0x700

  // Para conocer la longitud del último array
  int cont = 0;
  char *p = nombres[4];

  while (*(p++)!='\0'){
    cont++;
  }
  printf("el último: %d\n", cont);

  return 0;
}
