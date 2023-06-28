# include <stdio.h>
int potencia (int ba, int ex){
	int i, res;
	res=1;
	i=0;
	while(ex-1>i){
    res*=ba;
		i++;
	}
	return res;
	
}

int main ( void )
{
	int base , exp;
	printf (" Ingrese base y explonente : ") ; 
	scanf (" %d %d", &base, &exp ) ;
	printf ("El numero %d elevado a la %d es: %d\n", base , exp ,potencia (base , exp ) ) ;
	return 0;
}
