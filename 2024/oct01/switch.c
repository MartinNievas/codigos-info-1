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

  for (int i = 1; i < 4; i++){
    switch(i){
      case 1:
        saludo1();
        break;
      case 2:
        saludo2();
        break;
      case 3:
        saludo3();
        break;
    }

  }

  return 0;
}

