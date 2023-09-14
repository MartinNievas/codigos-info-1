#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

void inicializar_arreglo_aleatorio(int uuid[], int tam){

  srand(time(NULL));

  for (int i = 0; i < tam; i++){
    uuid[i] = rand()%901+100;
  }
}

void ordenar_arreglo_burbuja_mayor_a_menor(int pampita[], int tam){
  for(int i = 0; i < tam -1; i++){
    for(int j = 0; j < tam-1-i; j++){
      int hold = 0;
      if(pampita[j+1] > pampita[j]){
        hold = pampita[j];
        pampita[j] = pampita[j+1];
        pampita[j+1] = hold;
      }
    }
  }
}

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

  srand(time(NULL));

  inicializar_arreglo_con_num(uuid, TAM, 0);
  inicializar_arreglo_aleatorio(uuid,TAM);
  ordenar_arreglo_burbuja_mayor_a_menor(uuid,TAM);
  imprimir_arreglo(uuid, TAM);


  return 0;
}
