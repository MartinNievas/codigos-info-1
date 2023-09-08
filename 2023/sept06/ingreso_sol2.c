#include <stdio.h>
#define TAM 10

void ingresar_elementos(int a[], int tam)
{
  printf("ingrese los elementos\n");
  for(int i=0;i<=tam-1;i++){
    scanf("%d", &a[i]);
  }
}

void imprimir_arreglo(int a[], int tam)
{
  printf("Los datos del arreglo son:");
  for(int i=0;i<=tam-1;i++){
    printf("%d_", a[i]);
  }
}

int buscar_mayor(int a[], int tam){
  int mayor1=a[0];
  for(int i=0;i<=tam-1;i++){
    if(mayor1<a[i]){
      mayor1=a[i];
    }


  }
  return mayor1;
}

int buscar_menor(int a[], int tam){
  int menor1=a[0];
  for(int i=0;i<=tam-1;i++){
    if(menor1>a[i]){
      menor1=a[i];
    }
  }
  return menor1;
}

int main(void) {

  int arreglo[TAM];
  ingresar_elementos(arreglo, TAM);
  imprimir_arreglo(arreglo, TAM);
  int mayor = buscar_mayor(arreglo,TAM);
  int menor= buscar_menor(arreglo,TAM);
  printf("\nEl nro mayor es:%d\n", mayor);
  printf("El nro menor es:%d\n", menor);
  return 0;
}
