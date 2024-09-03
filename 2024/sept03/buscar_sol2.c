#include <stdio.h>
#define TAM 10
//Cipolla Teo
void cargar_y_validar_elementos(int arreglo[], int cantidad);
int buscar(int numero, int arreglo[], int cantidad);

int main(void) {

  int arreglo[TAM], numero;
  // Ingresar los TAM elementos
  cargar_y_validar_elementos(arreglo, TAM);

  // Solicitar al usuario el número a buscar
  printf("Ingrese el número a buscar: ");
  scanf("%d", &numero);

  // Buscar el número
  int res = buscar(numero, arreglo, TAM);
  printf ("%d", res);
  return 0;
}


void cargar_y_validar_elementos(int arreglo[], int cantidad){

  for (int i = 0; i < TAM; i++) {

    printf ("Ingrese los 10 elementos del arreglo: ");
    scanf ("%d",&arreglo[i]);

    while (arreglo[i] < - 100 || arreglo[i] > 100 ){
      printf ("Ingrese un elemento entre -100 y 100: ");
      scanf ("%d",&arreglo[i]);
    }
  };
}
int buscar(int numero, int arreglo[], int cantidad){
  int ver = -1;
  for(int i = 0; i <  TAM; i++){
    if (arreglo [i] == numero){

      ver = i;
    }
  }
  return ver;
}
