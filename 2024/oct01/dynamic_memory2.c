#include <stdio.h>
#include <stdlib.h>
// Ver dentro del container que hay menos ruido

int main(void)
{

  unsigned int tam;
  int *parreglo;

  do{
    printf("Ingrese el tamaño: ");
    scanf("%u", &tam);
  }while(tam < 0);

  parreglo = malloc(tam * sizeof(int));

  if(parreglo == NULL){
    printf("Error\n");
  } else {

    for (int i = 0; i < tam; i++){
      parreglo[i] = i;
    }

    printf("Fin\n");
    scanf("%d", &tam);

    free(parreglo);
  }

  return 0;
}
