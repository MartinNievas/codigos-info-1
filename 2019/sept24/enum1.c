#include <stdio.h>

enum meses{
  ENERO = 1, FEBRERO, MARZO, ABRIL, MAYO, JUNIO, JULIO, AGOSTO, SEPTIEMBRE, OCTUBRE, NOVIEMBRE, DICIEMBRE
};

int main(void)
{
  
  const char *mes[] = {"", "ENERO", "FEBRERO", "MARZO", "ABRIL", "MAYO", "JUNIO", "JULIO", "AGOSTO", "SEPTIEMBRE", "OCTUBRE", "NOVIEMBRE", "DICIEMBRE"};

  for (int i = ENERO; i <= DICIEMBRE; i++)
  {
    printf("%s\n", mes[i]);
  }

  return 0;
}
