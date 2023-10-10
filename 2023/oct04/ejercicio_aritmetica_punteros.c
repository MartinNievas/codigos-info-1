#include <stdio.h>
#define TAM 3

/** Función para sumar arreglos
  * operación:  c = a + b
  *  */
void sumar_arreglos(float* arreglo_c, const float* arreglo_a, const float* arreglo_b, const int tam)
{
  for (int i = 0; i < tam; i++){
    *(arreglo_c+i) = *(arreglo_a+i) + *(arreglo_b+i);
  }
}

void cargar_arreglo(float* arreglo_c, const int tam);
/** Función para multiplicar arreglos elemento a elemento
  * operación:  c[i] = a[i] * b[i]
  *  */
void multiplicar_arreglos(float* arreglo_c, const float* arreglo_a, const float* arreglo_b, const int tam);
float producto_punto(float* arreglo_a, const float* arreglo_b, const int tam);

int main(void) {

  float a[TAM], b[TAM], c[TAM];

  cargar_arreglo(a, TAM);
  cargar_arreglo(b, TAM);

  sumar_arreglos(c, a, b, TAM);

  // Crear una función para imprimir el resultado de la misma forma que
  // está abajo
  printf("Resultado:\n");
  for (int i = 0; i < TAM; i++){
    printf("%f + %f = %f\n", a[i], b[i], c[i]);
  }


  return 0;
}

