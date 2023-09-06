#include <stdio.h>
#define TAM 3

int   ingreso_y_validacion();
void  ingresar_elemento(int a[], int tam);
void  imprimir_arreglo(int a[], int tam);
float calcular_promedio(int a[], int tam);


int main()
{
  int arreglo[TAM];
  ingresar_elemento(arreglo, TAM);
  imprimir_arreglo(arreglo, TAM);

  float promedio;
  promedio = calcular_promedio(arreglo, TAM);
  printf("el promedio es : %.2f\n", promedio);

  return 0;
}

int ingreso_y_validacion(){
  int numero = 0;
  printf("ingrese un numero entre 0 y 100: ");
  scanf("%d", &numero);
  if(numero >= 0 && numero <= 100){
    return numero;
  }
  else {
    printf("!!!numero fuera de rango¡¡¡\n");
    return ingreso_y_validacion();
  }
}

void ingresar_elemento(int a[], int tam){
  for(int i=0;i<tam;i++){
    a[i] = ingreso_y_validacion();
  }
}

void imprimir_arreglo(int a[], int tam){
  for(int i=0;i<tam;i++){
    printf("elemento %d: %d\n",i,a[i]);
  }
}

float calcular_promedio(int a[], int tam){
  float sumatoria = 0;
  for(int i=0;i<tam;i++){
    sumatoria += a[i];
  }
  float promedio = sumatoria/tam;

  return promedio;
}

