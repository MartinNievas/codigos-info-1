#include <stdio.h>

int fibonacci(int a);

int main() {
	int num;
	
	printf("ingrese un numero: ");
	scanf("%d", &num);
	
	printf("%d \n", fibonacci(num));
	
	return 0;
}

int fibonacci(int a)
{
	int b;
	if(a==1)
		return 1;
	else if(a==2)
		return 2;
	else
	  b = fibonacci(a-1) + fibonacci(a-2);
	
	return b;
}
