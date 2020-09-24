#include <stdio.h>

enum meses {
  ENERO, FEBRERO, MARZO,
  ABRIL, MAYO, JUNIO,
  JULIO, AGOSTO, SEPTIEMPRE,
  OCTUBRE, NOVIEMBRE, DICIEMBRE};

int main(void)
{

char *meses[] = { "enero", "febrero", "marzo",
                  "abril", "mayo", "junio",
                  "julio", "agosto", "septiempre",
                  "octubre", "noviembre", "diciembre"};

  for (int i = ENERO; i < DICIEMBRE; i++){
    printf("%s\n", meses[i]);
  }


  return 0;
}
