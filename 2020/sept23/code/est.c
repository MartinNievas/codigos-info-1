#include <stdio.h>

struct punto_2D {
  float prom;
  int dni;
};

union temp_u{
  int i_temp;
  float f_temp;
};

int main(void)
{

  struct punto_2D p1;
  union temp_u temperatura;

  printf("struct: %ld\n", sizeof(p1));
  printf("union: %ld\n", sizeof(temperatura));


  return 0;
}
