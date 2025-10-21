#include <stdio.h>

typedef struct{
  char marca [20];
  char modelo [20];
  int ano;
  int kilometraje;
}vehiculo;


int main(int argc, char *argv[]) {


  vehiculo max;

  max = autos[0];
  for( int i = 1; i < 5; i++){
    if( autos[i].kilometraje > max.kilometraje ){
      max = autos[i];
    }

