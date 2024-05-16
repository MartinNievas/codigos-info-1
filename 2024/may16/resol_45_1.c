#include <stdio.h>
//LUNAD, Juan Cruz - Alias Wanchope39

int main(int argc, char *argv[]) {
  int velocidad;
  int tiempo;
  int distancia;

  printf("NO INGRESE UNIDADES, SOLO INGRESE NUMEROS NUMERO: \n\n");	

  printf("ínserte un valor para las velocidad: \n");	

  scanf("%d",&velocidad);

  printf("ínserte un valor para el tiempo: \n");

  scanf("%d",&tiempo);

  distancia = velocidad * tiempo ;

  printf("la distancia es: %d mts", distancia);

  return 0;
} 
