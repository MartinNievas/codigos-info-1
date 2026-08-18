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
  f = celsius*1.8 + 32;
  return f;
}

int main()
{
  float resultado, celsius;
  printf("Ingrese los grados celsius para pasar a Fahrenheit: ");
  scanf("%f", &celsius);

  resultado = celsiusToFahrenheit(celsius);
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
  int res = b;

  if (a>b)
    res = a;

  return res;
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

  int a= celsiusToFahrenheit(temperatura);
  printf("a: %d\n", a);

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


// Acosta Juan Cruz - Ejercicio H
#include <stdio.h>

int sumarDigitosDosCifras(int n) {
  int resultado;
  resultado = n / 10 + n % 10;

  return printf("El resultado es: %d", resultado);
}

int main(void)
{
  int num;
  printf("Ingrese un número: ");
  scanf("%d", &num);

  sumarDigitosDosCifras(num);

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
Fernando Carrizo ej B
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

