
#include <stdio.h>

void intro (void) {

	printf("Bienvenidos! Comenzaremos en ");
	
}
int main (void){
	
	int i;
	
	for ( i = 10 ; i > 0; i+=-1 ){
    // printf("Bienvenidos! Comenzaremos en %d\n", i);
    intro();
    printf("%d...\n",i);
	}
	
	return 0;
}
