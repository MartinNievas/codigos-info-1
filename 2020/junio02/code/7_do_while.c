#include <stdio.h>

int main(void) {
  int i;
  int temp;
  float promedio = 0;
  int cant_temp;

  printf("Ingrese la cantidad de mediciones: ");
  scanf("%d", &cant_temp);
  i = 0;

  do {
    printf("Ingrese la temperatura %d:" , i+1);
    scanf("%d", & temp ) ;
    promedio = promedio + temp ;
    i = i + 1;
  } while ( i < cant_temp ) ;

  promedio = promedio / cant_temp ;

  printf("La temperatura promedio es : %.2f \n" , promedio ) ;

  return 0;
}
