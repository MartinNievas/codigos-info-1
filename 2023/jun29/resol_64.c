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

int main ( void ) {
	int num_1, num_2, num_3, num_4;
	printf ( "Ingrese cuatro numeros diferentes : " ) ;
	scanf ("%d %d %d %d" , &num_1 ,&num_2 ,&num_3 ,&num_4 ) ;
	
	printf("El numero %d es el maximo",
      ret_max( ret_max( ret_max(num_1,num_2), num_3), num_4));
	
	
	return 0;
}
