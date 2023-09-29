#include <stdio.h>
#define TAM 3

/** Función para sumar arreglos
  * operación:  c = a + b
  *  */
void sumar_arreglos(
    float *arreglo_c,
    float *arreglo_a,
    float *arreglo_b,
    const int tam)
{
  for (int i = 0; i < tam; i++){
    //arreglo_c[i] = arreglo_a[i] + arreglo_b[i];
    *(arreglo_c+i) = *(arreglo_a+i) + *(arreglo_b+i);
  }
}

/** Función para multiplicar arreglos elemento a elemento
  * operación:  c[i] = a[i] * b[i]
  *  */
void multiplicar_arreglos(
    float *arreglo_c,
    float *arreglo_a,
    float *arreglo_b,
    const int tam);

float producto_punto(
    float *arreglo_c,
    float *arreglo_a,
    const int tam);

void cargar_arreglo(float* arreglo, int tam){

  scanf("%d", arreglo);

}

int main(void) {

  float a[TAM], b[TAM], c[TAM];
  int *pa, cont;

  cargar_arreglo(a,TAM);
  cargar_arreglo(b,TAM);

  sumar_arreglos(c, a, b, TAM);

  imprimir_arreglo(c,TAM);

  return 0;
}
