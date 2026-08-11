// Ejercicio a

//PEDRAZA
#include <stdio.h>
float caf (float celsius) {
  return celsius * 1.8 + 32;
}
int main(void) {

  float celsius;
  float fah ;

  printf("Ingrese la temperatura en Celsius: ");
  scanf("%f", &celsius);

  fah= caf (celsius);
  printf ("La temperatura en Fahrenheit es: %.2f\n", fah);


  return 0;
}

//Santiago Velasco
#include <stdio.h>
float CelsiusToFahrenheit(float celsius){
  float farenheit = (celsius*1.8)+32;
  return farenheit;
}
int main(int argc, char *argv[]) {
  float c = 0;
  float f = 0;
  printf("Ingrese la temperatura en grados celsius\n");
  scanf("%f", &c);
  f = CelsiusToFahrenheit(c);
  printf("Temperatura en grados farenheit: %fF", f);
  return 0;
}

#include <stdio.h>

float celsiustofahrenheit(float celsius){
  float p;

  p = celsius*1.8+32;


  return p;
}

int main(void) {
  int c;
  float f;

  printf("ingrese la temperatura en ºC: ");
  scanf("%d",&c);

  f = celsiustofahrenheit ((float)c);

  printf("%f\n",f);
  return 0;
}

//Celsius a Farenheint
#include <stdio.h>

float celciusToFarenheit (float celsius){
  float farenheint = 0;
  farenheint = (celsius*1.8)+32;

  return farenheint;
}


int main() {
  float celsiu = 0;
  printf("ingrese la temperatura en Celcius: ");
  scanf("%f", &celsiu);
  float faren = celciusToFarenheit(celsiu);
  printf("La temperatura en Farenheint es: %.2f", faren);
  return 0;
}

// julian araoz
#include <stdio.h>

float celsiusToFahrenheit(float celsius);

int main(void) {

  float celsius;

  printf("temperatura en celsius: ");
  scanf("%f", &celsius);

  printf("temperatura en fahrenheint: %.2f", celsiusToFahrenheit(celsius));

  return 0;
}

float celsiusToFahrenheit(float celsius){
  return celsius * 1.8 + 32;}

  // Ejercicio b


  //PEDRAZA
#include <stdio.h>

int esPar (int numero) {
    if (numero %2 == 0) {
      return 1;
    }
    else
    {
      return 0;
    }
  }
int main() {

  int numero;

  printf ("Ingrese un numero: ");
  scanf("%d", &numero);

  if (esPar(numero)== 1) {
    printf ("El numero es par. \n");
  }
  else {
    printf("El numero es impar.");
  }
  return 0;
}

//Lucero
#include <stdio.h>
int esPar(int numero){
  if(numero%2){
    numero = 0;
  }else{
    numero = 1;
  }
  return numero;
}
int main(int argc, char *argv[]) {
  int num;
  int fin;

  printf("Ingresar un Numero: ");
  scanf("%d",&num);

  fin = esPar(num);

  printf("%d",fin);

  return 0;
}

//Santiago Velasco
#include <stdio.h>	
int esPar(int numero){
  return numero%2==0
}

int main(int argc, char *argv[]) {
  int num = 0;
  int p = 0;
  printf("Ingrese un numero\n");
  scanf("%d", &num);
  p = esPar(num);
  printf("%d", p);
  return 0;
}

#include <stdio.h>

int espar(int a){
  if(a % 2 == 0){
    return 1;
  }else {
    return 0;
  }
}

int main(int argc, char *argv[]) {

  int n1;
  int retorno;
  printf("ingrese un numero: ");
  scanf("%d",&n1);

  retorno = espar (n1);

  printf("1 es par y 0 es impar: %d",retorno);
  return 0;
}

//julian araoz
#include <stdio.h>

int esPar(int numero);

int main(void) {

  int num;

  printf("numero: ");
  scanf("%d", &num);

  if (esPar(num) == 1)
    printf("es par");
  else
    printf("es impar");

  return 0;
}

int esPar(int numero){
  int par;
  if ((numero % 2) == 0)
    par = 1;
  else
    par = 0;
  return par;
}




// Ejercicio c

//PEDRAZA
#include <stdio.h>
int obtenerMayor (int a, int b) {
  if (a>b) {
    return a;
  }
  else { return b;
  }

}


int main() {
  int a, b;
  int mayor;
  printf("Ingresar el primer numero: ");
  scanf("%d", &a );

  printf ("Ingresar el segundo numero: ");
  scanf("%d", &b );

  mayor = obtenerMayor (a , b );
  printf("El mayor es: %d\n", mayor);

  return 0;
}


int esPar (int numero) {
  return (numero+1)%2;
}


//Lucero
#include <stdio.h>
int obtenerMayor(int a, int b){
  if(a > b){
    return a;
  }else {
    return b;
  }
}
int main(void)
{
  int num1, num2, fin;

  printf("Ingrese un Numero entero: ");
  scanf("%d",&num1);
  printf("Ingrese otro Numero entero: ");
  scanf("%d",&num2);

  fin = obtenerMayor(num1,num2);

  printf("El mayor es %d",fin);

  return 0;
}

//Santiago Velasco
#include <stdio.h>
int obtenerMayor(int a, int b){
  int mayor;
  if (a<b){
    mayor = b;
  }else{
    mayor = a;
  }
  return mayor;
}
int main(int argc, char *argv[]) {
  int num1 = 0;
  int num2 = 0;
  int elmayor = 0;
  printf("Ingrese dos numeros\n");
  scanf("%d", &num1);
  scanf("%d", &num2);
  elmayor = obtenerMayor(num1, num2);
  printf("El mayor es: %d", elmayor);
  return 0;
}

-------------------------------------------------------------------------
//Rios y Gutierrez
#include <stdio.h>

float celsiusToFahrenheit (float celsius){
  return celsius*1.8+32;
}

int main(int argc, char *argv[]) {
  float celsius;
  printf("Ingrese la temperatura en Celsius:");
  scanf("%f", &celsius);
  printf("\nLa Temperatura en Farenheit es de: %f", celsiusToFahrenheit(celsius));	

  return 0;
}

--
#include <stdio.h>
int esPar (int num){
  if (num%2==0){
    return 1;
  } else 
    return 0;
}

int main(void) {
  int num;
  printf("Ingrese un numero:");
  scanf("%d", &num);
  printf("%d",esPar(num));

  return 0;
}

//julian araoz
#include <stdio.h>

int obtenerMayor(int a, int b);

int main(void) {

  int n1 = 88, n2 = 8;

  printf("el mayor es: %d", obtenerMayor(n1, n2));

  return 0;
}
int obtenerMayor(int a, int b){
  int may;

  if (a > b)
    may = a;
  else
    may = b;
  return may;
}




// Benjamín Quiroga Carezzano
#include<iostream>
using namespace std;
float celcius_a_farenheit_[float celcius]{
  float NumF;
  NumF = celcius*1.8+32;
  return NumF;
}
int main (int argc, char *argv[]) {
  float NumC, NumF;
  printf( "dame una temperatura en celcius y te la paso a farenheit");
  scanf ( "%f", &NumC);
  NumF = NumC*1.8+32;
  printf( "la temperatura en farenheit es de : %f", NumF);
  return 0;
}



//Obtener mayor
#include <stdio.h>

int obtenerMayor(int a, int b){
  int mayor = 0;
  if (a > b){
    mayor = a;
  }else {
    mayor = b;
    return mayor;
  }
}

int main(){
  int n1 = 0;
  int n2 = 0;
  printf("porfavor, ingrese 2 numeros: ");
  scanf("%d %d", &n1, &n2);
  int res = obtenerMayor(n1, n2);
  printf("el numero mayor es: %d", res);
  return 0;
}











