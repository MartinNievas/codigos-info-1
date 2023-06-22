#include <stdio.h>

int main(void) {
	int flag = 0;
	int num;
	
	printf ("Ingrese un número: ");
	scanf ("%d", &num);
	
	while (flag == 0){
	  if (0 <= num && 100 >= num){
	  	printf ("El número ingresado es válido");
	  	flag++;
	  } else {
	  	printf ("Error el número ingresado no es válido, por favor ingrese uno válido: \n");
	  	scanf ("%d", &num);
	  }
	}
	return 0;
}
