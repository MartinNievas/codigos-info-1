#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float tiempo;
	float vel;
	float esp;
	
	printf("Ingrese la velocidad: ");
	scanf("%f", &vel);
	printf("Ingrese el tiempo: ");
	scanf("%f", &tiempo);
	
	esp = vel * tiempo;
	
	printf("El espacio es: %.2f", esp);
	
	return 0;
}


