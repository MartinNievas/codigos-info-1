#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

typedef struct {
  int x;
  int y;
}punto2D_t;

// Mediante una función validación, utilizando punteros, solicitar la cantidad de elementos a generar "n"
// cuyo valor debe ser positivo y menor que TAM
// Versión punteros
void validar_puntero(int *);
// Versión con retorno
int validar_retorno(void);

// inicializar aleatoriamente los "n" elementos del arreglo. Valores entre 20 y 30 mediante una función
// con prototipo como el siguiente
void inicializar_arreglo(punto2D_t *, int);

// Imprimir las coordenadas de los elementos del arreglo separados por tab ("%d\t%d\n",
void imprimir_elementos(punto2D_t *, int);


int main(void) {

  punto2D_t puntos[TAM];
  int n;
  int *pn;
  pn = &n;

  // validar_puntero(pn);

  n = validar_retorno();

  inicializar_arreglo(puntos, n);

  imprimir_elementos(puntos, n);


  return 0;
}


void validar_puntero(int *n){

  int temp;
  do {
    printf("Ingrese el n: ");
    scanf("%d", &temp);
  } while ( temp < 0 || temp > TAM);

  *n = temp;
}

int validar_retorno(void){
  int n;

  do {
    printf("Ingrese n: ");
    scanf("%d", &n);
  } while (n < 0 || n > TAM);

  return n;
}

void inicializar_arreglo(punto2D_t *a, int tam){

  srand(time(NULL)); // Genera semilla diferente

  for (int i = 0; i < tam; i++){
    a[i].x = 20 + rand() % 11;
    a[i].y = 20 + rand() % 11;
  }

}

void imprimir_elementos(punto2D_t *a, int tam){

  for (int i = 0; i < tam; i++){
    printf("%d\t%d\n", a[i].x, a[i].y);
  }

}
