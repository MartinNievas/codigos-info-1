# include <stdio.h>

float ingreso_numero ( void )
{
	float num ;
	printf("ingrese un numero: ");
	scanf("%f",&num);
	return num;
}

int main ( void )
{
	printf ( " Usted ingreso el numero %f\n " , ingreso_numero () ) ;
	return 0;
}


