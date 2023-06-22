#include <stdio.h>

int main(void) {
	int contador = 0;
	int num;
	
  printf ("Ingrese un número: ");
	scanf ("%d", &num);
	
	while (contador <= num){
		printf ("El contador vale: %d\n", contador);
		contador++;
	}
  

  
  #include <stdio.h>

int main(int argc, char *argv[]) {

	int contador=0;
	int n;
	
		printf("Ingrese el numero de veces|n");
			scanf("%d",&n);
			
    while(contador<=n){
		printf("contador vale: %d\n",contador);
		contador++;
	}
	
	return 0;
}

int main(void) {
	
	int contador = 0, num;
	
	printf("Ingrese un número: ");
	scanf("%d", &num);
	
	while (contador <= num) {
		
		printf("%d\n", contador);
		
		contador++;
	}
		
	return 0;
}
  
  #include <stdio.h>

int main(int argc, char *argv[]) {

	int contador=0;
	int numero;
	
	printf("ingrese un numero al que se cuente: ");
	scanf("%d", &numero);
	
	while(contador<numero){
		printf("%d\n", contador);
		contador++;
	
	}printf("%d\n", contador);

	return 0;
  
  // Contar para negativos
  //-------------------------------------------------------
  
  #include <stdio.h>

int main(int argc, char *argv[]) {

	int contador=0;
	int numero;
	
	printf("ingrese un numero al que se cuente: ");
	scanf("%d", &numero);
	
	if(numero>=0)
	{
	
		while(contador<numero){
			printf("%d\n", contador);
			contador++;
	
		}	printf("%d\n", contador);
	}else 
	   {
    
		while(contador>numero)
    	{
		printf("%d\n", contador);
		contador--;
			}	printf("%d\n", contador);
		
  	}
	return 0;
}

  
  #include <stdio.h>

int main(int argc, char *argv[]) {
	
	int contador =0;
	int num1;
	printf ("Ingrese un número: ");
	scanf ("%d", &num1);
  if(contador==0)
	while (contador < num1){
	printf("contador vale: %d\n", contador);	
	contador++;
	}
	while (contador >  num1){
		printf("contador vale: %d\n", contador);	
		contador--;	
	}
	
	
	return 0;

  
int main(void) {
	
	int contador = 0, num;
	
	printf("Ingrese un número: ");
	scanf("%d", &num);
	
	if(num >= 0) 
		while (contador <= num) {
		
		printf("%d\n", contador);
		
		contador++;
	}
	
	else 
		while (contador >= num) {
		
		printf("%d\n", contador);
		
		contador--;
		}
		
	return 0;
}
  #include <stdio.h>

int main(int argc, char *argv[]) {
int contador = 0;
int num;
	printf("Ingrese número: \n");
	scanf("%d", &num);
if (contador <= num) {
	while (contador <= num) {
	printf("Contador: %d\n", contador);
	contador++;
	}
}
else {
	while (contador >= num) {
	printf("Contador: %d\n", contador);
	contador--;
	}
}
	return 0;
  
  
int main(void) {
	int contador = 0;
	int num;
	
	printf("ingrese un numero:");
	scanf("%d",&num);
	
		while (contador > num){
		printf("contador vale: %d\n", contador);
		contador--;
		}
	
	 while (contador <= num){
		printf("contador vale: %d\n", contador);
		contador++;
	 }
return 0;
}
  
//--------------------------- ejercicio 5.31 --------------
  
  
  #include <stdio.h>

int main(void) {
	int flag = 0;
	int num;
	
	printf ("Ingrese un número: ");
	scanf ("%d", &num);
	
	while (flag == 0){
	if (0 <= num && 100 >= num){
		printf ("El número ingresado es válido");
		flag++;
	}else {
		printf ("Error el número ingresado no es válido, por favor ingrese uno válido: \n");
		scanf ("%d", &num);
	}
	}
	return 0;
}

//------------------------- ejercicio 5.32 ------------
  
  
  #include <stdio.h>

int main(void) {
	int flag = 0;
	int num;
	
	printf ("Ingrese un número par: ");
	scanf ("%d", &num);
	
	while (flag == 0 ){
		num = num % 2;
		if (num == 0){
			flag++;
		}else {
			printf ("Error el número ingresado no es válido, por favor ingrese uno válido: \n");
			scanf ("%d", &num);
		}
	}
	return 0;
}


  
