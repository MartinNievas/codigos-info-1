
1. Escribir un algoritmo que solicite un número entero del 1 al 10 y
muestre su tabla de multiplicar del 1 al 12.

2. Escribir un algoritmo que calcule el factorial de un número entero
positivo n ingresado por teclado (n! = 1 · 2 · 3 . . . n).
3. Escribir un algoritmo que solicite ingresar la cantidad de temperaturas
registradas en un día. Luego, permitir el ingreso de dichas tempera-
turas y calcular la temperatura promedio, la máxima y la mínima
registrada.
4. Escribir un algoritmo que imprima los primeros N términos de la suce-
sión de Fibonacci, donde N es un número entero positivo ingresado por
el usuario. La sucesión comienza con 0 y 1, y cada término siguiente
es la suma de los dos anteriores.
5. Escribir un algoritmo que solicite un número entero positivo y de-
termine si es un número primo (divisible únicamente por 1 y por sí
    mismo).

__________________________________________________________________________
ernesto armando fernandez roque	

#include <stdio.h>
//1
int main()
{
  int b = 0;
  int c = 0;
  printf("ingrese un numero");
  scanf("%d",&b);
  for(int a = 0; a <13; a++)
  {
    c = a * b;
    printf("%d * %d = %d\n",b,a,c);
  }

  return 0;
}

#include <stdio.h>
//2 Escribir un algoritmo que calcule el factorial de un número entero positivo n ingresado por teclado (n! = 1 · 2 · 3 . . . n).
int main()
{
  int a = 0, b= 1, c=0;

  printf("ingrese un numero: ");
  scanf("%d",&a);

  for(int i = 1;i < a;i++)
  {

    c=i*b;
    b+=c;

  }
  printf("%d es",b);
  return 0;
}


#include <stdio.h>
/* 3. Escribir un algoritmo que solicite ingresar la cantidad de temperaturas
   registradas en un día. Luego, permitir el ingreso de dichas tempera-
   turas y calcular la temperatura promedio, la máxima y la mínima
   registrada.*/
int main()
{
  int cant = 0, temp= 1, max=0, min=0, conta = 0;
  float promedio =0;

  printf("cuantas temp registramos?: ");
  scanf("%d",&cant);

  for(int i = 0;i < cant;i++)
  {
    printf("ingrese la temperatura: ");
    scanf("%d",&temp);
    if(i == 0){
      max=temp;
      min=temp;
    }
    if(temp > max){
      max = temp;
    }else if(temp < min){
      min = temp;
    }
    conta = conta + temp;
  }
  promedio = (float)conta / cant;
  printf("la temperatura maxima es: %d",max);
  printf("la temperatura minima es: %d",min);
  printf("la temperatura promedio es: %.2f",promedio);
  return 0;
}





#include <stdio.h>
/* 4. Escribir un algoritmo que imprima los primeros N términos de la suce-
   sión de Fibonacci, donde N es un número entero positivo ingresado por
   el usuario. La sucesión comienza con 0 y 1, y cada término siguiente
   es la suma de los dos anteriores.*/
int main()
{
  int a = 0, b= 1, max=0, tot = 0;
  printf("ingrese un numero: ");
  scanf("%d",&max);
  for(int i = 0;i < max;i++)
  {
    tot = a + b;
    a=b;
    b=tot;
    printf("%d\n",tot);
  }
  return 0;
}
___________________________________________________________________________________________

//Maximo Toranzo
//1

#include <stdio.h>

int main()
{
  int n;
  do{
    printf("Ingrese un numero entero entre 1 al 10: ");
    scanf("%d",&n);
  }while(n < 1 || n > 10);

  for(int i = 0; i < 12; i++)
  {
    printf("%d x %d = %d\n", n, i+1, n*(i+1));
  }

  return 0;
}
//Maximo Toranzo
//2

#include <stdio.h>

int main()
{
  int r = 1;
  int n;

  do{
    printf("Ingrese un numero entero positivo: ");
    scanf("%d",&n);
  }while(n < 1);

  for(int i = 0; i < n; i++)
  {
    r = (n-i)*r;
  }
  printf("\n%d! = %d", n, r);

  return 0;
}




___________________________________________________________________________________________

#include <stdio.h>

//Quinteros Brian

// 1. Escribir un algoritmo que solicite un número entero del 1 al 10 y
// su tabla de multiplicar del 1 al 12.
int main()
{
  int num=0;
  printf("Ingrese un número entero del 1 al 10: \n");
  scanf("%d", &num);
  for(int i = 1 ; i <= 12 ; i++){
    printf("%d * %d = %d \n", i, num, i*num);
  }

  return 0;
}


#include <stdio.h>

//Quinteros Brian

// 2. Escribir un algoritmo que calcule el factorial de un número entero
//positivo n ingresado por teclado (n! = 1 · 2 · 3 . . . n).l 12.

int main()
{
  int n , resultado = 1;
  printf("Ingrese un número positivo entero: \n");
  scanf("%d", &n);
  for(int i = 1 ; i <= n ; i++){
    resultado = resultado * i;
  }
  printf("El factorial del numero ingresado es de: %d", resultado);
  return 0;
}


#include <stdio.h>

//Quinteros Brian

//3. Escribir un algoritmo que solicite ingresar la cantidad de temperaturas
//registradas en un día. Luego, permitir el ingreso de dichas tempera-
//turas y calcular la temperatura promedio, la máxima y la mínima
//registrada.

int main()
{
  int n, iniciar = 1;
  float temp, totaltemp= 0, promedio, max = 0, min = 0;
  printf("Ingrese la cantidad de temperaturas registradas en el día: \n");
  scanf("%d", &n);
  for(int i = 1 ; i <= n ; i++){
    printf("Ingrese temperatura: \n");
    scanf("%f", &temp);
    totaltemp = totaltemp + temp;

    if (iniciar == 1)
    {
      max = temp;
      min = temp;

      iniciar = 0;
    }

    if (max<temp)
      max = temp;

    if (min>temp)
      min = temp;
  }

  promedio = totaltemp / n;
  printf("El Promedio de la temperatura es de: %.2f \n", promedio);
  printf("La temperatura minima es: %.2f\n", min);
  printf("La temperatura maxima es: %.2f\n", max);
  return 0;
}


___________________________________________________________________________________________


#include <stdio.h>
//1
int main(void)
{
  int a;
  int b;
  int resultado;

  printf("ingresa un numero:\n");
  scanf("%d", &a);
  for(int b=0 ; b<12 ; b++ )   {
    resultado= a*b;
    printf("%d * %d =%d\n", a,b,resultado);
  }
  return 0;
}  
___________________________________________________________________________________________

#include <stdio.h>
// ***** 1 ******
int main(int argc, char *argv[]) {
  int num,num2;

  printf("Ingrese el numero del 1 al 10 --->");
  scanf ("%d",&num);
  printf ("Tabla\n");
  for (int num_t = 1;num_t < 12;num_t++){
    num2 = num_t * num;
    printf ("\n%d * %d = %d", num_t, num,num2);
  }
  return 0;
}
-------------------------------------------------------------------
FERNANDO CARRIZO
//Escribir un algoritmo que solicite un número entero del 1 al 10 y
//muestre su tabla de multiplicar del 1 al 12.
#include <stdio.h>

int main()
{
  int num,tabla;

  printf("ingrese un numero entero del 1 al 10\n");
  scanf("%d",&num);

  for(tabla=1;tabla<13;tabla++){

    printf("%d x %d = %d\n",tabla,num,num*tabla);
  }

  return 0;
}
-------------------------------------------------------------------
#include <stdio.h>
//Tiziana Ruarte 1)
int main(int argc, char *argv[]) {
  int mul = 1;
  int nx;


  printf("Ingrese un nùmero entero del 1 al 10: ");

  scanf("%d", & nx);

  printf("Tabla del 1 al 12\n");

  for ( nx * mul ; mul <= 12 ; mul++ ) {
    printf("%d x %d = %d\n", nx, mul, nx * mul);
  }

  return 0;
}
-------------------------------------------------------------------
Sebastian Kocuta
1.
#include <stdio.h>

int main(int argc, char *argv[]) {

  int resultado = 0;
  int num =0;
  do{
    printf("Ingrese un numero para ver su tabla de multiplicar: ");
    scanf("%d",&num);
  } while (num < 1 || num > 10);

  for(int a =0; a<13;a++)
  {	
    resultado = (a * num);
    printf("%d * %d = %d\n",num,a,resultado);
  }		
  return 0;
}
___________________________________________________________________________________________
#include <stdio.h>
// ********** 2 ********
int main(int argc, char *argv[]) {
  int num,fact=1;
  printf ("Ingrese un numero --->");
  scanf ("%d", &num);

  for (int i= 1;i <= num;i++){
    fact *= i;
  }
  printf ("El resultado factorial del numero es %d", fact);
  return 0;
}


