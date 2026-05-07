
// ------------------------- Ejercicio 3.7 ------------------------- 

//Santiago Velasco
#include <stdio.h>
int main(void) {
	int num;
	printf("Ingrese un numero entero: ");
	scanf("%d", &num);
	printf("Numero al cuadrado: %d", num*num);
	return 0;
}
#include <stdio.h>
int main(void) {
	int num;
	printf("Ingrese un numero entero: ");
	scanf("%d", &num);
	printf("Sucesor: %d\n", ++num);
	--num;
	printf("Antecesor: %d", --num);
	return 0;
}


#include <stdio.h>

int main(int argc, char *argv[]) {
	//Cuadrado de un numero
	int num;
	printf("Ingresa un numero entero: ");
	scanf("%d", &num);
	int square = num*num;
	printf("el cuadrado del numero es: %d", square);
	

	
	return 0;
} 

#include <stdio.h>

int main(int argc, char *argv[]) {
	//antecesor y su sucesor
	int num;
	printf("ingrese un numero: ");
	scanf ("%d", &num);
	int ant = --num;
	num++;
	int post = ++num;
	printf("Anterior: %d \n Posterior : %d \n", ant, post);
	return 0;
}

//Martín Molina
#include <stdio.h>

int main(void)
{
    //a
    
    int n;
    
    printf("Ingrese un número entero: ");
    scanf("%d", &n);
    
    printf("Su cuadrado es: %d\n", n * n);
    
    
    
    //c
    
    int entero;
    
    printf("Ingrese un número entero: ");
    scanf("%d", &entero);
    
    printf("El número ingresado es: %d\n", entero++);
    printf("Su sucesor es: %d\n", entero);
    printf("Su antecesor es: %d\n", (entero - 2));
    
    return 0;   
}
#include <stdio.h>

int main(int argc, char *argv[]) 

{
	int nu;
	printf("ingrese un numero entero: ");
	scanf("%d",&nu);
	printf("El sucesor del numero: %d\n",++nu);
	printf("El numero que ingreso es: %d\n", --nu); 
	printf("El antecedor del numero es: %d", --nu);
	
	
	return 0;
}


// ------------------------- Ejercicio 3.8 ------------------------- 
#include <stdio.h>

int main(int argc, char *argv[]) {
	int vel;
	int T;
	printf("Este programa calcula la distancia recorrida por un movil a V constante\n\n");
	printf("Ingrese el valor de V\n");
	scanf("%d",&vel);
	printf("Ingrese el valor de T\n");
	scanf("%d",&T);
	printf("El espacio recorrido es: %d\n",vel*T);

	return 0;
}
#include <stdio.h>

int main(int argc, char *argv[]) {
	//Algoritmo de velocidad 
	float vel;
	float tiempo;
	printf("Ingrese la velocidad del coche en M/S: ");
	scanf("%f", &vel);
	printf("\nIngrese el tiempo transcurrido en segundos: ");
	scanf ("%f", &tiempo);
	float Dist= tiempo * vel;
	printf("\nLa distancia recorrida en %.2f segundos fue: %.2f Metros",tiempo,Dist);
	return 0;
  }
#include <stdio.h>

int main()
{
	int ms;
	int t;

	printf("Ingrese la velocidad (ms): ");
	scanf("%d", &ms);

	printf("Ingrese el tiempo (s): ");
	scanf("%d", &t);

	printf("\nLa distancia recorrida es de: %d m", ms*t);

	return 0;
}

//Santiago Velasco se la come .!.
#include <stdio.h>
int main(void) {
	float v, t;
	printf("Ingrese un valor de velocidad en m/s: ");
	scanf("%f", &v);
	printf("Ingrese un valor de tiempo en segundos: ");
	scanf("%f", &t);
	printf("Distancia en metros: %.03f m", v*t);
	return 0;
}

//Martín Molina
#include <stdio.h>

int main(void)
{

    float tiemp, vel;
    
    printf("Ingrese la velocidad del móvil(m/s): ");
    scanf("%f", &vel);
    
    printf("Ingrese el tiempo(s): ");
    scanf("%f", &tiemp);
    
    printf("La distancia total recorrida es: %fm\n", vel * tiemp);
    
    
    
    return 0;   
}

#include <stdio.h>
//3.8
int main(int argc, char *argv[])
{
	float m_s;
	printf("ingrese la velocidad en [m/s]: ");
	scanf("%f",&m_s);
	
	printf("ingrese el tiempo que se tardo en segundos: ");
	float s;
	scanf("%f",&s);
	
	float m;
	printf("distancia recorrida en metros: %.2f", m_s*s);
	
	return 0;
}



//_________________________________________________________________
made in defa
#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int num = 0;
	int nom = 1;
	
	printf("Ingrese velocidad (m/s): ");
	scanf("%d", &num);
	printf("\nIngrese el tiempo (s): ");
	scanf("%d", &nom);
	printf("la distancia recorrida es: %d(m)", num*nom);
	
	return 0;
}
//Martin Lucero
#include <stdio.h>

int main(void)
{
	float vel;
	int tiemp;
	
	printf("Ingresar Velocidad del vehiculo (m/s): \n");
	scanf("%f", &vel);
	
	printf("Ingresar Tiempo del recorrido (s): \n");
	scanf("%d", &tiemp);
	
	printf("Su disstancia es de: %.2f M", vel*(float)tiemp);
	
	return 0;
}


float m, v, t;
	
printf("ingrese la velocidad (m/s): ");
scanf("%f", &v);
printf("\ningrese el tiempo (seg): ");
scanf("%f", &t);
m = v*t;
printf("\nla distancia recorrida en Metros: %.2f",m)


// ------------------------- Ejercicio 3.9------------------------- 

//Santiago Velasco
#include <stdio.h>
int main(void) {
	float n1, n2, n3, p;
	printf("Ingrese nota del primer parcial: ");
	scanf("%f", &n1);
	printf("Ingrese nota del segundo parcial: ");
	scanf("%f", &n2);
	printf("Ingrese nota del tercer parcial: ");
	scanf("%f", &n3);
	p=n1+n2+n3;
	printf("Nota promedio: %.02f", p/3);
	return 0;
}

//Ejercicio 3.9
int main()
{
    float nota1;
    float nota2;
    float nota3;
    
    
    printf("Ingrese la nota 1: ");
    scanf("%f", &nota1);
    printf("Ingrese la nota 2: ");
    scanf("%f", &nota2);
    printf("Ingrese la nota 3: ");
    scanf("%f", &nota3);
    
    printf("\nEl promedio es: %f", (nota1+nota2+nota3)/3);
    return 0;
}

//Martin Lucero
#include <stdio.h>

int main(void)
{
	int nota1,nota2,nota3;
	
	printf("Ingrese la Nota del Primer parcial: \n");
	scanf("%d",&nota1);
	printf("Ingrese la Nota del Segundo parcial: \n");
	scanf("%d",&nota2);
	printf("Ingrese la Nota del Tercer Parcial: \n");
	scanf("%d",&nota3);
	
	float prom = (float)(nota1+nota2+nota3)/3;
	
	printf("Supromedio Final es %.2f: ",prom);
	
	
	return 0;
}

//Martín Molina
#include <stdio.h>

int main(void)
{

int nota1, nota2, nota3;
    
    printf("Ingrese la primer nota: ");
    scanf("%d", &nota1);
    printf("\nIngrese la segunda nota: ");
    scanf("%d", &nota2);
    printf("\nIngrese la tercer nota: ");
    scanf("%d", &nota3);
    
    printf("\nEl promedio del estudiante es: %d\n", (nota1 + nota2 + nota3) / 3
    
    
    
   return 0;   
}
        
	// promedio
#include <stdio.h>

int main(int argc, char *argv[]) {
	float Pnota;
	float Snota;
	float Tnota;
	printf("ingrese la primer nota: ");
	scanf("%f",&Pnota);
	printf("\nIngrese la segunda nota: ");
	scanf("%f", &Snota);
	printf("\nIngrese la tercer nota: ");
	scanf("%f", &Tnota);
	float Promedio = ((Pnota + Snota + Tnota)/3);
	printf("\n El promedio total es: %.2f", Promedio);
	
	return 0;

} 
           
           
           
float notita1, anana, coco_colado_picado_y_magitado_pato;
printf("ingrese las tres notas del alumno: ");
scanf("%f %f %f", &notita1,&anana,&coco_colado_picado_y_magitado_pato);
printf("el promedio e las notas: %f, %f, %f es: %0.2f", notita1, anana, coco_colado_picado_y_magitado_pato, (notita1+anana+coco_colado_picado_y_magitado_pato)/3);

//________________________________________________________________________________
#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int num = 0;
	int nom = 1;
	int nam = 2;
	
	printf("Ingrese 1ra nota: ");
	scanf("%d", &num);
	printf("\nIngrese 2da nota: ");
	scanf("%d", &nom);
	printf("\nIngrese 3ra nota: ");
	scanf("%d", &nam);
	printf("\nsu promedio es: %d", (num+nom+nam)/3);
	return 0;
}
        
#include <stdio.h>

int main(int argc, char *argv[]) {
	int p1, p2, p3;
	
	printf("Ingresar nota del primer parcial: \n");
	scanf("%d", &p1);

	printf("Ingresar nota del segundo parcial: \n");
	scanf("%d", &p2);
	
	printf("Ingresar nota del tercer parcial: \n");
	scanf("%d", &p3);

	float promedio=0;	
	promedio= (p1+p2+p3)/3;
	
	printf("El promedio fue: %f", promedio);
	
	return 0;
}

           #include <stdio.h>

int main(int argc, char *argv[]) {

	
	
		int nota1;
		int nota2;
		int nota3;
		int suma;
		printf("Este programa calcula el promedio de 3 notas de un estudiante\n\n");
		printf("Ingrese la nota 1\n");
		scanf("%d",&nota1);
		printf("Ingrese la nota 2\n");
		scanf("%d",&nota2);
		printf("Ingrese la nota 3\n");
		scanf("%d",&nota3);
		suma=nota1+nota2+nota3;
		printf("El promedio es: %d\n",suma/3);
		
		return 0;
           
// ------------------------- Ejercicio 3.10 ------------------------- 

//Martín Molina
#include <stdio.h>

int main(void)
{
    int num1, num2;
    
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    
    printf("\nIngrese el segundo número: ");
    scanf("%d", &num2);
    
    if (num1 > num2){
        printf("\nEl primer número es mayor");
        
        
    }else if (num2 > num1){
        printf("\nEl segundo número es mayor");
        
    }else
        printf("\nLos números ingresados son iguales");
        
    
    
    return 0;   
}

int ratobich, kulovich;
	

	printf("ingrese dos numero separados por un espacio: ");
	scanf("%d %d", &ratobich, &kulovich);
	
	if(ratobich > kulovich)
	{printf("%d es mas grande que %d", ratobich, kulovich);}
	else if(ratobich == kulovich)
	{printf("son igualovich");}
	else{printf("%d es mas grande que %d", kulovich, ratobich);};
	
	if(ratobich > kulovich){printf("%d es mas grande que %d", ratobich, kulovich);};
	
	if(ratobich < kulovich){printf("%d es mas grande que %d", kulovich, ratobich);};
	
	if(ratobich == kulovich){printf("igualovich");};

#include <stdio.h>
int main()
{
    int n1;
    int n2;
    
    printf("Ingrese el primer numero: ");
    scanf("%d", &n1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &n2);
    
    if (n1 > n2) {
        printf("\n%d es mayor", n1);
    }
    
    if (n1 < n2) {
        printf("\n%d es mayor", n2);
    }
    
    if (n1 == n2){
        printf("\nLos numeros son iguales.");
    }
    
    return 0;
}

​

//Martin Lucero
#include <stdio.h>
int main(void) {
	int num;
	printf("Ingrese un numero de 3 cifras: ");
	scanf("%d", &num);
	int mil=num/100;
	int dec=(num%100)/10;
	int uni=(num%100)%10;
	printf("Suma de las cifras: %d", mil+dec+uni);
	return 0;
}
  #include <stdio.h>

int main(void)
{
	int num1, num2;
	
	printf("Ingrese el Primer numero: ");
	scanf("%d",&num1);
	printf("Ingrese el Segundo numero: ");
	scanf("%d",&num2);
	
	if(num1 > num2){
		printf("El primer Numero es mas grande");
	}
	if(num2 > num1){
		printf("El Segundo Numero es mas grande");
	}
	if(num1 == num2){
		printf("Los dos Numeros son iguales");
	}
	
	return 0;
}
 #include <stdio.h>
//3.10
int main(int argc, char *argv[]) {
	
	int num1, num2;
	printf("ingrese un numero: ");
	scanf("%d",&num1);
	printf("ingrese otro numero: ");
	scanf("%d", &num2);
	
	if ( num1 > num2)
	{printf("El mayor es el primero\n");}
	if (num1 < num2)
	{printf("El mayor es el segundo\n");}
	if (num1 == num2)
	{printf("Son iguales");}
	
	
	
	return 0;
}
//_____________________________________________________________
     
  
#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int num;
	int nom;
	
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	
	printf("\nIngrese otro numero: ");
	scanf("%d", &nom);
	
	if (num<nom){
	printf("\nEl mayor es: %d",nom);
	}
	if (num>nom){
		printf("\nEl mayor es: %d",num);
	}
	if (num==nom){
		printf("\nson iguales" );
	}
	
	return 0;
}

  //Gallo Nicolas 3.10
  #include <stdio.h>

int main(int argc, char *argv[]) {
	
	int a,b;
	int max;
	printf("Ingresar el primer entero: ");
	scanf("%d", &a);
	
	printf("Ingrese el segundo entero: ");
	scanf("%d", &b);
	
	if(a > b){
		max = a;
		printf("El mayor es: %d\n", max);
	}if(a < b){
			max = b;
			printf("El mayor es: %d\n", max);
	}
	
	if(a == b){
		printf("Los enteros son iguales \n");
	}
	return 0;
}
  
  #include <stdio.h>

int main(int argc, char *argv[]) {
	
	int num1, num2;
	
	printf("Ingrese valor 1: ");
	scanf("%d", &num1);
	
	printf("Ingrese valor 2: ");
	scanf("%d", &num2);
	
	if (num1 > num2)
	{
		printf("El valor 1 es el mayor");
	}
	if (num1 < num2)
	{
		printf("El valor 2 es el mayor");
	}
	if (num1 == num2)
	{
		printf("Los valores son iguales");
	}
	
	return 0;
}
  
  #include <stdio.h>

int main(int argc, char *argv[]) {
	int num1;
	int num2;
	printf("Este programa determina que numero es mayor o si soniguales\n");
	printf("Ingrese el primer nùmero\n");
	scanf("%d",&num1);
	printf("Ingrese el segundo nùmero\n");
	scanf("%d",&num2);
	if(num1>num2){
		printf("El primer nùmero es mayor que el segundo\n");
	};
	if(num1<num2){
		printf("El segundo nùmero es mayor que el primero\n");
	};
	if(num1==num2){
		printf("Ambos nùmeros son iguales\n");
	};
	return 0;
}
  
//3.11
  


//Santiago Velasco
#include <stdio.h>
int main(void) {
	int num;
	printf("Ingrese un numero de 3 cifras: ");
	scanf("%d", &num);
	int mil=num/100;
	int dec=(num%100)/10;
	int uni=(num%100)%10;
	printf("Suma de las cifras: %d", mil+dec+uni);
	return 0;
}
  
  #include <stdio.h>

int main(int argc, char *argv[]) {
	int num1, suma=0;
	
	printf("Ingresar un numero de 3 cifras: ");
	scanf("%d", &num1);
	
	suma = (num1/100)%10 + (num1/10)%10 + num1%10;
	
	printf("La suma de sus cifras es: %d", suma);
	
	return 0;
}


  
  
// ------------------------- Ejercicio 3.10-------------------------
  
//Santiago Velasco
#include <stdio.h>
int main(void) {
	float n1, n2;
	printf("Ingrese primer numero: ");
	scanf("%f", &n1);
	printf("Ingrese segundo numero: ");
	scanf("%f", &n2);
	if (n1<n2){
		printf("El segundo numero es mayor: %.02f>%.02f", n2, n1);
	}
	if (n1>n2){
		printf("El primer numero es mayor: %.02f>%.02f", n1, n2);
	}
	if (n1==n2){
		printf("Los numeros son iguales: %.02f=%.02f", n1, n2);
	}
	return 0;
}
  
// ------------------------- Ejercicio 3.11------------------------- 
  
  
  
  
// ------------------------- Ejercicio 3.17-------------------------
  
  
  
  
// ------------------------- Ejercicio 3.20------------------------- 

#include <stdio.h>

int main()
{
    float pi = 3.14159;
    float r;
    
    printf("Ingrese el radio del circulo, para obtener su area y perimetro: ");
    scanf("%f", &r);

    printf("El area del circulo es: %f", pi * r * r);
    printf("\nEl perimetro del circulo es: %f", 2 * pi * r);
    return 0;
}


// -----------------------------------------------------------------



