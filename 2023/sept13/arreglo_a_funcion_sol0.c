#include <stdio.h>//kisinger leandro,rueda leandro
#define TAM 10

void inicializar_arreglo_con_num(int *arreglo, int tam, int num)
{
  for (int i = 0; i < tam; i++){
    arreglo[i] = num;
  }
}

void imprimir_arreglo(int *arreglo, int tam)
{
  for (int i = 0; i < tam; i++){
    printf("%d: %d\n", i, arreglo[i]);
  }
}

int main(void) {

  int uuid[TAM] = {0};
  int* pnt;
  pnt=&uuid[0];
  printf("%p\n", pnt);

  inicializar_arreglo_con_num(pnt, TAM, 30);
  imprimir_arreglo(pnt, TAM);


  return 0;
}
