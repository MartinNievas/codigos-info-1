#include <stdio.h>
#include <time.h>


int main(void) {

  time_t s;
  struct tm* current_time;

  s = time(NULL);

  current_time = localtime(&s);
  int dia = current_time->tm_mday;
  int mes = current_time->tm_mon+1;
  int anio = current_time->tm_year+1900;

  printf("Day of the month = %d\n",current_time->tm_mday);
  printf("Day in this year = %d\n",current_time->tm_mon+1);
  printf("Año: %d\n", current_time->tm_year+1900);

  return 0;
}
