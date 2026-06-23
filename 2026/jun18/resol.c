// Ejercicios 18/06

1.c	zz.

2. Escribir un algoritmo que calcule el factorial de un número entero
positivo n ingresado por teclado (n! = 1 · 2 · 3 . . . n).

3. Escribir un algoritmo que solicite ingresar la cantidad de temperaturas num=10;
registradas en un día. Luego, permitir el ingreso de dichas tempera-
turas y calcular la temperatura promedio, la máxima y la mínima
registrada.

4. Escribir un algoritmo que imprima los primeros N términos de la sucesión de Fibonacci, donde N es un número entero positivo ingresado por
el usuario. La sucesión comienza con 0 y 1, y cada término siguiente
es la suma de los dos anteriores.

5. Escribir un algoritmo que solicite un número entero positivo y de-
termine si es un número primo (divisible únicamente por 1 y por sí
    mismo).

6. Escribir un algoritmo que permita ingresar las notas de 5 alumnos. Pa-
ra cada alumno se deben ingresar 3 notas parciales. Calcular y mostrar
el promedio de cada alumno y el promedio general del curso.

7. Escribir un algoritmo que calcule e imprima la suma de los números
pares y el producto de los números impares comprendidos entre dos
valores enteros A y B ingresados por el usuario (donde A < B).

8. Escribir un algoritmo que dibuje un triángulo rectángulo de altura H
(ingresada por teclado) utilizando asteriscos. Ejemplo para H = 4:
*
**
***
****

////// enzo carena
ejercicio 1#include <stdio.h>
int main(){
  int i;
  int multiplicando=3;

  for (i=2;i<=12;i++){
    printf("%dx%d=%d\n",multiplicando,i,multiplicando*i);
  }
  return 1;
}

//desafio 1//
#include <stdio.h>
int main(){
  int N;
  int longitud = 1;
  int maximo;

  printf("ingrese un numero entero: ");
  scanf("%d",&N);

  maximo = N;

  printf("secuencia: %d ", N);

  while(N !=1){
    if(N % 2 == 0){
      N = N/ 2;
    } else{
      N = N * 3+1;
    }
    printf("%d", N);
    longitud++;

    if(N>maximo){
      maximo=N;
    }
  }

  printf("\n\nCantidad de terminos:%d", longitud);
  printf("\n\nNumero Maximo:%d\n", maximo);

  return 0;
}
////////////////////////////////////////////////////// ejercicio 1 lospibardos
#include <stdio.h>
int main(int argc, char *argv[]) {
  int num;
  printf("escriba un numero: ");
  scanf("%d",&num);		
  for ( int i = 1 ; i <= 12 ; i++){
    printf ("%d x %d = %d\n", num,i,num*i); }		
  return 0; }
  //////////////////////////////////////////////////////
  //ejercicio 1 Leandro Romero
#include<stdio.h>

  int main(){
    int num, producto;	
    do{
      printf("Ingrese un numero del 1 al 10: ");
      scanf("%d", &num);
    }while(num>10 || num<0);
    for(int i=1;i<13;i++){
      producto = num*i;
      printf("%d * %d = %d\n", num, i, producto);
    }

    return 0;
  }
//////////////////////////////////////////////////////
//NOMBRE DE LOS AUTORES: CATALINA Y IGNACIO

#include <stdio.h>

int main(void) {
  int i, num;
  printf("Ingrese un numero entero del 1 al 10: ");
  scanf("%d", &num);
  for(i=1; i<=12 ; i++){
    printf("%d * %d = %d \n",num, i, i*num);
  }
  return 0;
}
///////////////////////////////////////////////////////
//Autores : Catalina y Ignacio
#include <stdio.h>

int main(void) {
  int i,num;
  int n = 1;
  printf("Ingrese un numero entero positivo");
  scanf("%d",&num);
  for(i=1; i<=num;i++){
    n= n*i;
  }
  printf("n!: %d\n",n);
  return 0;
}
/////////////////////////////////////////////////////////
#include <stdio.h> //Tiziano Meza fan de tus ojos bb

int main(int argc, char *argv[]) {
  int numero;
  printf("ingrsese un numero del 1 al 10:\n");
  scanf("%d" , &numero);


  for (int i = 1; i <= 12; i++){
    printf("%d x %d = %d\n" , numero , i , numero * i );
  }
  return 0;

}
///////////////////////////////////////////////////////
#include <stdio.h>

int main(void) {

  int i;
  int f=1;
  printf("Ingrese un numero del 1 al 10:");
  scanf("%d", &i);
  for(int d=i;d<=i*12; d=d+i){
    printf("%dx%d=%d\n", i ,f++,  d);
  }
  return 0;
}
////////////////////////////////////////////////////////////
/*Còdigo de los PAPUS*/

#include <stdio.h>

int main(int argc, char *argv[]) {
  int num;
  int result;
  printf("Ingrese un numero entero del 1 al 10: \n");
  scanf("%d", &num);
  for(int mul=1; mul <13;mul++){
    result = num * mul;
    printf("tu numero multiplicado por %d es: %d \n", mul, result);
  }
  return 0;
}

/////////////////////////////////////////////////////////////
//Ejrcicio 2 Leandro Romero
#include<stdio.h>

int main(){
  int num;
  int factorial=1;
  do{
    printf("Ingrese un numero entero positivo: ");
    scanf("%d",&num);
  }while(num<0);

  for(int i=1; i<=num;i++){
    factorial=factorial*i;
  }
  printf("%d! = %d", num, factorial);

  return 0;
}

/////////////////////////////////////////////////////////////
#include <stdio.h> // T.T

int main(int argc, char *argv[]) {
  int numero;
  unsigned int factorial=1;
  printf("ingrsese un numero positivo:\n");
  scanf("%d" , &numero);
  if (numero>0 && numero<34){
    for (int i = 1; i <= numero; i++){
      factorial *= i;
    }
    printf("El (!%d)es: %u" , numero , factorial);
  }
  else{
    printf("numero no valido");	
  }
  return 0;
}
/////////////////////////////////////////////////////////////


#include <stdio.h>

int main(int argc, char *argv[]) {
  float n=0, n1=1,n3;
  unsigned n4;
  printf("ingrese la cantidad de cifras de fibonacci que desea\n");
  scanf("%u", &n4);
  for(int i=0;i<n4;i++){
    printf("%.0f\n", n);

    n3=n+n1;
    n=n1;
    n1=n3;
  }
  return 0;
}
//////////////////////////////////////////////////////////////
Lorenzo
#include <stdio.h>

int main(void) {
  int num;
  int t1=0, t2=1;
  int siguiente;	
  printf("Cuantos numeros de fibonacci queres ver?: ");
  scanf("%d", &num);
  for(int i = 0; i <= num; i++) {
    printf("Termino %d: %d\n", i, t2);
    siguiente = t1 + t2;
    t1 = t2;
    t2 = siguiente;
  }
  return 0;
}

//////////////////////////////////////////////////////////////
int main(int argc, char *argv[]) {
  int num; 
  int factorial = 1;
  printf("escriba un numero: ");
  scanf("%d", &num);	

  for  ( int i = 1 ; i <= num ; i++ ){	
    factorial *=  i;
  }

  printf ("%d\n", factorial);




  return 0;
}
//////////////////////////////////////////////////////////////
R.I.P. Sherk
//////////////////////////////////////////////////////////////
#include <stdio.h> //T.T
int main(int argc, char *argv[]) {
  float temp, promedio, max, min;
  printf("ingrsese una temperatura:\n");
  scanf("%f" , &temp);
  promedio = max = min = temp;
  for (int i = 1; i <=9; i++){
    printf("ingrsese otra temperatura:\n");
    scanf("%f", &temp);
    promedio+=temp;
    if (temp>max){
      max=temp;
    }
    if (temp<min){
      min=temp;
    }
  }
  promedio= promedio/ 10;
  printf("\nLa temp. promedio es: %f" , promedio);
  printf("\nLa temp. maxima registrada fue: %f" , max);
  printf("\nLa temp. minima registrada fue: %f" , min);
  return 0;
}
//////////////////////////////////////////////////////////////
//SSe hizo lo que se pudo
#include <stdio.h>

int main(void) {
  int i,temp;
  int menor, mayor;
  for(i=1; i<=10000;i++){
    printf("Ingrese la temperatura del dia, sino quiere parar de ingresar, escriba 100: ");
    scanf("%d", &temp);
    if (i == 1){
      menor=temp;
    }
    if(temp==100){
      break;
    }
    if(temp<menor){
      menor=temp;
    }
    else if(temp>menor){
      mayor=temp;
    }
  }
  printf("La temperatura menor es : %d\n",menor);
  printf("La temperatura mayor es : %d\n",mayor); 
  return 0;
}
//////////////////////////////////////////////////////////////////
#include <stdio.h>

int main(int argc, char *argv[]) {
  int num;
  int cont = 0;
  int mod;
  printf("Ingrese un numero entero: \n");
  scanf("%d", &num);
  for(int i = 1; i <= num; i++){
    mod = num % i;
    cont += (mod == 0);
  }
  if(cont == 2){
    printf("su numero es primo");
  }
  else
    printf("su numero no es primo");
  if (num == 13);
  return 0;
}
////////////////////////////////////////////////////////////////

#include <stdio.h>

int main(int argc, char *argv[]) {
  int n;
  printf("ingrese la altura del triangulo:\n");
  scanf("%d", &n);
  for(int i = 0; i<n; i++){
    for(int	 b = 0;b<i;b++){
      printf("*");
    }
    printf("*\n");
  }
  return 0;
}

//////////////////////////////////////////////////////////////////
// autor CATALINA Y IGNACIO
#include <stdio.h>

int main(void) {
  int num;
  int i;
  int n = 0;
  printf("Ingresa un numero entero positivo:");
  scanf("%d",&num);
  for(i=1;i<=num;i++){
    if(num % i == 0)
      n++;
  }
  if(n == 2){
    printf("Su numero es primo");
  }
  else{
    printf("Su numero no es primo");
  }
}
////////////////////////////////////////////////////////////////
//Ejercicio 3 Leandro Romero
#include<stdio.h>

int main(){
  int muestras;
  float temp, suma=0, promedio;
  do{
    printf("Ingrese la cantidad de muestras de temperatra: ");
    scanf("%d", &muestras);
  }while(muestras<1);
  printf("ingrese las muestras de temperatura:\n");
  for(int i=1; i<=muestras; i++ ){
    printf("Temp%d:", i);
    scanf("%f", &temp);
    suma = suma + temp;
  }
  promedio = suma/muestras;
  printf("La temperatura promedio es: %.2f",promedio);

  return 0;
}
////////////////////////////////////////////////////////////////
#include <stdio.h> //T.T.B
int main(int argc, char *argv[]) {
  int N;
  unsigned int A=0;
  unsigned int B=1;
  unsigned int C=0;
  scanf("%d", &N);
  for (int i = 1; i <=N; i++){
    C=A+B;
    printf("\n %d + %d = %d",A, B, C);
    A=B;
    B=C;
  }
  return 0;
}
////////////////////////////////////////////////////////////////


