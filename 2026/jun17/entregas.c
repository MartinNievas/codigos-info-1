// Ejercicios 17/06/2026
codeshare.io/info1R7
1. Escribir un algoritmo que permita ingresar números enteros y calcular
su suma. El proceso debe finalizar cuando se ingrese el número cero.



3. Escribir un algoritmo que lea una secuencia de números positivos in-
gresados por el usuario y determine el valor máximo y el valor mínimo.
La secuencia termina al ingresar el número 0.

4. Escribir un algoritmo que simule una caja registradora. Se deben in-
gresar los precios de los productos de un cliente. El ingreso finaliza
cuando se digita un precio igual a 0. Calcular y mostrar el monto total
a pagar.


_____________________________________________________________________________________________________
ernesto armando fernanez roque


#include <stdio.h>
//1
int main()
{

  int a = 1;
  int suma = 0;

  while(a != 0){
    printf("ingrese un numero para sumar");
    scanf("%d", &a);
    suma = suma + a;
  }
  printf("usted sumo %d", suma);
  return 0;
}

#include <stdio.h>
//2
int main()
{

  int a = 0;
  int suma = 0;
  float promedio = 0.0;
  int cont = 0;

  while(a >= 0){
    printf("ingrese un numero para promediar: ");
    scanf("%d",&a);

    if (a >= 0){
      suma = suma + a;
      cont ++;
    }
  }

  if (cont > 0)
    promedio = ((float)suma / cont);

  printf("el promedio de los datos ingresados es: %.2f", promedio);

  return 0;
}

#include <stdio.h>
//
int main()
{

  int a = 1;
  int max = 0;
  int min = 0;
  printf("ingrese un numero");
  scanf("%d",&a);

  min = max = a;

  while(a!=0){
    printf("ingrese un numero");
    scanf("%d",&a);
    if(a > max)
      max = a;
    else if(a < min && a!=0)
      min = a;
  }

  printf("el num max es %d \nel num min es %d", max, min);

  return 0;
}
---------------------------------------------------------------------------------------------------
// lema lautaro, ledesma Santiago act.1
#include <stdio.h>
int main(void){
  int num=1;
  int suma=0;

  while (num != 0){
    printf ("ingrese un numero:  ");
    scanf ("%d", &num);
    suma = suma + num;
  }
  printf ("la suma es:  %d", suma);
  return 0;
}
----------------------------------------------------------------------------------------------------


____________________________________________________________________________________________________
FERNANDO CARRIZO 1

#include <stdio.h>

int main(int argc, char *argv[]) {
  int num=1, suma=0;
  while(num>0){

    printf("ingrese numeros enteros para sumar\n");
    printf("ingrese cero para ver el resultado\n");
    scanf("%d",&num);
    suma=suma+num;
  }
  printf("%d\n",suma);



  return 0;
}
____________________________________________________________________________________________________
//Rossi Nicolas ejercicio 1
#include <stdio.h>
int main (){
  int a = 1;
  int suma = 0;

  while(a != 0){
    printf("ingrese un numero para sumarlo:");
    scanf("%d", &a);
    suma = suma + a;    
  }
  printf("sumaste: %d", suma);
  return 0;
}
//ejercicio 3 Nicolas Rossi
#include <iostream>
using namespace std;

int main() {
  int num, maximo, minimo;

  cout << "Ingrese un numero positivo (0 para terminar): ";
  cin >> num;

  if (num == 0) {
    cout << "No se ingresaron numeros." << endl;
    return 0;
  }

  maximo = minimo = num;

  while (num != 0) {
    if (num > maximo) {
      maximo = num;
    }

    if (num < minimo) {
      minimo = num;
    }

    cout << "Ingrese un numero positivo (0 para terminar): ";
    cin >> num;
  }

  cout << "Valor maximo: " << maximo << endl;
  cout << "Valor minimo: " << minimo << endl;

  return 0;
}
____________________________________________________________________________________________________

#include <stdio.h>
// Ejercicio 1 - Quinteros Brian
int main()
{
  int num = 1, suma = 0;
  while (num!=0){
    printf("Ingrese un Número entero:  \n");
    printf("Ingrese un cero para salir del proceso: \n");
    scanf("%d", &num);
    suma = suma + num;
  }
  printf("La suma total entre todos los numeros es de: %d", suma);


  return 0;
}

#include <stdio.h>
// Ejercicio 2 - Quinteros Brian
int main()
{
  int num = 1, suma = 0, n = 0;
  float promedio;
  while (num>=0){
    printf("Ingrese un Número entero.  \n");
    printf("Ingrese un numero negativo para salir del proceso: \n");
    scanf("%d", &num);
    if (num>=0){
      suma = suma + num;
      n = n + 1;
    }
  }
  promedio = suma/n;

  printf("El promedio entre los numeros ingresados es de: %.2f", promedio);


  return 0;
}


____________________________________________________________________________________________________

//francios jonathan  1
#include <stdio.h>
int main (){
  int a = 1;
  int suma = 0;

  while(a != 0){
    printf("ingrese un numero para sumarlo:");
    scanf("%d", &a);
    suma = suma + a;    
  }
  printf("sumaste: %d", suma);
  return 0;
} 

//2
#include <iostream>
using namespace std;

int main() {
  int num, maximo, minimo;

  cout << "Ingrese un numero positivo (0 para terminar): ";
  cin >> num;

  if (num == 0) {
    cout << "No se ingresaron numeros." << endl;
    return 0;
  }

  maximo = minimo = num;

  while (num != 0) {
    if (num > maximo) {
      maximo = num;
    }

    if (num < minimo) {
      minimo = num;
    }

    cout << "Ingrese un numero positivo (0 para terminar): ";
    cin >> num;
  }

  cout << "Valor maximo: " << maximo << endl;
  cout << "Valor minimo: " << minimo << endl;

  return 0;
}

//Mateo 1
#include <stdio.h>

int main (void){

  int num, suma = 0;

  while (1) {
    printf("\nIngrese numero a Sumar: ");
    scanf(" %d", &num);
    if (num == 0){
      break;
    }
    suma = suma + num;
  }

  printf("\nSu resultado es: %d\n", suma);

  return 0;
}





________________________________________________________________________________________________________________________________________________________________________________________________________
}
-----------------------------------------------------------------------------------------------------------------------------------------------
Elias Lugo 
#include <stdio.h>

int main(int argc, char *argv[]) {

  int suma = 0 ;
  int num = 1 ;

  while (num !=0){
    printf( "ingrese un numero entero: ");
    scanf( "%d", & num);
    suma= suma + num;

  }

  printf("suma: %d",suma );


  return 0;
}



____________________________________________________________________________________________________
FERNANDO CARRIZO 2
#include <stdio.h>

int main(int argc, char *argv[]) {
  float num=1, suma=0,cont=0;
  float promedio;
  while(num>0){

    printf("ingrese numeros enteros para promediar\n");
    printf("para finalizar ingrese un numero negativo\n");
    scanf("%f",&num);
    if(num>0){
      suma=suma+num;
      cont++;
    }


  }
  promedio=suma/cont;
  printf("%.2f\n",promedio);



  return 0;
}

