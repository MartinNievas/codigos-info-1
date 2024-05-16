  #include <stdio.h>


int main(int argc, char *argv[]) {
	
	int nota1, nota2, nota3;
	int promiedo;
	
	printf("ingresa la nota 1, nota 2, nota 3: \n");	
	
		scanf("%d %d %d",&nota1, &nota2, &nota3);
	
	promiedo = (nota1 + nota2 + nota3) / 3 ;
	
	printf("El promedio es: %d ", promiedo);
	
	return 0;
}
