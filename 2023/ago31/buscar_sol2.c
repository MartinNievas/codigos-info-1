#include <stdio.h>
#define N 5
int main( void ){


  int a[N]={0};

  for(int i=0; i<N ; i++){

    printf ("ingrese el valor del casillero %d: ", i);
    scanf ("%d", &a[i]);
  }

  for(int i=0; i<N ; i++){
    if(a[i]<0)
      a[i]*=-1;
  }

  for(int i=0; i<N ; i++){
    printf ("%d ", a[i] );

  }


  return 0;

}
