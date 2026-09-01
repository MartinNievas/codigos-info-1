#include <stdio.h>

void Inicializaren0( float arr[], int tam) {
  for (int i=0; i<tam; i++){
    arr[i] = 0;
    printf("     %0.f\n", arr[i]);
  }
}

int main(int argc, char *argv[]) {
  int tam;
  printf ("ingrese el tamaño del arreglo:");
  scanf("%d",&tam);

  float vec[tam];

  Inicializaren0(vec ,tam);
  return 0;
}
