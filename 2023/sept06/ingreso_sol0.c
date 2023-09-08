#include <stdio.h>
#define TAM 10

void ingresar_elementos(int a[], int tam){
  for (int i=0; i<tam; i++){
    scanf("%d", &a[i]);
  }

}


void imprimir_arreglo(int a[], int tam){

  for(int i=0; i<tam; i++){
    printf("[%d]\n", a[i]);
  }
}

int main(int argc, char *argv[]) {

  int arreglo[TAM];
  ingresar_elementos(arreglo, TAM);
  imprimir_arreglo(arreglo, TAM);


  return 0;
}

