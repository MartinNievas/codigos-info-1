#include <stdio.h>
#define CASO_TEMPERATURA 15

int main(void)
{
  int algo = 10;
  int otra_var = 10;

  switch(algo)
  {
  case CASO_TEMPERATURA:
    printf("OTRA!\n");
  break;
  default:
  break;
  }

  return 0;
}
