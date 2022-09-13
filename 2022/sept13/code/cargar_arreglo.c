#include <stdio.h>
#define TAM 4

// forma "tradicional"
void ingresar_datos(int a[]){

  // recorrer el arreglo e ingresar los datos
  for (int i = 0; i < TAM; i++){
    printf("Ingrese el número: ");
    scanf("%d", &a[i]);
  }

}

// aritmética de punteros
void ingresar_datos_ar(int *a){

  // recorrer el arreglo e ingresar los datos
  for (int i = 0; i < TAM; i++){
    printf("Ingrese el número: ");
    // scanf("%d", &a[i]); // la dirección de memoria del elemeno i
    // En a tengo la dirección del primer elemento
    // a++
    scanf("%d", (a+i));
  }

}

// Imprimir el arreglo mediante aritmética de punteros
void imprimir_arreglo(int *a){

  for (int i = 0; i < TAM; i++)
    printf("%d ", i[a]);

  // Magia
  // a[i] <==> *(a+i)
  // i[a] <==> *(i+a)

  // printf("%d ", *(a+i)); // Base + indice
}

void imprimir_arreglo_como_arreglo(int a[]){

  for (int i = 0; i < TAM; i++)
    printf("%d\n", a[i]);

}

int main(void) {

  int arreglo[TAM];
  int *p_arreglo;

  p_arreglo = &arreglo[0];

  printf("La dirección de &arreglo[0]   es: %p\n", &arreglo[0]);
  printf("La dirección de p_arreglo es: %p\n", p_arreglo);
  printf("La dirección de arreglo es: %p\n", arreglo);

  /** ingresar_datos(arreglo); */
  ingresar_datos_ar(arreglo);

  imprimir_arreglo_como_arreglo(arreglo);
  imprimir_arreglo(arreglo);


  return 0;
}
