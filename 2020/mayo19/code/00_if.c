#include <stdio.h>

int main(void)
{
  int temperatura = 34;

  if (temperatura > 30){
    printf("Encender aire\n");
  }

  if (temperatura < 20){
    printf("Encender calefacción\n");
  }

  return 0;
}
