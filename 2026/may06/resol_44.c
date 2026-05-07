
------------------------------------------------------------------
//Mateo Chabra
#include <stdio.h>

int main()
{
  int first, sec, third;

  printf("Ingrese el valor a promediar: ");
  scanf("%d", &first);   
  printf("\nIngrese el 2do valor a promediar: ");
  scanf("%d", &sec);
  printf("\nIngrese el 3er valor a promediar: ");
  scanf("%d", &third);
  float result = (first+sec+third)/3;
  printf("\nPromedio: %.2f", result);
  return 0;
}

#include <stdio.h>

int main()
{
  int first, sec, third;

  printf("Metros a centimetros: ");
  scanf("%d", &first);   
  printf("\nHoras a minutos: ");
  scanf("%d", &sec);
  printf("\nDias a horas: ");
  scanf("%d", &third);
  printf("\nCentimetros: %d\nMinutos: %d\nCentimetros: %d", first*100, sec*60, third*24);
  return 0;
}
-----------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
// Operadores aritmeticos
// Ejercicio 0
int main(void)
{
  float n1, n2, n3, p;
  printf("Ingrese las tres notas para calcular su promedio: ");
  scanf("%f %f %f", &n1, &n2, &n3);
  p= (n1+n2+n3)/3;
  printf("El resultado del promedio de las tres notas ingresadas, es: %.2f", p);
  return 0;
}


//Ejercicio 4
//El usaurio debe ingresar 3 numeros y devolver el promedio
//Ejercicio 5
//Ingresar y convertir de metros a centimetros, 
//Quinteros Brian

#include <iostream>

int main(void) {
  float nota1,nota2,nota3, promedio;
  printf("Ingrese el primer número: ");
  scanf("%f", &nota1);
  printf("Ingrese el segundo número: ");
  scanf("%f", &nota2);
  printf("Ingrese el tercer número: ");
  scanf("%f", &nota3);
  promedio = (nota1+nota2+nota3)/3;
  printf("Su promedio entre las tres notas es de: %.2f", promedio);
  return 0;
}
-----------------------------------------------------------
//Ejercicio 4
Franco Villarreal
#include <stdio.h>

int main(int argc, char *argv[]) {

  int nota1, nota2, nota3;
  int prom;

  printf("ingrese valor de nota:");
  scanf("%d%d%d", &nota1, &nota2, &nota3);

  prom = (nota1 + nota2 + nota3) /3;

  printf("imprimir promedio: %d", prom );

  return 0;
}
------------------------------------------------------------------

//Kocuta, Sebastian
#include <stdio.h>

int main() {
  int num1, num2, num3, promedio;

  printf("\nIngrese numero 1: "); 

  scanf("%d", &num1);

  printf("\nIngrese numero 2: "); 

  scanf("%d", &num2);

  printf("\nIngrese numero 3: "); 

  scanf("%d", &num3);

  promedio = (num1+num2+num3)/3;

  printf("El promedio de los 3 numeros es: %d\n", promedio); 

  return 0;
}
//Torrez
#include <stdio.h>

int main(void)
{

  float nota1;
  float nota2;
  float nota3;
  float promedio;

  printf("Ingrese un numero: ");
  scanf("%f", &nota1);

  printf("Ingrese otro numero: ");
  scanf("%f", &nota2);

  printf("Ingrese otro numero: ");
  scanf("%f" , &nota3);

  promedio=(nota1 + nota2 + nota3)/3 ;

  printf("Promedio: %f",promedio);



  return 0;
}



//Ejercicio 4
//El usaurio debe ingresar 3 numeros y devolver el promedio
//Ejercicio 5
//Ingresar y convertir de metros a centimetros, 
//Quinteros Brian

#include <iostream>

int main(void) {
  float metros, centimetros;
  int horas, dias, minutos;

  printf("Ingrese los metros para pasar a centimetros: ");
  scanf("%f", &metros);
  centimetros = metros*100;
  printf("A centimetros es: %.2f\n", centimetros);

  printf("Ingrese las horas para pasar a minutos: ");
  scanf("%d", &horas);
  minutos = horas*60;
  printf("A minutos es: %d \n", minutos);

  printf("Ingrese los Dias para pasar a horas: ");
  scanf("%d", &dias);
  horas = dias*24;
  printf("A dias horas es: %d \n", horas);

  return 0;
}


