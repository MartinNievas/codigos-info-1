#include <stdio.h>
// Tengo dos pulsadores y quiero controlar 2 LEDS de la forma:
// pulsadores  |     LEDS
//   A    B    |  LED2   LED3
//   0    0    |  off    off
//   0    1    |  off    on
//   1    0    |  on     off
//   1    1    |  on     on

int main(void) {
  int p1, p2;
  int led2 = 0, led3 = 0;

  scanf("%d", &p1);
  scanf("%d", &p2);


  printf("ON LED2\n"); // prende LED2
  printf("OFF LED3\n"); // apaga LED3

  return 0;
}
