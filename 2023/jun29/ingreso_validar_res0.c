#include <stdio.h>
// Declaración o prototipos
int ingreso_y_validacion(void);
int ingreso(void);

int main(void) {
	
	int dni = -100;
	
	dni = ingreso_y_validacion();
	printf("El DNI es: %d\n", dni);
	
	return 0;
}

// Definición
int ingreso(void){
	int dni;
	printf ("Ingrese su dni: \n");
	scanf("%d", &dni);
  return dni;
}

int ingreso_y_validacion(void){
  int dni2;
  dni2 = ingreso();
	while(dni2<0){
		printf ("Su dni es negativo, ingrese nuevamente.\n");
    dni2 = ingreso();
	}

  return dni2;
}

