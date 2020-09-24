#include <stdio.h>

union converir_u{
  int i;
  float f;
};

int main(void)
{

  union converir_u conversor1;
  union converir_u conversor2;

  printf("----------Conversor decimal a HEXA----------\n\n");
  printf("Ingrese el valor flotante: ");
  scanf("%f", &conversor1.f);

  printf("En hexa: %X\n", conversor1.i);

  printf("Ingrese el valor entero: ");
  scanf("%d", &conversor2.i);
  printf("%f", conversor1.f);


  return 0;
}
