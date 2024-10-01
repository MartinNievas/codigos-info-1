#include <stdio.h>

void saludo1(void)
{
  printf("Hola desde saludo1\n");
}

void saludo2(void)
{
  printf("Hola desde saludo2\n");
}

void saludo3(void)
{
  printf("Hola desde saludo3\n");
}

int main(void) {

  void (*pf[3])(void) = {saludo1, saludo2, saludo3};

  for (int i = 0; i < 3; i++){
    pf[i]();
  }

  operar(pf[1], 3, 2);

  void (*temp)(void);
  temp = pf[0];
  pf[0] = pf[1];
  pf[1] = temp;

  printf("Luego de cambiar:\n");
  for (int i = 0; i < 3; i++){
    pf[i]();
  }

  return 0;
}
