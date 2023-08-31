#include <stdio.h>
#define N 10

int main(void) {
  int a[N], i;

  for(i=0; i<N; i++){
    printf("ingrese el número %d: ", i+1);
    scanf ("%d", &a[i]);
  }

  for(i = 0; i < N; i++){
    if (a[i] < 0)
      a[i] *= -1;
      // a[i] = -a[i]; // Alternativa
  }

  for(i=0; i<N; i++){
    printf("Su número es %d:%d \n",i, a[i]);
  }

  return 0; 
}
