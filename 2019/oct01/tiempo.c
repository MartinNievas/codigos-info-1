#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

  time_t t = time(NULL);
  struct tm tiempo = *localtime(&t);
  
  for (int i = 0; i < 1000000; i++)
  {
    t = time(NULL);
    tiempo = *localtime(&t);
    printf("Hola!-");
    printf("now: %d-%d-%d %d:%d:%d\r", 
      tiempo.tm_year + 1900, 
      tiempo.tm_mon + 1,
      tiempo.tm_mday, 
      tiempo.tm_hour, 
      tiempo.tm_min, 
      tiempo.tm_sec);
  }
  return 0;
}
