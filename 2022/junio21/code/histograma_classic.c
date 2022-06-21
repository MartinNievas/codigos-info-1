#include <stdio.h>
#define SIZE 6
// Qué pasa en un mundo sin arreglos?

int main(void) {

  int nota, i;
  int cant_1  = 0;
  int cant_2  = 0;
  int cant_3  = 0;
  int cant_4  = 0;
  int cant_5  = 0;
  int cant_6  = 0;
  int cant_7  = 0;
  int cant_8  = 0;
  int cant_9  = 0;
  int cant_10 = 0;

  for (i = 0; i < SIZE; i++){
    printf("Ingrese la nota: ");
    scanf("%d", &nota);
    switch(nota){
    case 1 : cant_1 ++; break;
    case 2 : cant_2 ++; break;
    case 3 : cant_3 ++; break;
    case 4 : cant_4 ++; break;
    case 5 : cant_5 ++; break;
    case 6 : cant_6 ++; break;
    case 7 : cant_7 ++; break;
    case 8 : cant_8 ++; break;
    case 9 : cant_9 ++; break;
    case 10: cant_10++; break;
    default:
      printf("nota no válida\n");
    break;
    }
  }

  printf("1 : %d\n", cant_1 );
  printf("2 : %d\n", cant_2 );
  printf("3 : %d\n", cant_3 );
  printf("4 : %d\n", cant_4 );
  printf("5 : %d\n", cant_5 );
  printf("6 : %d\n", cant_6 );
  printf("7 : %d\n", cant_7 );
  printf("8 : %d\n", cant_8 );
  printf("9 : %d\n", cant_9 );
  printf("10: %d\n", cant_10);

  return 0;
}
