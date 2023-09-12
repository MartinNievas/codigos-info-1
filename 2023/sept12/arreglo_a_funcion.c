#include <stdio.h>
#define TAM 10

void inicializar_arreglo_con_num(int arreglo[], int tam, int num)
{
  for (int i = 0; i < tam; i++){
    arreglo[i] = num;
  }
}

void imprimir_arreglo(int arreglo[], int tam)
{
  for (int i = 0; i < tam; i++){
    printf("%d: %d\n", i, arreglo[i]);
  }
}

int main(void) {

  int uuid[TAM] = {0};

  inicializar_arreglo_con_num(uuid, TAM, 30);

  imprimir_arreglo(uuid, TAM);


  return 0;
}
