#include <stdio.h>

int main(void)
{
  int arreglo[10];
  printf("El tamaño es: %ld\n", sizeof(arreglo));


  for (int i = 0; i < sizeof(arreglo)/sizeof(arreglo[0]); i++){
    printf("%d\n", i);
  }

  return 0;
}
