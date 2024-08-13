#include <stdio.h>
#define N 10

int main(int argc, char *argv[]) {
  int a[N];
  int may, i;

  for (i = 0; i < N; i++){
    printf("Ingrese el %d° elemento: ", i + 1);
    scanf("%d", &a[i]);
  }

  may = a[0];
  for (i = 0; i < N; i++)
    if (a[i] > may){
      may = a[i];
    }
  // a[0] : 30
  // a[1] : 40
  // a[2] : 300
  //
  //may | i | a[i] > may | i++
  //  30| 0 |  falsa     | 1
  //  30| 1 |  verd      | 2
  //  40| 2 |  falsa     | 3

  printf("\nEl mayor elemento del arreglo es: %d", may);

  return 0;
}
