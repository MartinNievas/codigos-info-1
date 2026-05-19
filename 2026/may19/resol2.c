//tp 2 Nico
#include <stdio.h>

int main(int argc, char *argv[]) {

  int var;
  printf("ingrese un numero:");
  scanf("%d", &var);
  printf("%d",(var == (var/3)*3)*(var == (var/5)*5));
  return 0;
}
