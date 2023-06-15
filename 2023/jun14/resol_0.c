#include <stdio.h>


int main(void) {
	int i,j;
	int num;
	
	do{
	  printf("ingrese la catidad de num: \n ");
	  scanf("%d", &num);
	}while(num < 0 );
	
	for (i= 0; i < num; i++){
	  for (j = 0; j <= i ; j++){
		  printf("    ");
	  }
	  for (j = i; j < num ; j++){
		  printf("%4d", i*10+j);
	  }
	  printf("\n");
	}

	return 0;
}

