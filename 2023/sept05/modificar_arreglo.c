#include <stdio.h>
void incrementa(int a)
{
  a++;
  printf("%d\n", a);
}

void incrementa_arreglo(int a[])
{
  a[1]++;
  printf("%d\n", a[1]);
}

int main(void) {

  int temp[10] ={5, 5, 5};
  printf("temp: %d\n", temp[0]);
  incrementa_arreglo(temp);
  printf("temp: %d\n", temp[0]);
  printf("temp: %d\n", temp[1]);

  return 0;
}
