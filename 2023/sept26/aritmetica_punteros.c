#include <stdio.h>
#define TAM 3

/** Función para sumar arreglos
  * operación:  c = a + b
  *  */
void sumar_arreglos(
    float* arreglo_c,
    float* arreglo_a,
    float* arreglo_b,
    const int tam)
{
  for (int i = 0; i < tam; i++){
    arreglo_c[i] = arreglo_a[i] + arreglo_b[i];
  }
}

int main(void) {

  float a[TAM], b[TAM], c[TAM];

  for (int i = 0; i < TAM; i++){
    printf("Ingrese el elemento a[%d]: ", i);
    scanf("%f", &a[i]);
  }

  for (int i = 0; i < TAM; i++){
    printf("Ingrese el elemento b[%d]: ", i);
    scanf("%f", &b[i]);
  }

  sumar_arreglos(c, a, b, TAM);

  printf("Resultado:\n");
  for (int i = 0; i < TAM; i++){
    printf("%f + %f = %f\n", a[i], b[i], c[i]);
  }


  return 0;
}
