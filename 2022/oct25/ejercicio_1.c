#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define TAM 100

typedef struct {
  float x;
  float y;
} punto2d_t;

void borrar_cercanos(punto2d_t* arreglo, float valor, int cant);
void imprimir_puntos(punto2d_t* arreglo, int cant);

int main(void) {

  punto2d_t puntos[TAM];
  srand(time(NULL));
  float radio = 1.0;
  int cantidad = -1;

  // Solicitar al usuario la cantidad de puntos a utilizar. Validar que sea positivo y menor a TAM
  //
  // while(cantidad <= 0 || cantidad > TAM){
  //   printf("Ingrese la cantidad: ");
  //   scanf("%d", &cantidad);
  // }

  do{
    printf("Ingrese la cantidad: ");
    scanf("%d", &cantidad);
  }while(cantidad <= 0 || cantidad > TAM);

  // Inicializar las posiciones x e y de forma aleatoria (son floats, probar rand/rand)
  for (int i = 0; i < cantidad; i++){
    puntos[i].x = (float) rand() / rand();
    puntos[i].y = (float) rand() / rand();
  }

  // Poner a 0.0 los puntos que estén estén dentro del círculo con radio: "radio"
  borrar_cercanos(puntos, radio, cantidad);

  // Imprimir los puntos del arreglo
  imprimir_puntos(puntos, cantidad);


  // Ver:
  // Vecinos más cercanos
  // QuadTrees
  // RadixSort
  //
  //  |    .
  //  |  .   .
  //  | .  . .
  //  |_______

  return 0;
}

void borrar_cercanos(punto2d_t* arreglo, float radio, int cant){

  for (int i = 0; i < cant; i++){
    float resultado = sqrt(
        (arreglo[i].x * arreglo[i].x) +
        (arreglo[i].y * arreglo[i].y)
        );
    if (resultado < radio)
      arreglo[i].x = arreglo[i].y = 0;
  }

}

void imprimir_puntos(punto2d_t* arreglo, int cantidad){
  for (int i = 0; i < cantidad; i++)
    printf("[%f,%f]\n", arreglo[i].x,
                        arreglo[i].y); | & ^ ~

}
