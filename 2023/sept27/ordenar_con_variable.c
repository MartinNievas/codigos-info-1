#include <stdio.h>
#define TAM 100
void swap(int* a, int* b){
  temp = *a;
  *a = *b;
  *b = temp;
}

void intercambia_si_menor(int* a, int* b){
  if (*a < *b){
    swap(a,b);
  }
}

void intercambia_si_mayor(int* a, int* b){
  if (*a > *b){
    swap(a,b);
  }
}

void ordenar_arreglo(int* arreglo, int tam, void (*fun)(int*,int*)){
  int temp;

  for(int i = 0; i<tam; i++){
    for(int j = 0; j<tam-1; j++){
      fun(&arreglo[j], &arreglo[j+1]);
    }
  }

}

int main(void) {

  int arreglo[TAM];

  void (*p_ordena[2])(int*,int*) = {
    intercambia_si_menor,
    intercambia_si_mayor};

  ordenar_arreglo(arreglo, TAM, p_ordena[0]);
  ordenar_arreglo(arreglo, TAM, p_ordena[1]);

  return 0;
}

