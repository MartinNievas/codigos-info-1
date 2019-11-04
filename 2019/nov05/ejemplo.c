#include <stdio.h>
#include "EasyPIO.h"

int main(void)
{

  pioInit();

  pinMode(31, OUTPUT);


  for (;;)
  {
    digitalWrite(31, HIGH);
    delayMillis(100);
    digitalWrite(31, LOW);
    delayMillis(100);
  }


  return 0;
}
