#include <stdio.h>

struct campo {
  char a : 8;
  char leds : 8;
  char pulsadores : 8;
};

int main(void)
{
  struct campo var1;
  
  var1.leds = 0;
  var1.pulsadores = 0;
  printf("%d\n", 1<<i);

  printf("%d\n", var1.leds);
  printf("%d\n", var1.pulsadores);
  
  return 0;
}
