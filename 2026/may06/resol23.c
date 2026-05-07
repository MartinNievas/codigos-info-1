//Ejercicio 2 Arias
#include <stdio.h>

int main(void)
{
  int e;
  float a, p;
  printf("La edad, la altura y el peso: ");
  scanf("%d %f %f", &e, &a, &p);
  printf("-La edad es: %d\n-La altura es: %.2f\n-El peso es: %.2f", e, a, p);
  return 0;
}


//Ejercicio 3 Arias
#include <stdio.h>

int main(void)
{
  char l;
  printf("Ingrese una letra: ");
  scanf("%c", &l);
  printf("El codigo ASCII de la letra ingresada es: %d", l);
  return 0;
}

---------------------------------------------------------

Kocuta, Sebastian
#include <stdio.h>


int main() {
  int edad;
  float altura, peso;

  printf("Ingrese su edad ");
  scanf("%d", &edad);

  printf("Ingrese su altura en cm ");
  scanf("%f", &altura);

  printf("Ingrese su peso ");
  scanf("%f", &peso);

  printf("Su edad es de %d años, su altura es de  %.2f cm y su peso es de %.2fkg\n", edad, altura, peso);

  return 0;
}

















## Ejercicio 0

Calcular el área de un círculo usando una constante PI.
Formula:
A = π · r²

## Ejercicio 1 
Calcular el precio final de un producto agregando IVA.
-----------------------------------------------------------------------------
//Alumno : Ismael Barrera Romero
// Ejercicio 0
#include <stdio.h>
#define pi 3.14
int main(void) 
{
  float radio;
  float area;
  printf("Digitalice el radio del circulo: ");
  scanf("%f",&radio);
  area=radio*radio*pi;
  printf("\nEl area del circulo de radio %f es de:%.2f",radio,area);

  return 0;
}

lautaro lema ej. 0 

int main(){

  float r, area;

  printf ("ingrese el radio del circulo:  ");
  scanf ("%f",&r);

  area = PI *r*r;
  printf("el area del circulo es %.2f\n",area);

  return 0;

  lautaro lema ej.1

#include <stdio.h>
#define IVA 1.21

    int main(){

      float precio,total;

      printf ("ingrese el precio:  ");
      scanf ("%f",&precio);

      total = precio * IVA;

      printf("El precio final con IVA es: %.2f",total);

      return 0;
    }
  -----------------------------------------



    -----------------------------------------------------------------------------
    Ledesma Tellez Santiago
    ejercicio 0

#include <stdio.h
#include <math.h>

    int main()
    {
      double radio, area;

      printf("introduce el radio: ");
      scanf("%lf", &radio);

      area = M_PI * radio * radio;
      printf("el area es: %.2f\n", area);

      return 0;
    }

  ejercicio 1
#include <stdio.h>

    int main()
    {
      float precioOriginal, precioFinal;
      const float IVA = 0.21;

      printf("introduce el precio del producto:");
      scanf("%f", &precioOriginal);

      precioFinal = precioOriginal * (1 + IVA);

      printf("El IVA aplicado es del: %.0f%%\n", IVA * 100);
      printf("El precio final con IVA es: %.2f\n", precioFinal);

      return 0;
    }

  Ejercicio 2

#include <stdio.h>

    int main()
    {
      int edad;
      float altura, peso;

      printf("Introduce tu edad:");
      scanf("%d", &edad);

      printf("Introduce tu altura:");
      scanf("%f", &altura);

      printf("Introduce tu peso:");
      scanf("%f", &peso);

      printf("Datos: -Edad: %d años,-Altura: %.2f metros, -Peso: %.2f Kg", edad, altura, peso);

      return 0;
    }

  Ejercicio 3

#include <stdio.h>

    int main()
    {
      char letra;
      printf("Introduce una letra o caracter: ");
      scanf(" %c", &letra);

      printf("La letra ingresada es '%c' y su codigo ASCII es: %d\n", letra, letra);
      return 0;
    }

  -----------------------------------------------------------------------------
    Ramos, Lautaro 
#include <stdio.h>
#define pi 3.14

    int main()
    {
      float r;
      printf("ingrese el valor del radio: ");
      scanf("%f, &r");
      printf("el area del circulo: %.2f", pi * r * r);
      return 0; 
    }
  -----------------------------------------------------------------------------
    //Arias EJERCICIO 0.
#include <stdio.h>
#define pi 3.14
    int main(void)
    {<	<
      float r;
      printf("Ingrese el radio del circulo: ");
      scanf("%f", &r);
      printf("El area del circulo es: %.2f", pi*r*r);
      return 0;
    }<	
  //Arias EJERCICIO 1
#include <stdio.h>
#define IVA 1.21
  int main(void)
  {
    float p;
    printf("Ingrese un precio: ");
    scanf("%f", &p);
    printf("El precio total con IVA incluido, es: %.2f", p*IVA);
    return 0;
  }

  --------------------------------------------------------------
    Sarli Fernan 
    Ejercico "1"

#include <stdio.h>

#define pi 3.14

    int main()
    {
      float r;
      printf("ingrese el radio:");
      scanf("%f", &r);
      printf("el area del circulo es: %.2f", pi * r * r);
      return 0;
    }


  Ejercico "2"


#include <stdio.h>

#define IVA 1.21

    int main()
    {
      float $;
      printf("ingrese un precio:");
      scanf("%f", &$);
      printf("el precio totral con IVA incluido es: %2.f", $ * IVA);
      return 0;
    }


  --------------------------------------------------------------------------------
    CARABAJAL PABLO - EJERCICIO 0

#include <stdio.h>

    int main(void) 
    {
      float a=0; 
      float r=0;
      float pi=3.14;

      printf("Ingrese el radio del circulo: ");
      scanf("%f",&r);

      printf("El área del circulo es: %.2f cm2",a=pi*(r*r));


      return 0;
    }
  --------------------------------------------------------------------------------
    Elias lugo 
#include <stdio.h>


#define PI 3.14

    int main(void) {

      double radio, area;

      printf("Ingresa el radio del círculo (puede tener decimales): ");
      scanf("%lf", &radio);

      area = PI * (radio * radio);

      printf("\nCon un radio de: %.2lf", radio);
      printf("\nEl área calculada es: %.4lf\n", area);

      return 0;
    }

#include <stdio.h>


#define IVA 0.21

  int main() {

    double precioBase, montoIVA, precioFinal;

    printf("Ingrese el precio base del producto: $");

    scanf("%lf", &precioBase);

    montoIVA = precioBase * IVA;
    precioFinal = precioBase + montoIVA;


    printf("\n--- RESULTADOS ---\n");
    printf("Precio inicial:  $%10.2lf\n", precioBase);
    printf("IVA (21%%):       $%10.2lf\n", montoIVA);

    printf("TOTAL A PAGAR:   $%10.2lf\n", precioFinal);

    return 0;
  }

  int main() {

    int edad;
    double altura, peso;
    char lineaFinal[100]; 

    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    printf("Ingrese su altura: ");
    scanf("%lf", &altura);

    printf("Ingrese su peso: ");
    scanf("%lf", &peso);


    sprintf(lineaFinal, "DATOS RECIBIDOS -> Edad: %d años | Altura: %.2lf m | Peso: %.1lf kg", edad, altura, peso);


    printf("\nLa cadena generada es:\n%s\n", lineaFinal);

    return 0;
  }

  ----------------------------------------------------------------------------------
    CARABAJAL PABLO
    //EJERCICIO 1

#include <stdio.h>

    int main(void) 
    {
      float monto=0;
      float total;

      printf("Ingrese el monto del producto : " ); scanf("%f",&monto);
      total=monto*1.21;

      printf("El total + IVA es: $%.2f",total);

      return 0;
    }

  ------------------------------------------------------------------------------------------------

    Federico Gonzales
    Ejercicio 2
#include <stdio.h>

    int main()
    {
      int e;
      float a, p;
      printf("Ingrese:\n ");
      printf("La edad \n La altura\n El peso:\n");

      scanf("%d %f %f", &e, &a, &p);
      printf("-La edad es: %d\n-La altura es: %.2f\n-El peso es: %.2f", e, a, p);


      return 0;
    }


























  --------------------------------------------------------------------------------
    Nicolas Rossi

    Ejercicio 0:
#include <stdio.h>	
#define pi 3.14

    int main()
    {
      float r;
      printf("ingrese el radio:");
      scanf("%f", &r);
      printf("el area del circulo es: %.2f", pi * r * r);
      return 0;

    }

  Ejercicio 1:

#include <stdio.h>
#define IVA 1.21
    int main(void)
    {
      float p;
      printf("Ingrese un precio: ");
      scanf("%f", &p);
      printf("El precio total con IVA incluido, es: %.2f", p*IVA);

      return 0;
    }
  Ejercicio 2:
#include <stdio.h>
    float edad;
  float altura;
  float peso;

  int main(void){
    printf("Ingrese su edad: ");
    scanf("%f", &edad);
    printf("Ingrese su altura en cm: ");
    scanf("%f", &altura);
    printf("Ingrese su peso en kg: ");
    scanf("%f", &peso);
    printf("su edad:%.f \nsu altura:%.fcm\nsu peso:%.fkg\n", edad, altura, peso);

    return 0;


  }

  Ejercicio 3:
#include <stdio.h>
    int main(void){

      char dl;
      printf("Ingrese una letra: ");
      scanf("%c",&dl);
      printf("El codigo ASCII de la letra ingresada es: %d",dl);


      return 0;
    }


  ---------------------------------------------------------------------------------------
    //EJERCICIO 0
    //CARRIZO FERNANDO
#include <stdio.h>

#define PI 3.14

    int main(void)
    {
      float r, AREA;
      printf("Ingrese el radio del circulo: " );
      scanf("%f", &r);
      AREA = r*r*PI;
      printf("El area del circulo es: %.2f\n", AREA);
      return 0;
    }
  ------------------------------------------------------------------------




    // Ejercicio 0 
    // Barrera Romero Ismael 
#include <stdio.h>
#define pi 3.14
    int main(void) 
    {
      float radio;
      float area;
      printf("Digitalice el radio del circulo: ");
      scanf("%f",&radio);
      area=radio*radio*pi;
      printf("\nEl area del circulo de radio %f es de:%.2f",radio,area);

      return 0;
    }
  //
  ---------------------------------------------------------------------------------------
    jonathan francios
    ejercicio 0

#include <stdio.h>
#define pi 3.14
    int main(void)
    {
      float r;
      printf("Ingrese el radio del circulo: ");
      scanf("%f", &r);
      printf("El area del circulo es: %.2f", pi*r*r);

      return 0;
    }

  ejercicio 1
#include <stdio.h>
#define IVA 1.21
    int main(void)
    {
      float p;
      printf("Ingrese un precio: ");
      scanf("%f", &p);
      printf("El precio total con IVA incluido, es %.2f", p*IVA);
      return 0;
    }

  ejercicio 2 
#include <stdio.h>
    int main(void)
    {
      int e;
      float a,p;
      printf("La edad, la altura y el peso: ");
      scanf("%d%f%f",&e,&a,&p);
      printf("-La edad es:%d\n-La altura es:%.2f\n-El peso es:%.2f",e,a,p);


      return 0;
    }

  ejercicio 3

#include <stdio.h>
    int main(void){

      char l;
      printf("Ingrese una letra: ");
      scanf("%c",&l);
      printf("El codigo ASCII de la letra ingresada es: %d",dl);


      return 0;
    }

  ---------------------------------------------------------------------------------------


#include <stdio.h>
#define pi 3.14

    int main(int argc, char *argv[]) {

      float radio;

      printf("Ingrese valor del radio: ");
      scanf("%f", &radio);
      printf("el area del circulo: %2.f", pi * radio * radio);

      return 0;
    }

  ---------------------------------------------------------------------------------------
    Ernesto Armando Fernandez Roque
#include <stdio.h>
#include <math.h>
#define PI 3.14
    int main(void)
    {

      float r,a;
      printf("ingreseel radio del circulo: ");

      scanf("%f",&r);
      a=PI*r*r;

      printf("el circulo de radio %.2f tiene un area %.2f",r,a);


      return 0;
    }
  --

#include <stdio.h>
#include <math.h>
#define IVA 1.21
    int main(void)
    {

      int p;
      printf("ingrese el preicio: ");

      scanf("%d",&p);
      p=p*IVA;

      printf("el precio con IVA es: %d",p);


      return 0;
    }
  --

    int main(void)
    {

      int e,a,p;
      printf("ingrese su edad: ");
      scanf("%d",&e);
      printf("ingrese su altura en cm: ");
      scanf("%d",&a);
      printf("ingrese su peso en kg: ");
      scanf("%d",&p);


      printf("Usted tiene %d anos \n mide %d cm de altura \n pesa %d kg",e,a,p);


      return 0;
    }
  --

#include <stdio.h>
#include <math.h>

    int main(void)
    {
      char a;
      printf("ingrese una letra: ");
      scanf("%c",&a);


      printf("El codigo accii de: %c \t es: %d",a,a);

      return 0;
    }






  ____________________________________________________________________________________________


    //Ejercicio 0
    //Calcular el area de un circulo usando una constante PI.
    //Fòrmula: A = PI + r al cuadrado
    //QUinteros Brian

#include <iostream>

#define PI 3.14

    int main(void) {
      float radio,area; 
      printf("Ingrese el Radio del Circulo: ");
      scanf("%f", &radio);
      area = PI * radio*radio;
      printf("El Area del circulo es: %f", area	);
      return 0;
    }
  ---------------------------------------------------------------------------------------
    //Tiziana Ruarte
#include <stdio.h>
#define IVA 1.21

    int main(int argc, char *argv[]) {
      float P;
      printf("Ingrese un precio: ");
      scanf("%f", &P);
      printf("El precio total con IVA incluido es: %.2f", P*IVA);
      return 0;
    }
  ---------------------------------------------------------------------------------------
    //Facundo Acevedo

    include <stdio.h>
#define pi 3.14

    intmain (void) 
    {
      float r;
      printf("ingrese el valor del radio: ");
      scanf("%f", &r);
      printf("el area del circulo: %.2f", pi * r * r);
      return 0

        //Facundo Acevedo
#include <stdio.h>
#define IVA 1.21

        int main(int argc, char *argv[]) {
          float P;
          printf("Ingrese un precio: ");
          scanf("%f", &P);
          printf("El precio total con IVA incluido es: %.2f", P*IVA);
          return 0;
        }

      -----------------------------------------------------------------------------------------------------
        //Molina Mateo Gabrile
#include <stdio.h>
#include <math.h>
#define pi 3.14
        int main()
        {
          float r;
          printf("radio del circulo:");
          scanf("%f",&r);

          printf("El area es: %.2f\n",pi*r*r);

          return 0;
        }
      -------------------------------------------------------------------------------------------------------
        Ejercicio 2:
#include <stdio.h>
#define IVA 1.21

        int main(int argc, char *argv[]) {

          float precio;
          printf("ingrese precio: ");
          scanf("%f", &precio);
          printf("el precio total con iva es: %2.f", precio * IVA);

          return 0;
        }
      ---------------------------------------------------------------------------------------------------------
        //Mateo Chabra EJERCICIO 2 y 3.

#include <stdio.h>


        int main(void)

        {

          int edad, altura, peso;
          char letra;

          printf("Ingrese su edad: ");

          scanf("%d", &edad);

          printf("\nIngrese su altura: ");

          scanf("%d", &altura);

          printf("\nIngrese su edad: ");

          scanf("%d", &peso);

          printf("\nEdad: %d\nAltura: %d\nPeso: %d\n", edad, altura, peso);

          //letra a ASCII

          printf("Ingrese el caracter: ");

          scanf(" %c", &letra);

          printf("\nCaracter en ASCII: %d", letra);

          return 0;

        }



      ---------------------------------------------------------------------------------------------------------------------------------------



        /*
           Alumno: Ismael Barrera Romero
           Ejercicio 3 
           Altura,peso y edad impresas en una sola linea de caracteres
           */
#include <stdio.h>
        int main(void) 
        {
          //Inicializacion de variables

          float edad,peso,altura;

          printf("Digitalice la edad,peso y altura del usuario: ");
          scanf("%f%f%f",&edad,&peso,&altura);

          printf("\nLa edad es de %f,el peso es de %f y el peso es de %f ",edad,peso,altura);

          return 0;
        }



      ---------------------------------------------------------------------------------------------------------------------------------------
        //ismael Barrera Romero
        //Ejercicio 3
#include <stdio.h>

        int main(void) 
        {
          char a;
          printf("Digitalice un caracter a gusto: ");
          scanf(" %c",&a);
          printf("El caracter %c, corresponde en ascii con: %d",a);

          return 0;
        }


      ---------------------------------------------------------------------------------------------------------------------------------------


        <<	





















        --------------------------------------------------------------
        //Ejercicio 2
        //Pedir edad, altura, preso. Mostrar todo en un printf
        //Ejercicio 3
        //Al ingresar un caracter decolver el valor aski
        //Quinteros Brian

#include <iostream>

        int main(void) {
          int edad;
          float altura,peso; 
          printf("Ingrese la edad: ");
          scanf("%d", &edad);
          printf("Ingrese la altura en cm: ");
          scanf("%f", &altura);
          printf("Ingrese el peso en kg: ");
          scanf("%f", &peso);
          printf("El Usuario tiene: %d de edad, %.2f de altura y %.2f de peso", edad,altura,peso);
          return 0;<	
        }

      //Ejercicio 3
      //Al ingresar un caracter decolver el valor aski
      //Quinteros Brian

#include <iostream>

      int main(void) {
        char caracter;
        printf("Ingrese Un caracter para devolver el valor ascii: ");
        scanf("%c", &caracter);
        printf("El valor del caracter en ascii es de: %d", caracter);
        return 0;
      }

      -------------------------------------------------------------------------------------------------------


        //EJERCICIO 2
        //CARABAJAL PABLO
#include <stdio.h>

        int main(void) 
        {
          int edad;
          float altura;
          float peso;

          printf("Ingrese su edad: "); scanf("%d",&edad);
          printf("Ingrese su altura:"); scanf("%f",&altura);
          printf("Ingrese su peso :"); scanf("%f",&peso);

          printf("\n-Edad: %d\n-Altura: %.2f m\n-Peso: %.2f Kg",edad,altura,peso);

          return 0;
        }
      -------------------------------------------------------------------------------------------------------------
        //EJERCICIO 3
        //CARABAJAL PABLO
#include <stdio.h>

        int main(void) 
        {
          char letra;

          printf("Ingreser una letra: "); scanf("%c",&letra);
          printf("El equivalente en ASCII es: %d",letra);

          return 0;
        }

      -------------------------------------------------------------------------------------------------------------------
        //Franco Villarreal
#include <stdio.h>

        int main(int argc, char *argv[]) {

          float edad, peso, altura;

          printf("imprimir datos:");
          scanf("%f%f%f", &edad, &peso, &altura);
          printf("los datos son edad:%f, peso:%f, altura:%f", edad, peso, altura);

          return 0;
        }
      -------------------------------------------------------------------------------------------------------------------

        Ejercicio 2
        //Facundo Acevedo
#include <stdio.h>

        int main (void)
        {

          int edad;
          float altura;
          float peso;

          printf("ingrese su edad: "); scanf("%d",&edad);
          printf("ingrese su altura: "); scanf("%f",&altura);
          printf("ingrese su peso: "); scanf("%f",&peso);

          printf("\n-edad: %d\n-altura: %.2f m\n-peso: %.2 kg",edad,altura,peso);

          return 0;

          //-------------------------------------------------------------------------------------------------------------------
          /Ejercicio 2
            -------------------------------------------------------------------------------------------------------------------
            //Mateo Chabra EJERCICIO 2 y 3.

#include <stdio.h>


            int main(void)

            {

              int edad, altura, peso;
              char letra;

              printf("Ingrese su edad: ");

              scanf("%d", &edad);

              printf("\nIngrese su altura: ");

              scanf("%d", &altura);

              printf("\nIngrese su edad: ");

              scanf("%d", &peso);

              printf("\nEdad: %d\nAltura: %d\nPeso: %d\n", edad, altura, peso);

              //letra a ASCII

              printf("Ingrese el caracter: ");

              scanf(" %c", &letra);

              printf("\nCaracter en ASCII: %d", letra);

              return 0;

            }
          --------------------------------------------------------------------------------------------------------------------
            //EJERCICIO 2
            //CARABAJAL PABLO
#include <stdio.h>

            int main(void) 
            {
              int edad;
              float altura;
              float peso;

              printf("Ingrese su edad: "); scanf("%d",&edad);
              printf("Ingrese su altura:"); scanf("%f",&altura);
              printf("Ingrese su peso :"); scanf("%f",&peso);

              printf("\n-Edad: %d\n-Altura: %.2f m\n-Peso: %.2f Kg",edad,altura,peso);

              return 0;
            }

          -------------------------------------------------------------------------------------------------------------------
            // Mateo Casas
            // Ejercicio 2

#include <stdio.h>

            int main(void)
            {
              int edad, altura, peso;

              printf("Ingrese Edad: ");
              scanf(" %d", &edad);
              printf("\nIngrese Altura: ");
              scanf(" %d", &altura);
              printf("Ingrese Peso: ");
              scanf(" %d", &peso);

              printf("\n- edad: %d \n- altura: %d \n- peso: %d\n", edad, altura, peso);

              return 0;
            }



          -------------------------------------------------------------------------------------------------------------------
            /Ejercicio 3
            ----------------------------------------------------------------------------------------------------------------------

#include <stdio.h>

            int main()
            {
              int C = 0;

              printf("\ningrese un caracter: ");
              scanf("%c",&C);
              printf("ascii = %d", C);

              return 0;
            }

          //EJERCICIO 3
          //CARABAJAL PABLO
#include <stdio.h>

          int main(void) 
          {
            char letra;

            printf("Ingreser una letra: "); scanf("%c",&letra);
            printf("El equivalente en ASCII es: %d",letra);

            return 0;
          }


          -----------------------------------------------------------------------------------------------------------------

            //Ejercicio 2 Arias
#include <stdio.h>

            int main(void)
            {
              int e;
              float a, p;
              printf("La edad, la altura y el peso: ");
              scanf("%d %f %f", &e, &a, &p);
              printf("-La edad es: %d\n-La altura es: %.2f\n-El peso es: %.2f", e, a, p);
              return 0;
            }


          //Ejercicio 3 Arias
#include <stdio.h>

          int main(void)
          {
            char l;
            printf("Ingrese una letra: ");
            scanf("%c", &l);
            printf("El codigo ASCII de la letra ingresada es: %d", l);
            return 0;
          }

          -----------------------------------------------------------------------------------------------------------------

            //Ejercicio 3
            // Mateo casas

#include <stdio.h>

            int main(void)
            {
              char letra;

              printf("\nIngrese su letra: ");
              scanf(" %c", &letra);

              printf("\nSu letra en ASCII es: %d\n", letra);

              return 0;
            }














        }

      ----------------------------------------------------------------------------------------------------------------
        //Ejercicio 4
        Franco Villarreal 

#include <stdio.h>

        int main(int argc, char *argv[]) {

          char letra;

          printf(" ingresa una letra:");
          scanf(" %c", &letra);
          printf(" el valor de ASCII es: %d", letra);

          return 0;
        }

#MOLINA BRAIAN IVAN413292
#include <stdio.h>
#define PI 3.14

      int main(void) {
        float radio, area;

        printf("ingrese radio: ");
        scanf("%f", &radio);

        area = PI * radio * radio;

        printf("el area de la circunferencia es: %.2f", area);

        return 0;
      }


      -----------------------------

#include <stdio.h>
#define IVA 1.21

        int main(void) {
          float precio, final;

          printf("ingrese precio: ");
          scanf("%f", &precio);

          final = precio * IVA;

          printf("El precio + IVA es: %.2f", final);

          return 0;
        }

      -----------------------------
#MOLINA BRAIAN IVAN413292
#include <stdio.h>

        int main(void) {
          int edad, peso, altura;

          printf("ingrese: \n");
          printf("-edad \n");
          printf("-altura \n");
          printf("-peso \n");
          scanf("%d", &edad);
          scanf("%d", &altura);
          scanf("%d", &peso);

          printf("la edad es: %.2d",edad "la altura es: %.2d",altura "el peso es: %.2d",peso);

          return 0;
        }


      -----------------------------
#MOLINA BRAIAN IVAN413292
#include <stdio.h>

        int main(void) {
          int letra;
          printf("ingrese una letra: \n");
          scanf("%c", &letra);

          printf("segun la letra ""%c"" ingresada corresponde al codigo ASCII %d\n", letra, letra );
          return 0;
        }





