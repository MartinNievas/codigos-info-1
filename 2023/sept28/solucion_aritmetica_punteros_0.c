#include <stdio.h>
#define TAM 3

void sumar_arreglos(float *arreglo_c,
    float *arreglo_a,
    float *arreglo_b,
    int tam)
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

void multiplicar_arreglos(float *arreglo_c, 
    const float *arreglo_a, 
    const float *arreglo_b, 
    const int tam) {

  for(int i = 0; i < tam; i++) {

    *(arreglo_c + i) = *(arreglo_a + i) * *(arreglo_b + i);
  }

}	
float producto_punto(float *arreglo_a,
    const float *arreglo_b,
    const int tam) {

  float productoPunto = 0;

  for(int i = 0; i < tam; i++) {

    productoPunto += *(arreglo_a + i) * *(arreglo_b + i);
  }
  return productoPunto;
}	

void imprimir(float *arreglo, int tam){

  printf("Resultado suma:\n");
  for (int i = 0; i < tam; i++){
    printf("%.2f\n", arreglo[i]);
  }

}

int main(void) {

  float a[TAM], b[TAM], c[TAM];

  cargar_arreglo(a, TAM);
  cargar_arreglo(b, TAM);

  sumar_arreglos(c, a, b, TAM);
  imprimir(c, TAM);

  multiplicar_arreglos(c, a, b, TAM);
  imprimir(c, TAM);

  printf("\nResultado del producto punto a . b: %.2f\n", producto_punto(a, b, TAM));
  return 0;
}

