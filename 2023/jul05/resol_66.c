
#include <stdio.h>
int potencia(int a, int b);
int main(int argc, char *argv[]) {
	
	int base, exp;
	
	printf("ingrese base y exponente: ");
	scanf("%d %d", &base, &exp);
	
	printf("El numero %d elevado a la %d es %d \n", base, exp, potencia(base, exp));
	return 0;
}
int potencia(int a, int b){
	if(b ==1)
		return a;
	else
		return(a * potencia(a, b-1));
}
