#include <stdio.h>

int main(int argc, char *argv[]) {
	int promedio;
	printf("Ingrese el promedio entre 1 y 10: ");
	scanf("%d", &promedio);
	
	switch(promedio){
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("Desaprobado");
		break;
	case 6:
	case 7:
		printf("Regular");
		break;
	case 8:
	case 9:
	case 10:
		printf("Promocionado");
		break;
	default:
		printf("El promedio debe estar entre 1 y 10");
	};
	return 0;
}
