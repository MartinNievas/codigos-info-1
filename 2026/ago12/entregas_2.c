a) float celsiusToFahrenheit(float celsius): Recibe una tempe-
ratura en grados Celsius y devuelve su equivalente en Fahrenheit
(F = C · 1,8 + 32).
b) int esPar(int numero): Devuelve 1 si el número recibido es par, y
0 si es impar.
c) int obtenerMayor(int a, int b): Recibe dos números enteros y
retorna el mayor de ellos.
d) float calcularPorcentaje(float total, float porcentaje):
Calcula y retorna el porcentaje indicado de una cantidad dada (ej. el
21 % de 500).
e) int esVocal(char c): Devuelve 1 si el carácter recibido es una vocal
(considerar mayúsculas y minúsculas), y 0 en caso contrario.
f) float calcularSuperficieTriangulo(float base, float
altura): Calcula y retorna la superficie de un triángulo.
g) int esPositivo(int n): Devuelve 1 si el número es positivo, -1 si es
negativo y 0 si es cero.
h) int sumarDigitosDosCifras(int n): Recibe un número entero de
dos cifras y devuelve la suma de sus dígitos (ej. si recibe 47 devuelve
11).
i) void saludar(int idioma): Imprime un saludo en pantalla. Si el
idioma es 1 muestra "Hola", si es 2 muestra "Hello", si es 3 muestra
"Bonjour".
j) int calcularDistancia(int x1, int x2): Retorna la distancia
absoluta entre dos puntos sobre una recta (el valor absoluto de la
diferencia entre ambos).


//---------------------------------------------------------

#include <stdio.h>
// Solicitar al usuario un número entero positivo
// Repetir si es incorrecto

int ingreso_y_validar()
{
  int numero;

  do{
    printf("Ingrese un número positivo: ");
    scanf("%d", &numero);
  }while(numero<0);

  return numero;
}

int main(void) {

  int num;

  num = ingreso_y_validar();

  printf("El número ingresado y validado es: %d\n", num);


  return 0;
}



////////
/ Ejercicio a

/////
/******************************************************************************

de: Quinteros Brian

a) float celsiusToFahrenheit(float celsius): Recibe una temperatura en grados Celsius y devuelve su equivalente en Fahrenheit
(F = C · 1,8 + 32).

*******************************************************************************/

#include <stdio.h>

float celsiusToFahrenheit(float celsius){
    float f;
    f = (celsius*1.8) + 32;
    return (f);
}

int main()
{
    float resultado, celsius;
    printf("Ingrese los grados celsius para pasar a Fahrenheit: ");
    scanf("%f", &celsius);
    resultado = celsi;
    printf("El resultado es de: %.2f", resultado);
    return 0;
}

/******************************************************************************

b) int esPar(int numero): Devuelve 1 si el número recibido es par, y
0 si es impar

*******************************************************************************/

#include <stdio.h>

int esPar(int numero){
    
    if (numero%2 == 0)
        return 1;
    else    
        return 0;
}

int main()
{
    int resultado, numero;
    printf("Ingrese un numero para saber si es par (1) o impar (0): ");
    scanf("%d", &numero);
    resultado = esPar(numero);
    printf("El resultado es de: %d", resultado);
    return 0;
}


/******************************************************************************

c) int obtenerMayor(int a, int b): Recibe dos números enteros y
retorna el mayor de ellos.


*******************************************************************************/

#include <stdio.h>

int obtenerMayor(int a, int b){
    
    if (a>b)
        return a;
    else    
        return b;
}

int main()
{
    int resultado, a, b;
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);
    resultado = obtenerMayor(a,b);
    printf("El mayor de los dos es: %d", resultado);
    return 0;
}

/******************************************************************************

d) float calcularPorcentaje(float total, float porcentaje):
Calcula y retorna el porcentaje indicado de una cantidad dada (ej. el
21 % de 500).


*******************************************************************************/

#include <stdio.h>

float calcularPorcentaje(float total, float porcentaje){
    float rta1, rta2;
    rta1 = total * porcentaje;
    return rta2 = rta1/100;
}

int main()
{
    float porcentaje, total, respuesta;
    printf("Ingrese el porcentaje: ");
    scanf("%f", &porcentaje);
    printf("Ingrese la cantidad: ");
    scanf("%f", &total);
    
    respuesta = calcularPorcentaje(total, porcentaje);
    
    printf("El resultado es de: %.2f", respuesta);
    return 0;
}



////

//Mateo Chabra
#include <stdio.h>

float celsiusaF(float celsius)
{
    return celsius * 1.8 + 32;
}

int main()
{
    float celsius;

    printf("Ingrese los grados Celsius: ");
    scanf("%f", &celsius);

    printf("Los grados Fahrenheit son: %.2f\n", celsiusaF(celsius));

    return 0;
}
//ejercicio b
#include <stdio.h>

int espar(int n)
{
    return n % 2 == 0;
}

int main()
{
    int n;

    printf("Ingrese el numero: ");
    scanf("%d", &n);

    if (espar(n))
        printf("El numero es par.");
    else
        printf("El numero es impar.");

    return 0;
}
//ejercicio c
#include <stdio.h>

int obtainbiggest(int a, int b)
{
    return a > b;
}

int main()
{
    int a, b;

    printf("Ingrese los numeros: ");
    scanf("%d%d", &a, &b);

    if (obtainbiggest(a, b))
        printf("El numero %d es mayor", a);
    else
        printf("El numero %d es mayor", b);

    return 0;
}
//ejercicio d
//////



////////////////////////////////////////////
//Kevin Gumiel
// ejercicio d

#include <stdio.h>

//Las definiciones siempre van arriba

float calcularPorcentaje(float total, float porcentaje)
{
    return ((total*porcentaje)/100);
}

int main()
{
    float num;
    num = calcularPorcentaje( 100 , 25);
    printf("porcentaje: %f", num);
    return 0;
}

//////////////////////////////////////////////

// Ejercicio b
// Acosta Juan Cruz - Ejercicio A
#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    float fahrenheit;
    fahrenheit = celsius * 1.8 + 32;
    
    return printf("La temperatura en Fahrenheit es de: %.2f\n", fahrenheit);
}

int main(void)
{
    float temperatura;
    printf("Ingrese la temperatura en Celsius:");
    scanf("%f", &temperatura);
    
    celsiusToFahrenheit(temperatura);
    
    return 0;
}
// Acosta Juan Cruz - Ejercicio B
#include <stdio.h>

int esPar(int numero) {
    int n;
    n = numero % 2;
    
    if(n == 1)
        n = 0;
    else
        n = 1;
    
    return n;
}
// Acosta Juan Cruz - Ejercicio C
#include <stdio.h>

int obtenerMayor(int a, int b) {
    if(a > b)
        return printf("El número mayor es: %d", a);
    else
        if(a < b)
            return printf("El número mayor es: %d", b);
        else
            return printf("Ambos numeros son iguales.");
}

int main(void)
{
    int num1, num2;
    printf("Ingrese dos numeros separados por un espacio: ");
    scanf("%d%d", &num1, &num2);
    obtenerMayor(num1, num2);
    
    return 0;
}
// Acosta Juan Cruz - Ejercicio D
#include <stdio.h>

float calcularPorcentaje(float total, float porcentaje) {
    float resultado;
    
    return printf("El porcentaje es: %.2f", resultado = (porcentaje * total)/100);
}

int main(void)
{
    float num1, num2;
    printf("Ingrese el número total y el porcentaje a calcular: ");
    scanf("%f%f", &num1, &num2);
    calcularPorcentaje(num1, num2);
    
    return 0;
}
// Acosta Juan Cruz - Ejercicio E
#include <stdio.h>

int esVocal(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main(void)
{
    char letra;
    printf("Ingrese una letra: ");
    scanf("%c", &letra);
    
    printf("%d", esVocal(letra));
    
    return 0;
}

// Acosta Juan Cruz - Ejercicio H
#include <stdio.h>

int sumarDigitosDosCifras(int n) {
    int resultado;
    resultado = n / 10 + n % 10;

    return  resultado;
}

int main(void)
{
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);

    printf("El resultado es: %d",sumarDigitosDosCifras(num) );
    return 0;
}
// Acosta Juan Cruz - Ejercicio I


int main(void)
{
    int numero;
    printf("Ingrese un numero, si es par devolverá 1, caso contrario será 0:");
    scanf("%d", &numero);
    
    printf("%d", esPar(numero));
    
    return 0;
}

//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//Kevin Gumiel
//ejercicio b
//Las definiciones siempre van arriba

int esPar(int numero)
{
    int devolucion;
    if( numero % 2 >= 1)
     devolucion = 0;
     else
     devolucion = 1;
    return devolucion;
}

int main()
{
    int resp;
    int numero;
    printf("ingrese numero entero: ");
    scanf("%d", &numero);
    resp = esPar(numero);
    if(resp == 0)
     printf("\n%d Es impar", numero);
     else
     printf("%d Es Par", numero);
    return 0;
}
///////////////////////////////////////////////

// Ejercicio c



// Ejercicio d



// Ejercicio e


// Ejercicio A Jean Franco Ceglia

#include <stdio.h>

float convertir_temp(float t){
    
    float f = (t * 1.8 + 32);
    
    return f;
}

int main(){
    
    float tem;
    
    printf("Ingrese la temperatura: ");
    scanf("%f", &tem);
    
    float temp_f = convertir_temp(tem);
    
    printf("La temeratura e fahrenheit es: %f", temp_f);

    return 0;
}

// ejercicio b Jean Franco Ceglia
#include <stdio.h>

int esPar(int n){
    
    int res;
    
    if(n % 2 == 1){
        res = 0;
    }else{
        res = 1;
    }
    
    return res;
}

int main(){
    
    int num;
    
    printf("Ingrese la temperatura: ");
    scanf("%d", &num);
    
    int resul = esPar(num);
    
    if(resul == 1){
        printf("El numero es par %d", resul);
    }else{
        printf("El numero es impar %d", resul);
    }

    return 0;
}

// Ejercicio C Jean Franco Ceglia
#include <stdio.h>

int esMayor(int n1, int n2){
    
    int res;
    
    if(n1 > n2){
        res = n1;
    }else{
        res = n2;
    }
    
    return res;
}

int main(){
    
    int num1, num2;
    printf("Ingresa el pimer numero: ");
    scanf("%d", &num1);
    printf("Ingresa el segundo numero: ");
    scanf("%d", &num2);
    
    int mayor = esMayor(num1, num2);
    
    printf("El mayo es: %d", mayor);
    
    return 0;
}

// Ejercicio D Jean Franco Ceglia
#include <stdio.h>

float porcentaje(float porc, float can){
    float res;
    
    return res = can*porc/100;
}

int main(){
   float por, cant;
   
   printf("Ingresa la cantidad: ");
   scanf("%f", &cant);
   printf("ingresa el porcentaje: ");
   scanf("%f", &por);
   float resultado = porcentaje(por, cant);
   printf("El porcentaje es: %.2f", resultado);
   
    return 0;
}

// EJERCICIO E Jean Franco Ceglia 

#include <stdio.h>

char esVocal(char let){
    if(let == 'A' || let == 'a' || let == 'E' || let == 'e' || let == 'I' || let == 'i' || let == 'O'|| let == 'o' || let == 'U' || let == 'u'){
        printf("Es vocal");
    }else{
        printf("Es consonante");
    }
}

int main(){
   char letra;
   
   printf("Ingresa la letra para su analisis: ");
   scanf("%c", &letra);
   
   esVocal(letra);
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////
Carrizo Fernando  ejercicio A

#include <stdio.h>
float celsius, far;

float celsiusaFar (float celsius) 
{
   float far = celsius*1.8 + 32;
    return far;
}
 
 int main()
{
    printf("ingrese una temperatura en grados Celsius: ");
    scanf("%f",&celsius);
    far = celsiusaFar(celsius);
    printf("La temperatura en grados Farhrenheit es: %.2f ",far);
   
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
//Kevin Gumiel
//ejercicio a
//Las definiciones siempre van arriba

float CelsiusToFahrenheit(float celsius)
{
    return ((celsius*1.8) + 32);
}

int main()
{
    float num;
    float celsius;
    printf("ingrese temperatura en celsius: ");
    scanf("%f", &celsius);
    num = CelsiusToFahrenheit(celsius);
    printf("\nEn grados Fahrenheit: %f", num);
    return 0;
}
////////////////////////////////////////////////////
#include <stdio.h>
//Tiziana Ruarte
float celsiusToFahrenheit(float celsius){
float F =(celsius * 1.8) + 32;
return F;
}

int main()
{
float celsius, Fahrenheit;
    
printf("Ingrese una temperatura en grado Celsius: ");
scanf("%f", &celsius);



Fahrenheit == celsiusToFahrenheit(celsius);

printf("Esa temperatura en Fahrenheit es: 2.f%", Fahrenheit);

    return 0;
}
/////////////////////////////////////////////////////////////////////
Fernando Carrizo ej 
#include <stdio.h>


int espar (int num) 
{
    if(num % 2 == 0){
        num = 1;
    }
    else 
        num = 0;
    return num;
}
 
 int main()
{
    int num;
    printf("ingrese un numero: ");
    scanf("%d",&num);
    if (espar(num) == 1){
        
     printf("El numero es par! ");
    }
    else printf("El numero es impar! ");
    
   
    return 0;
}
---------------------------------------------------------------------------
  Carrizo Fernando ej C
  #include <stdio.h>
int a,b,mayor;

int elmayor (int a, int b ) 
{
    if(a >= b) mayor = a;
    else mayor = b;
        return mayor;
}
 
 int main()
{
    printf("ingrese 2 numeros enteros \n");
    scanf("%d %d",&a ,&b);
    mayor = elmayor( a , b);
     printf("el mayor es: %d ", mayor);
   
    return 0;
////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//Kevin Gumiel
//ejercicio c
//Las definiciones siempre van arriba

int obtenerMayor(int a, int b)
{
    int mayor;
    if( a > b)
     mayor = a;
     else
     mayor = b;
    return mayor;
}

int main()
{
    int num1;
    int num2;
    printf("ingrese dosv numeros entero:\n");
    scanf("%d\n", &num1);
    scanf("%d", &num2);
    printf("\nEl numero mayor entre los dos es: %d", obtenerMayor(num1,num2) );
    return 0;
}
---------------------------------------------------------------------------------
   
}
--------------------------------------------------------------------------
 //Tiziana Ruarte
  include <stdio.h>
float calcularPorcentaje(float total, float porcentaje){
    float resultado;
    resultado= (porcentaje*total)/100;
    return resultado;
}
int main()
{
float total, porcentaje;
float resultado;

printf("Ingrese el número que y el porcentaje que quiera sacar de dicho número: ");
scanf("%f %f", &total, &porcentaje);

resultado =calcularPorcentaje(total, porcentaje);

printf("El resultado del porcentaje es: %2.f", resultado);
    return 0;
}
----------------------------------------------------------------------------------
	#include <stdio.h>

float calcularSuperficieTriangulo(float base, float altura){
    return base * altura / 2;
}

int main()
{
    float b, a;
    printf("ingrese la base del triangulo: "); scanf("%f",&b);
    printf("ingrese la altura del triangulo: "); scanf("%f",&a);
    printf("\nLa superficie del triangulo es: %.2f",calcularSuperficieTriangulo(b,a));
    return 0;
}
-------------------------------------------------------------------------------------------
  
  #include <stdio.h>

int esPositivo(int n){

    int res = 0;

    if (n < 0)
      res = -1;
    else if(n > 0)
      res = 1;

    return res;
}

int main()
{
    int n;
    printf("ingrese un numero: "); scanf("%d",&n);
    printf("\nes positivo?(1=Si)(0=No): %d",esPositivo(n));
    return 0;
}
//////////////////////////////////////
#include <stdio.h>
//Kevin Gumiel
//ejercicio e
//Las definiciones siempre van arriba

int esVocal(char c)
{
    int n = 0;
    if( c == 'a' || c=='e' || c=='i' || c=='o' || c=='u')
      n = 1;
    if( c == 'A' || c=='E' || c=='I' || c=='O' || c=='U')
      n = 1;
    return n;
}

int main()
{
    char letra;
    printf("ingrese letra para evaluar si es vocal:\n");
    scanf("%c", &letra);
    if ( esVocal(letra) == 1)
     printf("%c Es vocal", letra );
     else
      printf("%c no es vocal", letra );
    return 0;
}
///////////////////////////////////////////////////////////
///
///
void saludar(int idioma)
{

  switch(idioma){
  case 1:
    printf("Hola\n");
  break;
  case 2:
    printf("Hello\n");
  break;
  case 3:
    printf("Bonjour\n");
  break;
  }


}


int calcularDistancia(int x1, int x2){
  int res;
  if( x1 > x2)
    res = x1-x2;
  else
    res = x2-x1;

  return res;
}

int calcularDistancia(int x1, int x2){
  int res = x1 > x2 ?  x1-x2 : x2 - x1;

  return res;
}
