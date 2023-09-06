#include <stdio.h>
#define TAM 10

void ingresar_elemento (int a[], int tam)
{
  int i;
  for(i = 0; i < tam ; i++){
    printf("Ingrese el numero:");
    scanf("%d", &a[i]);
  }
}

int main(void) {

  int arreglo [TAM];
  int i;
  ingresar_elemento(arreglo, TAM);

  for( i=0; i<TAM ; i++){
    printf("\nEl elemento a[%d] vale: %d\n" ,i , arreglo[i]);
  }

  return 0;
}
