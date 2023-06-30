#include <stdio.h>

void intro (void){
	printf ("Bienvenidos! Comenzando en ");
}


int main(void) {
	int num = 10;
	for (int i=1; i <=10; i++){
	  intro();
	  printf ("%d...\n", num--);
	}
	
	return 0;
}
