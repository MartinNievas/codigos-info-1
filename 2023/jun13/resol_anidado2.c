#include <stdio.h>

int main(int argc, char *argv[]) {
	int i, j, num1, num2, cont;
	
	printf("ingrese el numeor de filas ");
	scanf ("%d", &num2);
	printf("ingrese el numeor de columnas ");
	scanf ("%d", &num1);	
	
	cont=0;
	
	for (i=0; i<num2; i++){
		for (j=0; j<=i; j++){
			cont++;
			printf("%4d ", i*10+j);
		}
		printf("\n");
	}
	return 0;
}

