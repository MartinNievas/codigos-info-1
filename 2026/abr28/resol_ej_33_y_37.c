
//--------------------------------------------------------------------
// Ejercicio 3.3

//gomez
#include <stdio.h>

int main(void) {

  int unavariable,p345,numero,num;
  printf("Ingrese Un numero entero: ");
  scanf("%d",&num);
  printf("Buen dia ");
  float precio;
  int cantidad;
  char letra;
  printf("Ingrese Un Caracter: ");

  scanf("%c",letra);
  int uno,dos,tres;

  uno = 10;
  dos = 20;
  tres = 30;



  return 0;
}



int main(int argc, char *argv[]) {

  int unavariable,p345,numero;
  int num;
  printf("ingrese un numero entero: ");

  scanf ("%d",&num);

  printf("buen dia ");

  float precio;

  int cantidad;

  printf("ingrese un caracter");
  char letra;
  scanf("%c");
  int num1,num2,num3;
  num1=10;
  num2=20;
  num3=30;







  return 0;
}


//Coty  Maricon

#include <stdio.h>

int main(void) {
  int unavariable;
  int p345;
  int numero;
  int num;
  float precio;
  int cantidad;
  char letra;
  int tvar1=10;
  int tvar2=20;
  int tvar3=30;


  printf("Ingresar un nùmero entero: \n");
  scanf("%d", &num);


  printf("Buen dia :D \n");

  printf("Ingrese un caracter:");
  scanf(" %c", &letra);



  return 0;
}


//Martin Pederazta

#include <stdio.h>

int main(int argc, char *argv[]) {


  int unavariable=20;
  int p345=10;
  int numero=15;

  int num=0;
  int num2 =0;
  int num3 = 0;

  float precio;
  int cantidad;
  char letra;

  int variable1=10;
  int variable2=20;
  int variable3=30;

  printf("Buen dìa");

  printf("\nEscriba un numero entero: ");
  scanf ("%d", &num);

  printf("\nEscriba un segundo numero entero: ");
  scanf ("%d", &num2);

  printf("\nEscriba un tercer numero entero: ");
  scanf ("%d", &num3);

  printf("Ingrese un caracter: ");
  scanf("%s", &letra);

  return 0;
}


//--------------------------------------------------------------------
// Ejericico 3.7

// Martin Pedraza se la come 

#include <stdio.h>

int main(int argc, char *argv[]) {


  int unavariable=20;
  int p345=10;
  int numero=15;

  int num=0;
  int num2 =0;
  int num3 = 0;

  float precio;
  int cantidad;
  char letra;

  int variable1=10;
  int variable2=20;
  int variable3=30;

  int cuadrado= num2*num2;
  printf("Cuadrado del segundo numero: %d\n ", cuadrado);

  int suma= num2+num3;
  printf("Suma: %d\n", suma);

  int resta= num2-num3;
  printf("Resta: %d\n", resta);

  int producto=num2*num3;
  printf("Producto: %d\n", producto);

  int cociente=num2/num3;
  printf("Cociente: %d\n", cociente);

  return 0;
}






//--------------------------------------------------------------------
// Ezequiel Albornoz
#include<stdio.h>
int main(void){
  int num1;
  int num2;
  printf("Ingresar primer número: ");
  scanf("%d",&num1);
  printf("\nIngresar segundo número: ");
  scanf("%d",&num2);
  printf("\ncociente de %d y %d es %d\n",num1,num2,num1/num2);
  printf("producto de %d y %d es %d\n",num1,num2,num1*num2);
  printf("suma de %d y %d es %d\n",num1,num2,num1+num2);
  printf("resta de %d y %d es %d\n",num1,num2,num1-num2);
  return 0;
}
#include<stdio.h>
#include <math.h>
int main(void){
  float num1;
  float num2;
  printf("Ingresar primer número: ");
  scanf("%f",&num1);
  printf("\nIngresar segundo número: ");
  scanf("%f",&num2);
  printf("\ncociente de %f y %f es %f\n",num1,num2,num1/num2);
  printf("producto de %f y %f es %f\n",num1,num2,num1*num2);
  printf("suma de %f y %f es %f\n",num1,num2,num1+num2);
  printf("resta de %f y %f es %f\n",num1,num2,num1-num2);
  int num11 = (int)num1;
  int num21 = (int)num2;
  printf("resto de %f y %f es %d\n",num1,num2,num11%num21);
  return 0;
}
#include<stdio.h>
int main(void){
  int unavariable,p345,numero,num;
  printf("Ingresar número entero: ");
  scanf("%d",&num);
  printf("Buen día\nIngresar un caracter: ");
  float precio;
  int cantidad;
  char letra;
  scanf("%c",&letra);
  printf("\nCaracter introducido: %c\n", letra);
  int a=10,b=20,c=30;

  return 0;
}
//-------------------------------------------------------------------
//----------------------------------------------------------------  
// Martin Molina
#include <stdio.h>

int main(void)
{
  int num;
  int segundo_num;

  printf("Ingrese el primer numero entero: ");
  scanf("%d", &num);

  printf("Ingrese el segundo numero entero: ");
  scanf("%d", &segundo_num);

  printf("\nLa suma es: %d\n", num + segundo_num);
  printf("\nLa resta es: %d\n", num - segundo_num);
  printf("\nEl producto es: %d\n", num * segundo_num);
  printf("\nEl cociente es: %d\n", num / segundo_num);
  printf("\nEl resto es: %d\n", num % segundo_num);

  return 0;
}

//Santiago Velasco
#include <stdio.h>
int main(void) {
  int num1, num2;
  printf("Ingrese un nùmero entero: ");
  scanf("%d", &num1);
  printf("Ingrese otro nùmero entero: ");
  scanf("%d", &num2);
  printf("Suma: %d\nResta: %d\nProducto: %d\nCociente: %d\nResto: %d", num1+num2, num1-num2, num1*num2, num1/num2, num1%num2);
  return 0;
}

//

#include <stdio.h>

int main(int argc, char *argv[]) {

  float PrimerNumero;
  float SegundoNumero; 
  printf("ingrese un primer nùmero: ");
  scanf("%f",&PrimerNumero);
  printf("Ingrese un segundo nùmero: ");
  scanf("%f",&SegundoNumero);
  float suma = PrimerNumero + SegundoNumero;
  float resta = PrimerNumero - SegundoNumero;
  float producto = PrimerNumero * SegundoNumero;
  float cociente = PrimerNumero / SegundoNumero;
  printf("La suma de los anteriores nùmeros es: %f\n", suma);
  printf("La diferencia entre los anteriores nùmeros es: %f\n", resta);
  printf("El producto entre los anteriores nùmeros es: %f\n", producto);
  printf("El cociente entre los anteriores nùmeros es: %f\n", cociente);

  return 0;
}


//
//Coty Pautasso y Millicay Mariana


//3.3 = co y mari

#include <stdio.h>

int main(void) {
  int unavariable;
  int p345;
  int numero;
  int num;
  float precio;
  int cantidad;
  char letra;
  int tvar1=10;
  int tvar2=20;
  int tvar3=30;


  printf("Ingresar un nùmero entero: \n");
  scanf("%d", &num);


  printf("Buen dia :D \n");

  printf("Ingrese un caracter:");
  scanf(" %c", &letra);



  return 0;
}


//3.7 = co y mari

//

#include <stdio.h>

int main(int argc, char *argv[]) {


  int num=10;
  int num2=10;
  int resultado;

  printf("Ingrese un numero entero:");
  scanf("%d",&num);
  printf("Ingrese un segundo numero entero:");
  scanf("%d",&num2);

  printf("La suma de tu numeros es %d\n", num + num2);
  printf("La resta de tu numeros es %d\n", num - num2);
  printf("El producto de tu numeros es %d\n", num * num2);
  printf("El cociente de tu numeros es %d\n", num / num2);
  printf("El resto de tu numeros es %d\n", num % num2); /*Tiziano :)*/

  return 0;
}


#include <stdio.h>

int main(int argc, char *argv[]) {
  int num =0;
  int num2 =0 ;
  printf ("Ingrese un numero entero: ");
  scanf ("%d", &num);

  printf ("Ingrese un segundo numero entero: ");
  scanf ("%d", &num2);

  int suma= num+num2;
  printf("Suma: %d\n", suma);

  int resta= num-num2;
  printf("Resta: %d\n", resta);

  int producto=num*num2;
  printf("Producto: %d\n", producto);

  int cociente=num/num2;
  printf("Cociente: %d\n", cociente);
  return 0;

  //Martin
}



