#include <stdio.h>
#define TAM 5


//stickers para ana y maku
void invertir_arreglo(int *a, int tam)
{
  for (int i = 0; i < tam/2; i++){
    int guardada = *(a+i);
    *(a+i) = *(a+tam-1-i);
    *(a+tam-1-i) = guardada;
  }

}


int main(void) {

  int arreglo[TAM] = {1, 2, 3, 4, 5};

  printf("Antes:\n");
  for (int i = 0; i < TAM; i++)
    printf("%d ", arreglo[i]);

  invertir_arreglo(arreglo, 5);

  printf("\nDespués:\n");
  for (int i = 0; i < TAM; i++)
    printf("%d ", arreglo[i]);

  return 0;
}
