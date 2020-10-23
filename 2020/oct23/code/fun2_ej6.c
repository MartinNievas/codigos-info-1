#include <stdio.h>
#include <stdlib.h>

#define TAM 500

int es_primo(int num);
int contar_primos(int a[], int n);

int main(void)
{
  int i, n;
  int arreglo[TAM];

  do {
    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);
  } while (n < 0);

  for (i = 0; i < n; i++)
    arreglo[i] = rand() % 1001;

  for (i = 0; i < n; i++)
    printf("%d\n", arreglo[i]);

  int cantidad_primos;
  cantidad_primos = contar_primos(arreglo, n);
  printf("Hay %d primos\n", cantidad_primos);

  return 0;
}

int es_primo(int num){

  int resultado;
  int cont = 0;
  for (int i = 1; i <= num; i++){
    if ((num % i) == 0){
      cont++;
    }
  }

  if (cont == 2){
    resultado = 1;
  } else {
    resultado = 0;
  }

  return resultado;

}

int contar_primos(int a[], int n){

  int contador = 0;
  for (int i = 0; i < n; i++){
    if (es_primo(a[i]))
      contador++;
  }

  return contador;
}
