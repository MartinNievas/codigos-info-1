#include <stdio.h>
int main(void){
	int num;
	do{
		printf("ingrese el numero positivo");
		scanf("%d",&num);
		if(num%2 !=0 || num <0){
			printf("el numero ingresado no es par positivo\n");
    }
	}while(num % 2!=0|| num<0);
	printf("el numero ingresado es: %d\n",num);
	
	return 0;
}
	
