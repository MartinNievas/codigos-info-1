#include <stdio.h>
#define TAM 3

/** Función para sumar arreglos
  * operación:  c = a + b
  *  */
void sumar_arreglos(float* arreglo_c,
    const float* arreglo_a,
    const float* arreglo_b,
    const int tam)
{
  for (int i = 0; i < tam; i++){
    *(arreglo_c+i) = *(arreglo_a+i) + *(arreglo_b+i);
  }
}

void cargar_arreglo(float* arreglo, int tam){

  scanf("%d", arreglo);

}

int main(void) {

  float a[TAM], b[TAM], c[TAM];

  cargar_arreglo(a,TAM);
  cargar_arreglo(b,TAM);

  sumar_arreglos(c, a, b, TAM);

  imprimir_arreglo(c,TAM);

  printf("Resultado:\n");
  for (int i = 0; i < TAM; i++){
    printf("%f + %f = %f\n", a[i], b[i], c[i]);
  }


  return 0;
}
