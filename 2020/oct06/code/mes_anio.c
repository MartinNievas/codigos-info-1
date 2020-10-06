#include <stdio.h>
#include <time.h>

int main(void)
{


  time_t rawtime;
  struct tm *info;

  /** Desde acá */
  time( &rawtime );
  info = localtime( &rawtime );
  /** Hasta acá */

  int anio_actual = info->tm_year + 1900;
  int nacimiento = 1990;
  int anios = anio_actual - nacimiento;

  printf("La edad es: %d\n", anios);

  return 0;
}
