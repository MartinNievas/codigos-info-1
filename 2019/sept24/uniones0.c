#include <stdio.h>

union nombres_u{
  int x;
  char y[4];
};

int main(void)
{
  union nombres_u var;

  //var.x = 128;
  var.y[1] = 'A';
  //var.y[1] = 1;
  printf("%d\n", var.x);
  printf("%d\n", var.y[0]);
  printf("%d\n", var.y[1]);
  printf("%d\n", var.y[2]);
  printf("%d\n", var.y[3]);

  return 0;
}
