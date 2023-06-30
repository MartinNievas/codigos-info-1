# include <stdio.h>
int ret_maximo (int a, int b)
{
	int max;
	if (a > b)
		max = a;
	else
		max = b;
	
		return max ;
}

int main ( void )
{
	int num_1 , num_2 , num_3 , num_4 ;
	printf (" Ingrese cuatro numeros diferentes : ");
	scanf (" %d %d %d %d", &num_1 ,& num_2 ,& num_3 ,& num_4 );
	
	
	printf(" el numero es: %d",
      ret_maximo(
        ret_maximo( num_1,  num_2),
        ret_maximo ( num_3,  num_4)
        )
      );
	
	return 0;
}


