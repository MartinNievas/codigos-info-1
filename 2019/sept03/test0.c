#include <stdio.h>


int main(void)
{
  char arreglo[10] = {"algo"};
  int i;
  for (i = 0; i < 10; i++)
    printf("%c", arreglo[i]);

  printf("%s\n", arreglo);


  return 0;
}
