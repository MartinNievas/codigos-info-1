# include <stdio.h>
int ret_max ( int a , int b )
{
	int max ;
	if ( a > b )
		max = a ;
	else
		max = b ;
	return max ;
}
int main ( void )
{
	int num_1 ;
	int num_2 ;

	printf("ingrese dos numeros diferentes: ");
	scanf("%d %d",&num_1,&num_2);
	printf("El numero %d es el mayor",ret_max(num_1,num_2));
	
	return 0;
}
