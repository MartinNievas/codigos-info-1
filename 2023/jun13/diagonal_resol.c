
#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int i, j, columnas, filas, cont;
	
	printf("Ingresar cantidad de Filas: ");
	scanf("%d", &filas);
	printf("Ingresar cantidad de Columnas: ");
	scanf("%d", &columnas);
	
	cont= 0;
	for(i = 0; i < filas; i++){
		for ( j = 0; j <= i; j++){
      cont++;
			printf("%4d", cont);
		}
		printf("\n");
	}
	return 0;
}



