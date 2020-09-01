#include <stdio.h>


int main(void)
{
  char *nombres[5] = {
    "Avery",
    "Riley",
    "Jordan",
    "Angel",
    "Parker"
  };

  for (int i = 0; i < 5; i++)
    printf("%s\n", nombres[i]);

  for (int i = 0; i < 5; i++)
    printf("Dirección [%d]: %p\n", i, &nombres[i]);

  printf("Hasta acá\n");
  for (int i = 0; i < 5; i++)
    printf("Dirección [%d]: %p\n", i, nombres[i]);

  return 0;
}
