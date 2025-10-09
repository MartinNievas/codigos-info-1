#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ingresar_cantidad_elementos(void);
void inicializar_arreglo(int* arr, int tam);
void contar_positivos(int *arr, int tam, int *cant_positivos);
void contar_negativos(int *arr, int tam, int *cant_negativos);
void copiar_positivos(int *arr, int *positivos, int tam);
void copiar_negativos(int *arr, int *negativos, int tam);
void imprimir_arreglo(int *arr, int tam);

int main(void) {
  int tam;
  int *arreglo = NULL;
  int *positivos = NULL, *negativos = NULL;
  int cant_positivos = 0, cant_negativos = 0;

  srand(time(NULL));  // Inicializar la semilla para los números aleatorios


  // Requisito 1: Solicitar el tamaño del arreglo
  tam = ingresar_cantidad_elementos();

  // Requisito 2: Reservar espacio para un arreglo dinámico
  arreglo = malloc (tam * sizeof (int));

  // Requisito 3: Inicializar el arreglo con valores pseudoaleatorios entre -100 y 100
  inicializar_arreglo(arreglo, tam);
  imprimir_arreglo(arreglo, tam);

  // Contar la cantidad de números positivos y negativos
  contar_positivos(arreglo, tam, &cant_positivos);
  contar_negativos(arreglo, tam, &cant_negativos);

  // Requisito 5: Reservar espacio para los arreglos positivos y negativos
  positivos = malloc ( cant_positivos * sizeof (int));
  negativos = malloc ( cant_negativos * sizeof (int));
  printf("%d", cant_positivos);
  // Requisito 6: Copiar los valores positivos y negativos en los arreglos correspondientes
  copiar_positivos(arreglo, positivos, tam);
  copiar_negativos(arreglo, negativos, tam);

  // Imprimir resultados
  printf("Arreglo original:\n");
  imprimir_arreglo(arreglo, tam);

  printf("\n\nArreglo de números positivos:\n");
  imprimir_arreglo(positivos, cant_positivos);

  printf("\n\nArreglo de números negativos:\n");
  imprimir_arreglo(negativos, cant_negativos);


  /*i want to break */
  /*i want to break */
  /*i want to break */
  free(arreglo);
  free(positivos);
  free(negativos);
  return 0;
}


int ingresar_cantidad_elementos(){
  int cant;

  printf("Ingrese la cantidad de elementos: \n");
  scanf("%d", &cant);
  while (cant  <=  0){
    printf("Error, el valor debe ser positivo\n Ingrese la cantidad de elementos: \n");
    scanf("%d", &cant);

  }
  return cant;	
}



void inicializar_arreglo(int *arr, int tam){

  for ( int i = 0; i< tam ; i++){
    *(arr+i) = rand() %201 - 100;
  }


}

void contar_positivos(int *arr, int tam, int *cant_positivos){

  for (int i = 0; i <tam; i++){
    if(*(arr+i) > 0) {
      (*cant_positivos) ++;
    }
  }

}

void contar_negativos(int *arr, int tam, int *cant_negativos){

  for (int i = 0; i <tam; i++){
    if(*(arr+i) < 0) {
      (*cant_negativos) ++;
    }
  }
}


void copiar_positivos(int *arr, int *positivos, int tam){

  int j = 0;
  for (int i = 0 ; i < tam ; i++){
    if(*(arr+i) >= 0) {
      positivos[j] = arr [i];
      j++;
    }
  }
}


void copiar_negativos(int *arr, int *negativos, int tam){

  int j = 0;
  for (int i = 0 ; i < tam ; i++){
    if(*(arr+i) < 0) {
      negativos[j] = arr [i];
      j++;
    }
  }	
}
void imprimir_arreglo(int *arr, int tam){

  for (int i = 0; i < tam ; i++){
    printf("\n%d", *(arr+i));
  }
}

