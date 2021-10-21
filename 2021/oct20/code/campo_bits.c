#include <stdio.h>
#include <time.h>

struct campo_bits_t {
  unsigned int sexo:1;
  float altura;
  unsigned int dia:5;
  unsigned int mes:4;
  unsigned int anio;

};

int main(void) {

  struct campo_bits_t a;

  time_t s;
  struct tm* current_time;

  s = time(NULL);

  current_time = localtime(&s);

  printf("Day of the month = %d\n",current_time->tm_mday);
  printf("Day in this year = %d\n",current_time->tm_yday);
  printf("Day in this week = %d\n",current_time->tm_wday);
  printf("Current year = %d\n",(current_time->tm_year + 1900));


  return 0;
}
