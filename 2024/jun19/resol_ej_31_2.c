//camila medina 
#include <stdio.h>

int main() {
  printf(" Ingresar  un numero entre 0 y 100: ");
  int a;
  scanf("%d", &a);
  while(a<0 || a>100){
    printf("El número está fuera del rango\n");
    printf(" Ingresar  un numero entre 0 y 100 ");
    scanf("%d", &a);
  }
  return 0;
}
