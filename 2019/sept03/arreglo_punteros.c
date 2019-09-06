#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#define TAM 4

int main(void)
{
  char *nombres[TAM] = {"snow", "juan", "pedro", "martin"};
  char palabra[] = {"algo"};
  int i;
  bool algo;

  /** Repaso */
  printf("Podemos imprimir el "
      "contenido de palabra con %%s: %s\n", palabra);

  printf("Podemos imprimir "
      "caracter a caracter:\n");
  i = 0;
  while (palabra[i] != '\0') {
    printf("%c", palabra[i++]);
  }
  printf("\n------------------------------\n");

  /** Arreglo de punteros? */
  printf("%p\n", nombres[0]);
  printf("%p\n", *(nombres+0));

  for (i = 0; i < 4; i++)
    printf("%c\n", **(nombres+i));

  for (i = 0; i < 4; i++)
    printf("%s\n", *(nombres+i));

  return 0;
}
