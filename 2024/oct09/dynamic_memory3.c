#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  int tam;
  int *parreglo;

  printf("Ingrese el tamaño: ");
  scanf("%d", &tam);
  parreglo = malloc(tam * sizeof(int));

  if (parreglo == NULL){
    return -1;
  } else {
    printf("Todo bien\n");
    for (int i = 0; i < tam; i++){
      printf("%d: %d\n", i, parreglo[i]);
    }



  }

  return 0;
}
