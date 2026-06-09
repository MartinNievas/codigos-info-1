
//5.14--------------------------------------------//--------------------------------------------
#include <stdio.h>
//Llanqui Yucra Alex
int main(int argc, char *argv[]) {
  int num1;

  printf("Ingrese un numero entero\n");
  scanf("%d",&num1);

  if(num1 > 0){
    printf("Es positivo\n");
  }

  if(num1 < 0)
  {
    printf("Es negativo\n");
  }

  if(num1 == 0)
  {
    printf("Es cero\n");
  }

  return 0;
}
//Navarro Sebastiàn
#include <stdio.h>

int main(int argc, char *argv[]) {
  int num;
  printf("Ingerese unnùmero entero\n");
  scanf("%d",&num);
  if(num>0)
    printf("El unnùmero ingresado es positivo\n");

  if(num==0)
    printf("El unnùmero ingresado es cero\n");

  if(num<0)
    printf("El unnùmero ingresado es negativo\n");

  return 0;
}
//Molina Martín
#include <stdio.h>

int main(void){
  int entero;

  printf("Ingrese el numero entero:");
  scanf("%d", &entero);

  if (entero > 0){ printf("El número es positivo") } if (entero < 0){ printf("El número es negativo") } if (entero == 0){ printf("El número es igual a cero") }


  return 0;
}

//Santiago Velasco
#include <stdio.h>
int main(int argc, char *argv[]) {
  int num;
  printf("Ingrese un numero entero ");
  scanf("%d", &num);
  if (num<0){
    printf("Negativo");
  }if (num>0){
    printf("Positivo");
  }if (num==0){
    printf("Nulo");
  }
  return 0;
}
//Nicolas Candia
#include <stdio.h>

int main(int argc, char *argv[]) {
  int numero;
  printf("porfavor, ingrese un numero:");
  scanf("%d", &numero);
  if (numero < 0){
    printf("El numero es negativo\n");
  }
  if (numero == 0){
    printf("el numero es 0\n");
  }
  if (numero > 0){
    printf("el numero es positivo");
  }
  return 0;
}


#include <stdio.h>

int main(int argc, char *argv[]) {
  int num1;
  printf("ingrese un numero entero: ");
  scanf("%d",&num1);
  if(num1 >=1){
    printf("el numero es positivo");
  }
  if(num1 <=-1){
    printf("el numero es negativo");
  }
  if(num1 == 0){
    printf("el numero es cero");
  }


  return 0;
}


//5.15--------------------------------------------//--------------------------------------------
//Navarro Sebastiàn
#include <stdio.h>

int main(int argc, char *argv[]) {
  int num;
  printf("Ingrese la edad\n");
  scanf("%d",&num);
  if(num>=18)
    printf("La persona es mayor de edad\n");
  else
    printf("La persona es menor de edad\n");


  return 0;
}

//Molina Martín
#include <stdio.h>

int main(void){
  int edad;

  printf("Ingrese su edad:");
  scanf("%d", &edad);

  if (edad >= 18){
    printf("Es mayor de edad");
  }else{
    printf("Es menor de edad");
  }


  return 0;
}

#include <stdio.h>

int main(int argc, char *argv[]) {
  int Edad;
  printf ("ingrese su edad a continuación: ");
  scanf ("%d", &Edad);
  if (Edad >= 18){
    printf ("\nUsted es mayor de edad");
  }else{
    printf("\nUsted es menor de edad");
  }

  if (Edad >= 18)
  {
    printf ("\nUsted es mayor de edad");
  }
  else
  {
    printf("\nUsted es menor de edad");
  }

  return 0;
}
//-- joaquin --
#include <stdio.h>

int main()
{
  int numero;
  printf("ingrese un numero entero:");
  scanf("%d", &numero);
  if (numero == 0){
    printf("el numero es cero");
  }
  else if (numero > 0){
    printf("el numero es positivo");
  }
  else {
    printf("el numero es negativo");
  }
  return 0;
}

#include <stdio.h>

int main(void) {
  int num1;
  printf("Ingrese un numero entero ");
  scanf("%d",&num1);
  if(num1>0){
    printf("Su numero es Positivo");
  }
  if(num1==0){
    printf("Su numero es cero");
  }
  if(num1<0){
    printf("su numero es negativo");
  }
  return 0;
}

//Santiago Velasco
#include <stdio.h>
int main(int argc, char *argv[]) {
  int edad;
  printf("Ingrese su edad ");
  scanf("%d", &edad);
  if (edad<18){
    printf("Menor de edad");
  }if (edad>17){
    printf("Mayor de edad");
  }
  return 0;
}

#include <stdio.h>

int main(void) {
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
//Nicolas Candia
#include <stdio.h>

int main(int argc, char *argv[]) {
  int edad;
  printf("porfavor, ingrese su edad:");
  scanf("%d",&edad);

  if (edad < 18){
    printf("eres menor de edad");
  }
  if (edad >= 18){
    printf("eres mayor de edad");
  }
  return 0;
}

#include <stdio.h>
//5.15
int main(void) {
  int edad;

  printf("ingrese su edad: ");
  scanf("%d",&edad);
  if(edad >=18){
    printf("usted es mayor");
  }
  else{
    printf("usted es menor");
  }

  return 0;
}



//5.16--------------------------------------------//--------------------------------------------
//Molina Martín
#include <stdio.h>

int main(void){
  int n1, n2;

  printf("Ingrese ambos números enteros:");
  scanf("%d%d", &n1, &n2);

  if (n1 > n2){
    printf("El primer número es mayor");
  }else if (n1 < n2){
    printf("El segundo número es mayor");
  }else
    printf("Los números son iguales");


  return 0;
}
// ---- joaquin
#include <stdio.h>

int main()
{
  int edad;
  printf("ingrese la edad:");
  scanf("%d", &edad);

  if (edad >= 18){
    printf("es mayor de edad");
  }
  else {
    printf("es menor de edad");
  }
}
#include <stdio.h>

int main(void) {
  int num1;
  printf("Ingrese su edad ");
  scanf("%d",&num1);
  if(num1>=18){
    printf("usted es mayor de edad");
  }
  if(num1<18){
    printf("usted es menor de edad");
  }

  return 0;
}

//Santiago Velasco
#include <stdio.h>
int main(int argc, char *argv[]) {
  int n1, n2;
  printf("Ingrese dos numeros enteros \n");
  scanf("%d", &n1);
  scanf("%d", &n2);
  if (n1<n2){
    printf("El mayor es: %d", n2);
  }if (n1>n2){
    printf("El mayor es: %d", n1);
  }
  return 0;
}
// -------------- joaquin
#include <stdio.h>

int main()
{
  int num1, num2;
  printf("ingrese el primer numero entero:");
  scanf("%d", &num1);
  printf("ingrese el segundo numero entero:");
  scanf("%d", &num2);
  if (num1 > num2){
    printf("el primer numero es mayor");
  }
  else {
    printf("el segundo numero es mayor");
  }

}
#include <stdio.h>

int main(void) {
  int num1;
  int num2;
  printf("Ingrese primer numero ");
  scanf("%d",&num1);
  printf("Ingrese segundo numero ");
  scanf("%d",&num2);
  if(num1>num2){
    printf("num1 es mayor");
  }
  else
    printf("num2 es mayor");

  return 0;
}





#include <stdio.h>

int main(int argc, char *argv[]) {
  int num1, num2;
  printf("Ingrese el primer numero a continuación: ");
  scanf(" %d", &num1);
  printf("Ingrese el segundo numero a continuacion: ");
  scanf(" %d", &num2);
  if (num1 == num2) {
    printf ("ambos numeros son iguales");
  } else {
    printf ("el numero mayor es %d",num1>num2?num1:num2);
  }

  return 0;
}

//Nicolas Candia
#include <stdio.h>

int main(int argc, char *argv[]) {
  int num1, num2;
  printf("porfavor, ingrese 2 numeros:");
  scanf("%d %d", &num1, &num2);

  if (num1 > num2){
    printf("%d es mayor a %d\n", num1, num2);
  }
  if (num2 > num1){
    printf("%d es mayor a %d\n", num2, num1);
  }
  if (num1 == num2){
    printf("los numeros son iguales\n");

  }
  return 0;
}



//5.17--------------------------------------------//--------------------------------------------
//Santiago Velasco
#include <stdio.h>
int main(int argc, char *argv[]) {
  int n1, n2, n3;
  printf("Ingrese tres numeros enteros \n");
  scanf("%d", &n1);
  scanf("%d", &n2);
  scanf("%d", &n3);
  if ((n1<n2)&&(n1<n3)){
    printf("El menor es: %d", n1);
  }if ((n2<n1)&&(n2<n3)){
    printf("El menor es: %d", n2);
  }if ((n3<n1)&&(n3<n2)){
    printf("El menor es: %d", n3);
  }
  return 0;
}
//Nicolas Candia

#include <stdio.h>

int main(int argc, char *argv[]) {
  int num1, num2, num3;
  printf("porfavor, ingrese 3 numeros:");
  scanf("%d %d %d",&num1 ,&num2 ,&num3);
  if (num1 < num2 && num1 < num3){
    printf("%d es el menor de los 3 numeros\n", num1);
  }
  if (num2 < num1 && num2 < num3){
    printf("%d es el menor de los 3 numeros\n", num2);
  }
  if (num3 < num2 && num1 > num3){
    printf("%d es el menor de los 3 numeros\n", num3);
  }
  return 0;
}

//Molina Martín
#include <stdio.h>

int main(void){
  int n1, n2, n3;

  printf("Ingrese tres números enteros:");
  scanf("%d %d %d", &n1, &n2, &n3);

  if (n1 < n2 && n1 < n3){
    printf("El primer número es menor: %d", n1);
  }else if (n1 > n2 && n2 < n3){
    printf("El segundo número es el menor: %d", n2);
  }else if (n1 > n3 && n2 > n3){
    printf("El tercer número es el menor: %d", n3);
  }else
    printf("Los números son iguales");


  return 0;
}

int main(void){
  int numero_entero_cocodrilo_helicoptero, la_cobra, el_davo;
  printf("ingrese numero plz: ");
  scanf(" %d %d %d", &numero_entero_cocodrilo_helicoptero, &la_cobra, &el_davo);
  if (numero_entero_cocodrilo_helicoptero > la_cobra){
    if (numero_entero_cocodrilo_helicoptero > el_davo){
      printf("el primer numero es mas grande osea el: %d", numero_entero_cocodrilo_helicoptero);
    }
    if (numero_entero_cocodrilo_helicoptero < el_davo){
      printf("el tercer numero es el mas grande osa: %d", el_davo);
    }
  }
  if (numero_entero_cocodrilo_helicoptero < la_cobra){
    if (la_cobra > el_davo){
      printf("el segundo numero es mas grande osea el: %d", la_cobra);
    }
    if(la_cobra < el_davo){
      printf("el tercero es mas grande osea el: %d", el_davo);
    }
  }


  return 0;
}
//--------------------------------------------//--------------------------------------------
//Rios Andres y Marikena Gutierrez
#include <stdio.h>

int main(int argc, char *argv[]) {

  int num;
  printf("Ingrese un numero entero:");
  scanf("%d", &num);
  if(num>0){
    printf("El numero es positivo");
  }
  if (num<0){
    printf("El numero es negativo");
  }	
  if (num==0){
    printf("El numero es igual a 0");
  }
  return 0;
}

#include <stdio.h>

int main(int argc, char *argv[]) {
  int edad;
  printf("Ingrese su edad: ");
  scanf("%d", &edad);

  if (edad<18){
    printf("Sos menor de edad, anda a ver los dibujitos.");
  }
  else if (edad>=18){
    printf("Usted es mayor de edad, puede ir preso.");
  }

  return 0;
}

//--------------------------------------------//--------------------------------------------

//Molina Martín
#include <stdio.h>

int main(void){
  int entero;

  printf("Ingrese un número entero: ");
  scanf("%d", &entero);

  if (entero % 2 == 0){
    printf("El número es par");
  }else
    printf("El número es impar");


  return 0;
}

//Santiago Velasco
#include <stdio.h>
int main(int argc, char *argv[]) {
  int num;
  printf("Ingrese un numero entero \n");
  scanf("%d", &num);
  if (num%2==0){
    printf("%d es par", num);
  }if (num%2==1){
    printf("%d es impar", num);
  }
  return 0;
}

int pichosaurio, papa=0;
printf("ingrese numero plz: ");
scanf(" %d", &pichosaurio);
papa = pichosaurio%2;
if (papa == 0){
  printf("el numero es multiplo par");
}
if (papa != 0){
  printf("el numero es impar ");
}

return 0;


//5.19--------------------------------------------//--------------------------------------------
//Molina Martín
#include <stdio.h>

int main(void){
  float sueldo_basico, sueldo_final;

  printf("Ingrese su sueldo basico: ");
  scanf("%f", &sueldo_basico);

  sueldo_final = sueldo_basico + (sueldo_basico * 0.15);

  printf("\nEl sueldo final del empleado es: %0.2f", sueldo_final);

}

//--------------- joaquin
#include <stdio.h>

int main()
{
  int num1, num2, num3;
  printf("ingrese el primer numero entero:");
  scanf("%d", &num1);
  printf("ingrese el segundo numero entero:");
  scanf("%d", &num2);
  printf("ingrese el tercer numero entero:");
  scanf("%d", &num3);

  if ((num1 == num2) && (num2 == num3)){
    printf("Los tres numeros son iguales.\n");
  }
  else if ((num1 <= num2) && (num1 <= num3)){
    printf("El menor es: %d\n", num1);
  }
  else if ((num2 <= num1) && (num2 <= num3)){
    printf("El menor es: %d\n", num2);
  }
  else {
    printf("El menor es: %d\n", num3);
  }

  return 0;
}

//------------------- joaquin
#include <stdio.h>

int main()
{
  int numero;
  printf("ingrese un numero:");
  scanf("%d", &numero);
  if (numero % 2 == 0){
    printf("el numero es par");
  } else {
    printf("el numero es impar");
  }

  return 0;
}

//Santiago Velasco
#include <stdio.h>
int main(int argc, char *argv[]) {
  float sueldo;
  printf("Ingrese su sueldo ");
  scanf("%f",&sueldo);
  printf("Su sueldo final es: %0.3f", sueldo*1.15);
  return 0;
}


//5.21--------------------------------------------//--------------------------------------------  
//Molina Martín
#include <stdio.h>

int main(void){
  float precio, precio_final;

  printf("Ingrese el precio del producto:");
  scanf("%f", &precio);

  precio_final = precio + (precio * 0.21);

  printf("El precio es: %0.2f ---> Precio final con IVA[21%]: %0.2f", precio, precio_final);
}

--------------------------------------------------------------------
#include <stdio.h>
//defa y mari_terreneitor

int main(int argc, char *argv[]) {

  int n1,n2,n3;
  printf("Ingrese un numero:");
  scanf("%d", &n1);
  printf("Ingrese un segundo numero:");
  scanf("%d", &n2);
  printf("Ingrese un tercer numero:");
  scanf("%d", &n3);

  if (n1 > n3 && n2 > n3){
    printf("%d es el menor", n3);
  }
  if (n1 < n2 && n1 < n3){
    printf("%d es el menor", n1);
  }
  if (n1 > n2 && n2 < n3){
    printf("%d es el menor", n2);
  }

  return 0;
}
//----------------- joaquin
#include <stdio.h>

int main()
{
  float sueldo;
  printf("ingrese su sueldo:");
  scanf("%f", &sueldo);
  float sueldofinal = sueldo * 1.15;
  printf("su sueldo final sera: %.2f\n", sueldofinal);

  return 0;
}
//Santiago Velasco
#include <stdio.h>
int main(int argc, char *argv[]) {
  float precio;
  printf("Ingrese el precio ");
  scanf("%f",&precio);
  printf("Su precio con IVA es: %0.3f", precio*1.21);
  return 0;
}


