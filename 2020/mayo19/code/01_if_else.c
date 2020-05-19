#include <stdio.h>

int main(void)
{
  int temperatura = 10;

  if (temperatura > 30){
    printf("Encender aire\n");
  } else {
    printf("Encender calefacción\n");
  }

  return 0;
}
