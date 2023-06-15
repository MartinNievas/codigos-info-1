#include <stdio.h>

int main(int argc, char *argv[]) {
int operacion;
int valor1;
int valor2;
printf("1.Suma\n 2.Resta\n 3.division\n 4.multiplicacion");
scanf("%d", &operacion);

switch(operacion){
case 1:
	printf("ingrese valor 1");
	scanf("%d", &valor1);
	printf("ingrese valor 2");
	scanf("%d", &valor2);
	printf("su resultado es %d", valor1+valor2);
break;
case 2:
	printf("ingrese valor 1");
	scanf("%d", &valor1);
	printf("ingrese valor 2");
	scanf("%d", &valor2);
	printf("su resultado es %d", valor1-valor2);
	break;
case 3:
	printf("ingrese valor 1:");
	scanf("%d", &valor1);
	printf("ingrese valor 2:");
	scanf("%d", &valor2);
	printf("su resultado es %f", valor1/(float)valor2);
	break;	
case 4:
	printf("ingrese valor 1");
	scanf("%d", &valor1);
	printf("ingrese valor 2");
	scanf("%d", &valor2);
	printf("su resultado es %d", valor1*valor2);
	break;}
	return 0;
}
