#include <stdio.h>

	int main(int argc, char *argv[]) {

	int numero; 
	
	printf ("Ingrese un Numero par positivo: ");
	scanf("%d",&numero);
	while( numero < 0 || numero%2 != 0){
		printf ("Ingrese un Numero valido: ");
		scanf("%d",&numero);
	}
	printf ("El numero es correcto: %d", numero);
	return 0;
	
	
  }
