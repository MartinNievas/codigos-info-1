//ej Gimenez Bosch Gustavo
#include <stdio.h>

int main(int argc, char *argv[]) {
  int a;
  int b=0;
  float c;
  int i=0;
  for(i=0;i<10;i++){
    printf("Ingrese nota: ");
    scanf("%d", &a);
    while(a < 0 || a > 10){
      printf("La nota ingresada es erronea.
          Ingrese una válida: ");
      scanf("%d", &a);
    }
    b=a+b;
  }
  printf("\n%d", b);
  c = b*1.0/10;
  c = b/10.0;
  c = (float) b / 10;
  printf("\n%.2f", c);
  return 0;
}

