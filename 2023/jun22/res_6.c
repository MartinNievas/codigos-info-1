#include <stdio.h>

//Alejandro Sosa, Agustin Coronel
int main(int argc, char *argv[]) {
		int num = 0;
		printf("ingresar un numero:");
			scanf("%d",&num);
	while(num > 100 || num<0){
	  printf("debe estar entre 0 y 100:");
		scanf("%d",&num);
	}
	printf("su numero es:%d",num);
	return 0;
}
