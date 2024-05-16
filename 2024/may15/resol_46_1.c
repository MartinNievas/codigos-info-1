
//rosales alejo 401389 Promedios
#include <stdio.h>

int main(int argc, char *argv[]) {
  int nota1;
  int nota2;
  int nota3;
  float suma;
  printf("nota parcial1: ");
  scanf("%d",&nota1);
  printf("nota parcial2: ");
  scanf("%d",&nota2);
  printf("nota parcial3: ");
  scanf("%d",&nota3);
  suma=(nota1+nota2+(float)nota3)/3;
  printf("el resultado es= %f ",suma);
  return 0;
}
