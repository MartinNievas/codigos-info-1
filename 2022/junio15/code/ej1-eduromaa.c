#include <stdio.h>
// Tengo dos pulsadores y quiero controlar 2 LEDS de la forma:
// pulsadores  |     LEDS
//   A    B    |  LED2   LED3
//   0    0    |  off    off
//   0    1    |  off    on
//   1    0    |  on     off
//   1    1    |  on     on
//   Página: https://codeshare.io/Od6rwN

int main(void) {
  int p1, p2;
  int led2 = 0, led3 = 0;

  scanf("%d", &p1);
  scanf("%d", &p2);


  led2 = 1; // LED2 prendido
  led3 = 0; // LED3 apagado

  return 0;
}
