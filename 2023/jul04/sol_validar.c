
#include <stdio.h>

int ingresar_y_validar(int inferior, int superior) {
	char a;
	int num;
	a=a;
	printf("ingrese un numero: ");
	scanf("%d", &num);
	if(num<10 || num>100){
		return a;
	}else{
		return num;
	}
		
return 0;
}

int main(void){
int num=ingresar_y_validar(10, 100);
char a;
a=a;
if(num==a){
	printf("numero no valido \n");
	num=ingresar_y_validar(10, 100);
}

printf("numero %d", num);


return 0;
	
}
	
