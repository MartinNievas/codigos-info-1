#include <stdio.h>


#include <stdio.h>

int main(void) {
	int num;
	
	printf ("Ingrese un número: ");
	scanf ("%d", &num);

  while(num < 0 || num > 100){
	  printf ("Número incorrecto\nIngrese un número: ");
	  scanf ("%d", &num);
  }

  return 0;

}
	
