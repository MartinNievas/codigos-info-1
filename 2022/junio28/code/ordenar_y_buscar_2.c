#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

// Arreglo TAM
// ingrese tam >>      tam > 0 && tam < TAM
// Inicializar todos los tam elementos con números aleatorios entre 0 y 100
// Ordenar de mayor a menor
// Pedirle al usuario un número a buscar (binario)

int main(void) {

  int arreglo[TAM];
  int tam;

  // ingrese tam >>      tam > 0 && tam < TAM

  // |-----0-----------10---------TAM-----
  // |-----..........................-----
  //           tam > 0 && tam < TAM
  //

  // while( !(tam > 0 && tam < TAM) ) // Alternativa
  // Probar con un do while

  while (tam <= 0 || tam >= TAM){
    /* code */
  }

  // Inicializar todos los tam elementos con números aleatorios entre 0 y 100
  for( int i = 0; i < tam; i++){
    // Cargar arreglo[i] con núm aleatorios
    // arreglo[i] = rand();
  }

  // Ya tengo tam elementos cargados
  // ordenar if(j < j+1) o también if( j+1 > j )


  // Pedir el número a buscar

  // buscar el número


  return 0;
}
