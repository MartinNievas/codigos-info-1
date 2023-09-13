  #include <stdio.h>
#define TAM 10
// Modificar este programa para ordenar el arreglo de mayor a menor.

void cargar_elementos(int *arreglo, int tam){
  for (int i = 0; i < tam; i++){
    printf("Ingrese nota: ");
    scanf("%d", &arreglo[i]);
  }
}

void imprimir_elementos(int *arreglo, int tam){
  for (int i = 0; i < tam; i++){
    printf("%d\n", arreglo[i]);
  }
}

void ordenamiento(int *arreglo, int tam){
    int aux;
    for (int i = 0; i < tam-1; i++)
    {
        for (int j = i+1; j < tam; j++)
        {
            if (arreglo[i] < arreglo[j])
            {
                aux = arreglo[i];
                arreglo[i] = arreglo[j];
                arreglo[j] = aux;
            }
        }
    }
}

void ordenamiento_2(int *arreglo, int tam){
    int aux;
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam-1; j++)
        {
            if (arreglo[j] < arreglo[j+1])
            {
                aux = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = aux;
            }
        }
    }
}

// Función que calcula el promedio de un
// arreglo de tamaño tam
float promedio(int* a, int tam){
  float sum = 0;
  for (int i = 0; i < tam; i++)
    sum += a[i];
  return sum/tam;
}

int mediana(int* a, int tam){
  return a[tam/2];
}

int main(void) {
  int nota[TAM];
  cargar_elementos(nota,TAM);
  ordenamiento(nota,TAM);
  imprimir_elementos(nota,TAM);
  return 0;
}

