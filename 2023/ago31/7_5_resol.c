#include <stdio.h>
#define N 3

int main(void) {

  int a[N], b[N], pescalar = 0;

  for(int i = 0; i < N; i++) {

    printf("Ingrese el elemento a[%d]: ", i);
    scanf("%d", &a[i]);
  }

  printf("\n");

  for(int i = 0; i < N; i++) {

    printf("Ingrese el elemento b[%d]: ", i);
    scanf("%d", &b[i]);
  }

  for(int i = 0; i < N; i++) {

    pescalar += (a[i] * b[i]);
  }

  printf("\nEl producto punto es: %d", pescalar);

  return 0;
}
