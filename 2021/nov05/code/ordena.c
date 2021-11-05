#include <stdio.h>

void ascendente(int *p, int *q)
{
  if (*p > *q){
    int temp = *p;
    *p = *q;
    *q = temp;
  }
}

void descendente(int *p, int *q)
{
  if (*p < *q){
    int temp = *p;
    *p = *q;
    *q = temp;
  }
}

void burbuja(void (*orden)(int*,int*), int *p, int n)
{
  for (i = 0; i < n-1; i++){
    for (j = 0; j < n-1-i; j++){
      (*orden)(p+j,p+j+1);
    }
  }
}

int main(void) {

  //-- burbuja(ascendente, vect, 100);
  // burbuja((void*)ascendente(int*,int*), vect, 100);
  // burbuja(ascendente, vect[100], 100);
  // burbuja((void)(*ascendente), vect, 100);
  // burbuja((*ascendente)(int*,int*), vect, 100);

  return 0;
}
