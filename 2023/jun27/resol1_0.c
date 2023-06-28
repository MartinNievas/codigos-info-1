# include <stdio.h>
void intro ( void )
{
	printf (" Bienvenidos ! Comenzando en ") ;
}

int main ( void )
{
	int i;
	i=10;
	
	while(i>=1){
	  intro();
	  printf("%d...\n", i);
	  i--;
	}

	return 0;
}
