#include <stdio.h>
#define N 5
int main(int argc, char *argv[]) {

  int arr1 [N];
  int arr2 [N];

  printf ( " Ingrese los valores que desea guardar en el arreglo 1: \n");
  for (int i = 1 ; i <= N ; ++i ){
    printf ( " Ingrese el valor %d: ", i );
    scanf ( "%d", &arr1[i-1] );
  }

  arr2 [ 0 ] = arr1 [ 0 ];

  for ( int i = 1; i <= N; ++i ){
    arr2 [ i ] = arr2 [ i-1 ] + arr1 [ i ];
  }

  printf ( " Arreglo 1:\tArreglo 2:\n " );

  for ( int i = 0; i < N; i++ ){
    printf ( " %d\t\t%d\n",arr1[i],arr2[i] );
  }
  return 0;
}
