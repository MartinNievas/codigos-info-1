#include <stdio.h>

void incrementa_arreglo(int a[])
{
  for (int i = 0; i < 10; i++){
    a[i]++;
  }
}

int main(void) {

  int temp[10] ={5, 4, 9};
  incrementa_arreglo(temp);
  for (int i = 0; i < 10; i++){
    printf("temp[%d]: %d\n", i, temp[i]);
  }

  return 0;
}
