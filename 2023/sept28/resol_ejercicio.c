#include <stdio.h>
#define TAM 3

/** Función para sumar arreglos
 * operación:  c = a + b
 *  */
void sumar_arreglos(float* arreglo_c, float* arreglo_a, float* arreglo_b, int tam)
{
  for (int i = 0; i < tam; i++){
    *(arreglo_c + i) = *(arreglo_b + i) + *(arreglo_a + i);
  }
}

void cargar_arreglo(float* arreglo_c, const int tam) {

  for(int i = 0; i < tam; i++) {

    printf("Ingrese el valor del arreglo %d: ", i);
    scanf("%f", &*(arreglo_c + i));
  }

  printf("\n");
}

/** Función para multiplicar arreglos elemento a elemento
 * operación:  c[i] = a[i] * b[i]
 *  */
void multiplicar_arreglos(float* arreglo_c, const float* arreglo_a, const float* arreglo_b, const int tam) {

  for(int i = 0; i < tam; i++) {

    *(arreglo_c + i) = *(arreglo_a + i) * *(arreglo_b + i);
  }
}

float producto_punto(float* arreglo_a, const float* arreglo_b, const int tam) {

  float productoPunto = 0;

  for(int i = 0; i < tam; i++) {

    productoPunto += *(arreglo_a + i) * *(arreglo_b + i);
  }
  return productoPunto;
}	

int main(void) {

  float a[TAM], b[TAM], c[TAM];

  cargar_arreglo(a, TAM);
  cargar_arreglo(b, TAM);

  sumar_arreglos(c, a, b, TAM);

  printf("Resultado suma:\n");
  for (int i = 0; i < TAM; i++){
    printf("%f + %f = %f\n", a[i], b[i], c[i]);
  }

  multiplicar_arreglos(c, a, b, TAM);

  printf("\nResultado multiplicación:\n");
  for(int i = 0; i < TAM; i++) {

    printf("%f * %f = %f\n", a[i], b[i], c[i]);
  }

  printf("\nResultado del producto punto a . b: %f\n", producto_punto(a, b, TAM));
  return 0;
}

