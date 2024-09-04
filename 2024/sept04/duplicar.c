#include <stdio.h>
#define TAM 4

void duplicar_valores(int arreglo[], int cantidad)
{
  for (int i = 0; i < cantidad; i++){
    arreglo[i] *= 2;
  }
}

void imprimir_arreglo(int arreglo[], int cantidad)
{
  for (int i = 0; i < cantidad; i++){
    printf("[%d]: %d\n", i, arreglo[i]);
  }
}

int main(void) {

  int arreglo[TAM];

  for (int i = 0; i < TAM; i++){
    printf("Ingrese un número[%d]: \n", i);
    scanf("%d", &arreglo[i]);
  }

  printf("Arreglo antes del llamado: \n");
  imprimir_arreglo(arreglo, TAM);

  duplicar_valores(arreglo, TAM);

  printf("Arreglo luego del llamado: \n");
  imprimir_arreglo(arreglo, TAM);

  return 0;
}
