// Ejercicios 10/06/2026
# 5.14
Escribir un algoritmo que solicite un número entero y determine si es positivo,  negativo o cero.

# 5.15
Escribir un algoritmo que permita ingresar la edad de una persona e indique si es mayor o menor de edad.4

# 5.16
Escribir un algoritmo que solicite dos números enteros y muestre cuál de ellos es el mayor.

# 5.17
Escribir un algoritmo que permita ingresar tres números e imprima el menor de ellos.·

# 5.18
Escribir un algoritmo que solicite un número entero y determine si es par o impar.

# 5.19
Escribir un algoritmo que calcule el sueldo final de un empleado sabiendo que recibe un bono del 15% sobre su sueldo básico.

# 5.21
Escribir un algoritmo que permita ingresar el precio de un producto y calcule el precio final aplicando IVA del 21%.
··
# 5.32
Escribir un algoritmo que solicite dos números enteros y permita mostrar un menú con las opciones: 
suma, resta, multiplicación y división. Según la opción elegida, realizar la operación correspondiente.

# 5.35
Escribir un algoritmo que permita ingresar las dimensiones de un terreno rectangular y calcule la 
cantidad de metros de alambre necesarios para cercarlo, considerando una vuelta completa.

//-----
## 6.1

Escribir un algoritmo que solicite ingresar tres números enteros distintos e imprima el mayor de ellos sin utilizar estructuras de repetición.

## 6.2

Escribir un algoritmo que permita ingresar tres longitudes e indique si es posible formar un triángulo con ellas.

## 6.3

Escribir un algoritmo que solicite las coordenadas (x,y) de un punto e indique en qué cuadrante del plano cartesiano se encuentra. Considerar también los casos en que el punto pertenezca a un eje o al origen.

## 6.4

Escribir un algoritmo que permita ingresar tres número/s enteros e imprimirlos ordenados de menor a mayor.

## 6.5

Escribir un algoritmo que solicite el ingreso de una hora expresada en horas, minutos y segundos, y determine la hora correspondiente un segundo después.



//Resultado 5.14----------------------------------------------------------------
//Elias Lugo & Juan Acosta
#include <stdio.h>

int main(int argc, char *argv[]) {
  int num;

  printf("Escriba un número entero: ");
  scanf("%d", &num);

  if(num > 0){
    printf("Su número es positivo");
  }
  if(num == 0){
    printf("Su número es cero(0)");
  }
  if(num < 0){
    printf("Su número es negativo");
  }
  return 0;
}
----------------------------------------------------------------
//Rossi Nicolas

#include <stdio.h>

int main(int argc, char *argv[]) {
  int num;

  printf("Escriba un número: ");
  scanf("%d", &num);

  if(num > 0){
    printf("Su número es positivo");
  }
  if(num == 0){
    printf("Su número es cero(0)");
  }
  if(num < 0){
    printf("Su número es negativo");
  }
  return 0;
}
----------------------------------------------------------
//francios jonathan
#include <stdio.h>

int main(int argc, char *argv[]) {
  int num;

  printf("Escriba un número entero: ");
  scanf("%d", &num);

  if(num > 0){
    printf("Su número es positivo");
  }
  if(num == 0){
    printf("Su número es cero(0)");
  }
  if(num < 0){
    printf("Su número es negativo");
  }                      
  return 0;
}

//Resultado 5.15----------------------------------------------------------------
//Mateo chabra
#include <stdio.h>

int main(void) {
  int age;

  printf("Ingrese su edad: ");
  scanf("%d/n", &age);

  if (age>=18)
    printf("Eres nayor de edad.");
  else
    printf("Eres menor de edad.");

  return 0;
}

//Elias Lugo & Juan Acosta
#include <stdio.h>

int main(int argc, char *argv[]) {
  int num;

  printf("Escriba un edad: ");
  scanf("%d", &num);

  if(num >= 18 ){
    printf("Usted es mayor");
  }
  else{
    printf("Usted es menor");
  }

  return 0;
}
-----------------------------------------------------
//francios jonathan

#include <stdio.h>
int main() {
  int edad;

  printf("Ingrese su edad: ");
  scanf("%d", &edad);

  if (edad >= 18) {
    printf("Es mayor de edad.\n");
  } else {
    printf("Es menor de edad.\n");
  }

  return 0;


}
---------------------------------------------------
//Rossi Nicolas 

#include <stdio.h>

int main(void) {
  int edad;

  printf("Ingrese su edad: ");
  scanf("%d/n", &edad);

  if (edad>=18)
    printf("Eres mayor de edad.");
  else
    printf("Eres menor de edad.");

  return 0;
}



//Resultado 5.16----------------------------------------------------------------
//Mateo Chabra
#include <stdio.h>

int main(void) {
  int num;
  int num1;

  printf("Ingrese dos números: ");
  scanf("%d%d/n", &num, &num1);

  if (num<num1)
    printf("%d es mayor y %d es menor.", num1,num);
  else
    printf("%d es mayor y %d es menor",num,num1);

  return 0;
}

//Elias Lugo & Juan Acosta
#include <stdio.h>

int main(int argc, char *argv[]) {
  int num1, num2;

  printf("Ingrese dos números: ");
  scanf("%d %d", &num1, &num2);

  if(num1 > num2 ){
    printf("Este numero es mayor: %d", num1);
  }
  if(num1 < num2){
    printf("Este numero es mayor: %d", num2);
  }
  else{
    printf("Los números son iguales.");
  }

  return 0;
}
//francios jonathan
#include <stdio.h>

int main(void) {
  int num;
  int num1;

  printf("Ingrese dos números: ");
  scanf("%d%d/n", &num, &num1);

  if (num<num1)
    printf("%d es mayor y %d es menor.", num1,num);
  else
    printf("%d es mayor y %d es menor",num,num1);

  return 0;
}
-------------------------------------------------------------------------
//Rossi Nicolas

#include <stdio.h>

int main(int argc, char *argv[]) {
  int num1;
  int num2;

  printf("Ingrese dos números: ");
  scanf("%d%d/n", &num1, &num2);

  if (num1<num2)
    printf("%d es mayor y %d es menor.", num2,num1);
  else
    printf("%d es mayor y %d es menor",num1,num2);

  return 0;
}

//Resultado 5.17----------------------------------------------------------------
//Elias Lugo & Juan Acosta
#include <stdio.h>

int main(int argc, char *argv[]) {
  int num1, num2, num3;

  printf("Ingrese tres números: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  if(num1 > num2 && num2 > num3){
    printf("Este numero es menor: %d", num3);
  }
  if((num1 > num3 && num3 > num2) || (num3 > num1 && num1 > num2)){
    printf("Este numero es menor: %d", num2);
  }
  if(num3 > num2 && num2 > num1){
    printf("Este numero es menor: %d", num1);
  }

  return 0;
}
---------------------------------------------------------------
//francios jonathan

#include <stdio.h>

int main() {
  int num1, num2, num3, menor;

  printf("Ingrese tres numeros: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  menor = num1;

  if (num2 < menor) {
    menor = num2;
  }

  if (num3 < menor) {
    menor = num3;
  }

  printf("El menor numero es: %d\n", menor);

  return 0;
}
-----------------------------------------------------------------------
//Rossi Nicolas

#include <stdio.h>

int main(int argc, char *argv[]) {
  int num1, num2, num3, menor;

  printf("Ingrese tres numeros: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  menor = num1;

  if (num2 < menor) {
    menor = num2;
  }

  if (num3 < menor) {
    menor = num3;
  }

  printf("El menor numero es: %d\n", menor);

  return 0;
}


5.18----------------------------------------------------------------
//Mateo Chabra
#include <stdio.h>

int main(void) {
  int num;
  int rta;

  printf("Ingrese un número: ");
  scanf("%d/n", &num);

  rta = num%2;
  if (rta>=1)
    printf("%d es impar.", num);
  else
    printf("%d es par",num);

  return 0;
}

//Elias Lugo & Juan Acosta
#include <stdio.h>

int main(int argc, char *argv[]) {
  int num;

  printf("Ingrese un número: ");
  scanf("%d", &num);

  if(num%2 == 0){
    printf("Es par");
  }
  else{
    printf("Es impar");
  }

  return 0;
}
//francios jonathan
#include <stdio.h>

int main() {
  int numero;

  printf("Ingrese un numero entero: ");
  scanf("%d", &numero);

  if (numero % 2 == 0) {
    printf("El numero es par.\n");
  } else {
    printf("El numero es impar.\n");
  }

  return 0;
}
-----------------------------------------------------------------------------
//Rossi Nicolas

#include <stdio.h>

int main(int argc, char *argv[]) {
  int num;

  printf("Ingrese un número: ");
  scanf("%d", &num);

  if(num%2 == 0){
    printf("Es par");
  }
  else{
    printf("Es impar");
  }

  return 0;
}


//Resultado 5.19----------------------------------------------------------------
//Mateo Chabra
#include <stdio.h>

int main(void) {
  float sueldo;
  int rta;

  printf("Ingrese su sueldo: $");
  scanf("%f/n", &sueldo);

  rta = (sueldo*0.15)+sueldo;
  printf("Su sueldo final es de: $%d", rta);

  return 0;
}


// Elias Lugo & Juan Acosta
#include <stdio.h>

int main(int argc, char *argv[]) {
  float num, sueldo;

  printf("Ingrese un sueldo: ");
  scanf("%f", &num);

  sueldo = num * 1.15;
  printf("Su sueldo es %.2f", sueldo);

  return 0;
}
//francios jonathan
#include <stdio.h>

int main() {
  float sueldoBasico, bono, sueldoFinal;

  printf("Ingrese el sueldo basico: ");
  scanf("%f", &sueldoBasico);

  bono = sueldoBasico * 0.15;
  sueldoFinal = sueldoBasico + bono;

  printf("El bono es: %.2f\n", bono);
  printf("El sueldo final es: %.2f\n", sueldoFinal);

  return 0;
}

// Jean Franco ceglia y fernando carrizo 5.21
#include <stdio.h>

int main(void) {
  /*# 5.21
    Escribir un algoritmo que permita ingresar el precio de un 
    producto y calcule el precio final aplicando IVA del 21%.
    */

  float precio, precio_iva;
  int IVA=21;

  printf("Ingrese el precio del producto: ");
  scanf("%f", &precio);

  float porcentaje = precio*IVA/100;
  precio_iva = porcentaje+precio;

  printf("El precio final con IVA es: %.2f", precio_iva);


  return 0;
}
//Resultado 5.21---------------------------------------------------------------
//Mateo Chabra
#include <stdio.h>

int main(void) {
  float price;
  int rta;

  printf("Ingrese el precio del producto: $");
  scanf("%f/n", &price);

  rta = (price*0.21)+price;
  printf("El precio final es de: $%d", rta);

  return 0;
}

//Elias Lugo & Juan Acosta
#include <stdio.h>

int main(int argc, char *argv[]) {
  float num, precioFinal;

  printf("Ingrese el precio del producto: ");
  scanf("%f", &num);

  precioFinal = num * 1.21;
  printf("Su sueldo es %.2f", precioFinal);

  return 0;
}
//-------------------------------------------------
//FRANCIOS jonathan

#include <stdio.h>

int main(int argc, char *argv[]) {
  int num1, num2;

  printf("Ingrese dos números: ");
  scanf("%d %d", &num1, &num2);

  if(num1 > num2 ){
    printf("Este numero es mayor: %d", num1);
  }
  if(num1 < num2){
    printf("Este numero es mayor: %d", num2);
  }
  else{
    printf("Los números son iguales.");
  }
  return 0;
}

//Resultado 5.14--------------------------------------------------------------
// Fernando carrizo y franco ceglia 
#include <stdio.h>

int main(void) {
  int num;

  printf("Ingrese un numero: ");
  scanf("%d", &num);

  if(num > 0){
    printf("El numero es positivo %d", num);
  }else if(num < 0){
    printf("El numero es negativo %d", num);
  }else{
    printf("El numero es %d", num);
  }

  return 0;
}


________________________________________________
//Tiziana Ruarte 5.14
#include <stdio.h>

int main(int argc, char *argv[]) {
  int num;

  printf("Ingrese un número entero: ");
  scanf("%d", &num);

  if (num < 0)
    printf("\nEl numero ingresado es negativo");

  if (num == 0)
    printf("\nEl número es un cero");

  if(num >= 1)  
    printf("\nEl número ingresado es positivo");




  return 0;
}
________________________________________________________________
//Ismael Barrera Romero
//Ejercicio 1

#include <stdio.h>

int main(void)
{
  int edad;
  do 
  {
    printf("Ingrese la edad del usuario: ");
    scanf("%d",&edad);
  }   
  while (! (edad > 0));

  if (edad > 18 ) 
    printf("\n Usted es mayor de edad.");
  else
    printf("Usted no es mayor de edad.");



}
//Ejercicio 2 
#include <stdio.h>

int main()
{
  int n;
  printf("Digite un numero real entero: ");
  scanf("%d",&n);
  if (n>0){
    printf("\nEl numero %d, es positivo",n);
  }
  if (n<0)
  {
    printf("\nEl numero %d, es negativo",n);
  }
  if (n==0)
  {
    printf("\nEl numero es cero",n);

  }
}
//Ejercicio 3 
#include <stdio.h>
int main()
{
  int n1,n2,n3;

  printf ("Ingrese tres variables del tipo entero seguidas: ");
  scanf("%d%d%d",&n1,&n2,&n3);

  if (n1<n2 && n1<n3){

    printf("\nLa variable %d, es la menor de las tres",n1);
  }
  if (n2<n1 && n2<n3)
  {
    printf("\nLa variable %d, es la menor de las tres",n2);
  }
  if (n3<n1 && n3<n2)
  {
    printf("\nLa variable %d, es la menor de las tres",n3);
  }


  return 0;
}  
________________________________________________________________
//ernesto armando fernandez roque

#include <stdio.h>
//5.14
int main()
{

  int a;

  printf( "ingrese un numero\n");
  scanf(" %d" , &a);
  if( a > 0  ){
    printf("%d es positivo", a);
  }else
    if(a < 0 ){
      printf("%d es negativo", a);
    }else
      printf("%d es 0", a);
  return 0;
}

#include <stdio.h>
//5.15
int main()
{

  int a;

  printf( "ingrese su edad:\n");
  scanf(" %d" , &a);
  if( a >= 18  ){
    printf("Es mayor de edad");
  }else
    printf("es menor de edad");

  return 0;
}


#include <stdio.h>
//5.16
int main()
{

  int a, b;

  printf( "ingrese un numero:\n");
  scanf(" %d" , &a);
  printf( "ingrese otro numero:\n");
  scanf(" %d" , &b);

  if( a > b  ){
    printf("%d es mayor", a);
  }else
    printf("%d es el mayor", b);

  return 0;
}

#include <stdio.h>
//5.17
int main()
{

  int a, b, c;

  printf( "ingrese un numero:\n");
  scanf(" %d" , &a);
  printf( "ingrese otro numero:\n");
  scanf(" %d" , &b);
  printf( "ingrese otro numero:\n");
  scanf(" %d" , &c);

  if( a < b && a < c ){
    printf("%d es menor", a);
  }else
    if(b < a && b < c){
      printf("%d es el menor", b);
    }else
      printf("%d es el menor", c);

  return 0;
}

#include <stdio.h>
//5.18
int main()
{

  int a;

  printf( "ingrese un numero:\n");
  scanf(" %d" , &a);

  if( a%2 == 0){
    printf("%d es par", a);
  }else
    printf("%d es impar", a);


  return 0;
}


#include <stdio.h>
//5.19
int main()
{

  int a;

  printf( "ingrese su sueldo:\n");
  scanf(" %d" , &a);

  printf("su sueldo es: %d", a + (a/100*15));


  return 0;
}

#include <stdio.h>
//5.21
int main()
{

  int a;

  printf( "ingrese un precio:\n");
  scanf(" %d" , &a);

  printf("el precio final es: %d", a + (a/100*21));


  return 0;
}


#include <stdio.h>
//5.32
int main()
{

  int a, b,c;

  printf( "ingrese un numero:\n");
  scanf(" %d" , &a);
  printf( "ingrese otro numero:\n");
  scanf(" %d" , &b);

  printf("usted ingrso los numeros: %d y %d \n elija la operacion: \n suma press 1\nresta press 2 \nmultiplicacion press 3\ndivicion press 3\n", a,b);
  scanf("%d", &c);
  switch(c){
    case 1:
      printf("%d ", a+b );
      break;
    case 2:
      printf("%d ", a-b );
      break;
    case 3:
      printf("%d ", a*b );
      break;
    case 4:
      printf("%d ", a/b );
      break;
    default:
      printf("invalido");

  }

  return 0;
}




#include <stdio.h>
//5.35
int main()
{

  int a, b,c;

  printf( "ingrese el ancho del terreno:\n");
  scanf(" %d" , &a);
  printf( "ingrese el largo del terreno:\n");
  scanf(" %d" , &b);

  printf("necesita %d metros de cerco", a * 2 + b *2);


  return 0;
}

#include <stdio.h>
//6.2
int main()
{

  int a, b,c;

  printf( "ingrese una distancia:\n");
  scanf(" %d" , &a);
  printf( "ingrese otra distancia\n");
  scanf(" %d" , &b);
  printf( "ingrese otra distancia\n");
  scanf(" %d" , &c);

  if(a + b > c && a + c > b && b + c >a)
    printf("si se puede hacer un triangulo con las medidas %d, %d y %d", a,b,c);
  else
    printf("no se puede formar triangulo con las medidas %d %d %d", a,b,c);




  return 0;
}
______________________________________________________________________

//ejerccicio 5-17 Joaquin Romero
#include <stdio.h>

int main(void) {
  int n1;
  int n2;
  int n3;

  printf("ingrese 3 numeros\n");
  scanf("%d%d%d",&n1, &n2, &n3);

  if (n1<n2)
    if(n1<n3)
      printf("el numero menor es: %d\n", n1);
    else printf("el numero menor es: %d\n", n3);
  else if(n2<n3){
    printf("el numero menor es: %d\n", n2);}
  else
    printf("el numero menor es: %d\n", n3);
  return 0;
}
//ejercicio 5-15
int edad1;
printf("ingrese una edad\n");
scanf("%d",&edad1);

if(edad1==18)
  printf("es mayor de edad\n");
  else if(edad1<18){
    printf("es menor de edad\n");}
    else printf("es mayor de edad\n");
    return 0;
    }
//ejercicio 5-32
int n1, n2;
int op;

printf ("elija que operacion quiere hacer:\n");
printf ("1. Resta\n 2. Suma\n 3. Mult\n 4.Cociente\n");

scanf("%d", &op);
printf ("ingrese dos numeros enteros para que sean operados\n");
scanf("%d%d", &n1, &n2);



switch(op){
  case 1:
    int res_resta;
    res_resta= n1-n2;
    printf ("el resultado de la operacio es: %d\n", res_resta);

    break;
  case 2:
    int res_sum;
    res_sum= n1+n2;
    printf ("el resultado de la operacio es: %d\n", res_sum);
    break;
  case 3:
    int res_mult;
    res_mult= n1*n2;
    printf ("el resultado de la operacio es: %d\n", res_mult);
    break;
  case 4:
    float res_cociente;
    res_cociente= (float)n1/n2;
    printf ("el resultado de la operacio es: %f\n", res_cociente);
    break;
  default: printf("nose pa ingresaste cualquier cosa gil\n");
}
return 0;
}
//ejercicio 

______________________________________________________________________
//Tiziana Ruarte 1.15
#include <stdio.h>

int main(int argc, char *argv[]) {
  int num;

  printf("Ingrese su edad: ");
  scanf("%d", &num);

  if (num >= 18)
    printf("\nUsted es mayor de edad");

  if (num < 18)
    printf("\nUsted es menor de edad");



  return 0;
}
//5.17 Maximo Toranzo

#include <stdio.h>

int main()
{
  int n, i, o;
  printf("Ingrese tres numeros:\n");
  scanf("%d %d %d",&n, &i, &o);

  if((n < i )&&(i < o))
    printf("Menor: %d",n);

  else if((n > i )&&(i < o))
    printf("Menor: %d",i);

  else if ((n > i )&&(i > o))
    printf("Menor: %d",o);

  return 0;
}
----------------------------------------------------------------------------------
ledesma Tellez Santiago y Lema Lautaro

//5.14
#include <stdio.h>
int numero;
int main()
{
  printf("ingrese un numero entero: ");
  scanf("%d", &numero); 

  if (numero > 0) {
    printf (" es positivo");}

  else if (numero < 0) {
    printf (" es negativo");}

  else {
    printf("es 0");
  }

  return 0;
}
------------------------------------------------------------------------------------------
______________________________________________________________________
//Tiziana Ruarte 5.16
#include <stdio.h>

int main(int argc, char *argv[]) {
  int num1, num2;

  printf("Ingrese dos números enteros: ");
  scanf("%d %d", &num1, &num2);

  if (num1 > num2)
    printf("\n%d es mayor", num1);

  if (num1 < num2)
    printf("\n%d es mayor", num2);



  return 0;

  //Respuesta 5.17 fernando carrizo y franco ceglia
#include <stdio.h>

  int main(void) {
    int num1, num2, num3;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    printf("Ingrese el tercer numero: ");
    scanf("%d", &num3);

    if(num1<num2 && num1<num3){
      printf("el menor es: %d", num1);
    }else if(num2<num1 && num2<num3){
      printf("el menor es: %d", num2);
    }else{
      printf("el menor es el numero: %d", num3);
    }

    return 0;
  }
  ----------------------------------------------------------------------------------
    //Tiziana Ruarte 5.17
#include <stdio.h>

    int main(int argc, char *argv[]) {
      int num1, num2, num3;

      printf("Ingrese tres números: ");
      scanf("%d %d %d", &num1, &num2,&num3);

      if (num1 < num2 && num1 < num3)
        printf("\n%d", num1);

      if (num2 < num1 && num2 < num3)
        printf("\n%d", num2);

      if (num3 < num1 && num3  < num2)
        printf("\n%d", num3);

      return 0;
    }

  ----------------------------------------------------------------------------------
    // Gumiel Kevin
#include <stdio.h>

    int main()
    {
      int n1, n2, n3;
      printf("ingrese tres numeros diferentes:\n");
      scanf("%d\n", &n1);
      scanf("%d\n", &n2);
      scanf("%d", &n3);

      if (n1 < n2);
      if (n1 < n3)
        printf("%d es el menor de los tres numeros", n1);
      else {
        if(n2 < n3)
          printf("%d es el menor de los tres numeros", n2);
        else
          printf("%d es el menor de los tres numeros", n3);
      }
      return 0;
    }

  ----------------------------------------------------------------------------------

    //Fernando carrizo y Jean franco ceglia 5.18

#include <stdio.h>

    int main(void) {
      /*# 5.18
        Escribir un algoritmo que solicite un número entero y determine si es 
        par o impar.*/

      int num;

      printf("Ingrese el numero: ");
      scanf("%d", &num);

      if(num%2 == 0)
        printf("El numero es par");
      else
        printf("El numero es impar");

      return 0;
    }






