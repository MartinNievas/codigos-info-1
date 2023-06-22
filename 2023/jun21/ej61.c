#include<stdio.h>
void intro ( void )
{
	printf ( "Bienvenidos! Comenzando en " ) ;
}
int main ( void )
{
	int i;
	for(i =10;i >= 1; i--){
	  intro();
	  printf("%d...\n",i);
	}
	
	return 0;
}

