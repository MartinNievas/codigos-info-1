#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 10

void cargar_y_validar_elementos(int arreglo[], int cantidad){

  for(int i=0; i < cantidad; i++){
    arreglo [i] = rand () % 201 - 100;
    printf ("Num Arreglo %d\n", arreglo[i]);
  }
}

int buscar(int numero, int arreglo[], int cantidad){

  for(int i=0; i < cantidad; i++){

    if (arreglo [i] == numero){
      return i;
    }

  }

  return -1;

}

int main(void) {
  srand(time(0));
  int arreglo[TAM], numero;

  // Ingresar los TAM elementos
  cargar_y_validar_elementos(arreglo, TAM);

  // Solicitar al usuario el número a buscar
  printf("Ingrese el número a buscar: ");
  scanf("%d", &numero);

  // Buscar el número
  int res = buscar(numero, arreglo, TAM);
  // Si existe: imprimir el índice, no existe: imprimir un -1
  if (res != -1){
    printf ("Numero encontrado en el indice %d \n",res);
  }
  else{
    printf ("Numero no encontrado en el indice %d \n",res);
  }
  return 0;
}

}

