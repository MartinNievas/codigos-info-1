Operadores aritméticos, comparación y constantes
Parte 1 — Operadores aritméticos
Mostrar el resultado de:
12 + 4 * 2
Mostrar el resultado de:
(12 + 4) * 2
¿Qué imprime el siguiente programa?
printf("%d\n", 30 - 18 / 3);
Evaluar:
7 * 5 - 8

https://codeshare.io/info1R5
Mostrar el resultado de:
90 / (3 * 5)
  ¿Cuál es el resultado de?
  2 + 3 + 4 * 5
  Evaluar:
  (25 - 5) / 4
  Mostrar el resultado de:
  40 / 6

  https://www.youtube.com/watch?v=dQw4w9WgXcQ


  Parte 2 — Operadores de comparación
  Indicar si el resultado es verdadero (1) o falso (0):
    9 > 12
    Evaluar:
    15 <= 20
    Mostrar el resultado de:
    7 * 2 == 14
    Evaluar:
    18 / 2 > 20
    ¿Qué devuelve?
    5 + 5 != 11
    Evaluar:
    100 >= 99
    Mostrar el resultado de:
    8 * 3 < 20

#include <stdio.h>//mitchel////

    int main(void) {
      int num1=4;
      int num2=2;
      int num3=12;
      int resultado;

      resultado= num1*num2+num3;
      printf("el resultado es:%d",resultado);
      resultado=(num3+num1)*num2;
      printf("\nel resultado es:%d",resultado);
      printf("\nel resultado es:%d",30-18/3);
      resultado=7*5-8;
      printf("\nel resultado es:%d",resultado);
      resultado=90/(3*5);
      printf("\nel resultado es:%d",resultado);
      resultado=2+3+4*5;
      printf("\nel resultado es:%d",resultado);
      resultado=(25-5)/4;
      printf("\nel resultado es:%d",resultado);
      resultado=40/6;
      printf("\nel resultado es:%d",resultado);
      return 0;
    }

https://www.youtube.com/watch?v=dQw4w9WgXcQ



/* Sebastian Murtagh Horak */
#include <stdio.h>

int main(int argc, char *argv[]) {


  printf("%d + %d * %d = %d\n",12, 4, 2, 12+4*2);

  printf("el siguiente programaes igual a: %d\n", 30 - 18 / 3);
  printf("%d * %d - %d = %d\n",7, 5, 8, 7 * 5 - 8);
  printf("%d / (%d * %d) = %d\n",90, 3, 5, 90 / (3 * 5));
  printf("%d + %d + %d * %d = %d\n", 2, 3, 4, 5, 2 + 3 + 4 * 5 );
  printf("(%d - %d) / %d = %d\n",25, 5, 4, (25 - 5) / 4);
  printf("(%d / %d) = %.2f\n\n\n",40, 6, (40.0 / 6.0));



  printf ("---Parte 2 Operadores de comparación\n");
  printf ("1. 9>12 devuelve %d\n", 9 > 12);
  printf ("2. 15<=20 devuelve %d\n", 15 <= 20);
  printf ("3. 18 / 2 > 20 devuelve %d ", (18 / 2)> 20);
  printf ("4. 5+5 es diferente a 11? = %d\n", 5 + 5 != 11);
  printf ("5. 100 >= 99? = %d\n", 100 >= 99);
  printf ("6. 8 * 3 < 20 devuelve %d\n", 8 * 3 < 20);


  return 0;
}




primera parte
int operacion; 
operacion=12+4*2;
printf("El resultado de la operacion es: %d", operacion);

int operacion;
operacion=7 * 5 - 8;
printf("El resultado de la operacion es: %d", operacion);

int operacion;
operacion=90 / (3 * 5); 
printf("El resultado de la operacion es: %d", operacion);

int operacion;
operacion=2 + 3 + 4 * 5; 
printf("El resultado de la operacion es: %d", operacion);

int operacion;
operacion=(25 - 5) / 4; 
printf("El resultado de la operacion es: %d", operacion);

float operacion;
operacion=40 / 6.0; 
printf("El resultado de la operacion es: %f", operacion);
Segunda parte: 
int comparacion;
comparacion= 9 > 12;
printf("el resultado es: %d", comparacion);



#include <stdio.h>//mitchel//

int main(int argc, char *argv[]) {

  int resultado;

  resultado=9>12;
  printf("\nel resultado es:%d",resultado);
  printf("\nel resultado es:%d",15<=20);
  resultado=7*2==14;
  printf("\nel resultado es:%d",resultado);
  resultado=18/2>20;
  printf("\nel resultado es:%d",resultado);
  resultado=5+5!=11;
  printf("\nel resultado es:%d",resultado);
  resultado=100>=99;
  printf("\nel resultado es:%d",resultado);
  resultado=8*3<20;
  printf("\nel resultado es:%d",resultado);
  return 0;
}
//CODIGO DE LOS PIBARDOPOLIS

https://www.youtube.com/watch?v=dQw4w9WgXcQ

#include <stdio.h>

int main(int argc, char *argv[]) {

  printf ("%d\n", 12 + 4 *2);
  printf ("%d\n", (12 + 4) *2);
  printf("%d\n", 30 - 18 / 3);|
    //Imprime el valor 24
    printf("%d\n", 7 * 5	- 8);
  printf("%d\n", 90. / (3 * 5));
  printf("%d\n", 2 + 3 + 4 * 5);
  printf("%d\n",(25 - 5) / 4);
  printf("%f\n", 40 / 6.);
  return 0;
#include <stdio.h>//mitchel/////////

  int main(int argc, char *argv[]) {
    int num;
    int resul;
    printf("ingrese un numero que sea multiplo de 5 y 3: ");
    scanf("%d",&num);
    resul=(num%3==0)*(num%5==0);
    printf("es multiplo:%d",resul);

    return 0;
  }
#include <stdio.h>///mitchel//////
#include <math.h>
  int main(int argc, char *argv[]) {
    float num;
    printf("ingrese un numero: ");
    scanf("%f",&num);
    printf("truncado:%d\n",(int)num);
    printf("arriba:%d\n",(int)ceil(num));
    printf("abajo: %d\n",(int)floor(num));


https://www.youtube.com/watch?v=dQw4w9WgXcQ

#include <stdio.h> 
#include <math.h>

    int main(int argc, char *argv[]) {
      float real;
      printf("ingresa real:");
      scanf("%f", &real);
      printf("redondeado hacia abajo:%d\n", (int) real);
      printf("redondeado hacia arriba:%d\n", (int)ceil (real));


      return 0;
    }

#include <stdio.h>

    int main(int argc, char *argv[]) {
      float numero1, numero2, promedio;

      printf("Ingresa el primer numero real: ");
      scanf("%f", &numero1);

      printf("Ingresa el segundo numero real: ");
      scanf("%f", &numero2);

      promedio = (numero1 + numero2) / 2.0;

      printf("\nEl promedio entre %.2f y %.2f es: %.2f\n", numero1, numero2, promedio);
      return 0;
    }

#include <stdio.h>

    int main(int argc, char *argv[]) {
      int total_segundos;
      int horas, minutos, segundos;

      printf("Ingresa la cantidad de segundos: ");
      scanf("%d", &total_segundos);

      horas = total_segundos / 3600; 

      int segundos_restantes = total_segundos % 3600;

      minutos = segundos_restantes / 60;

      segundos = segundos_restantes % 60;

      printf("\n%d segundos equivalen a:\n", total_segundos);
      printf("%02d:%02d:%02d\n", horas, minutos, segundos);

      return 0;
    }

#include <stdio.h>
    int main(void) {
      //3.21 Pedro P
      int num;
      float div3;
      float div5;
      int res;
      printf("Ingrese un numero: ");
      scanf("%d", &num);
      div3 = num%3,0 == 0;
      div5 = num%5,0 == 0;
      res = div3==div5==1;
      printf("Divisibilidad por 3 y 5 (1:verdadero, 0:falso): %d", res);

      //3.22
      float num1;
      printf("\ningrese un numero real: ");
      scanf("%f",&num1);
      printf("Valor truncado:%d",(int)num1);
      printf("\nValor redondeado hacia arriba:%.0f", num1);
      printf("\nValor redondeado hacia abajo: %d", (int)num1);

      //3.23
      float num2;
      float num3;
      float calc;
      printf("Ingrese número real: ");
      scanf("%f", &num2);
      printf("Ingrese otro número real: ");
      scanf("%f", &num3);
      calc = (num2+num3)/2;
      printf("Promedio: %f", calc);
      return 0;


    }

#include <stdio.h>

    int main(int argc, char *argv[]) {

      int entero, div3, div5, resultado;

      printf("Ingrese un numero que sea divisible por 3 y 5:");
      scanf("%d",&entero);


      div3=entero%3;

      div5=entero%5;



      resultado=div3==div5;


      printf("El resultado es:%d",resultado);




      //----------------------------//----------------------------//----------------------------  
      Lorenzo.G
#include <stdio.h>

        int main(int argc, char *argv[]) {
          int A;
          printf("introduzca un num: \n");
          scanf("%d", &A);
          int tres= A%3;
          int cinco= A%5;
          printf("Es multiplo?: %d\n", tres==cinco);
          return 0;
        }
#include <stdio.h>
#include <math.h>

      int main(int argc, char *argv[]) {
        double numero;
        printf("Ingresa un numero real: ");
        scanf("%lf", &numero);
        int truncado = (int)numero;
        double redondeado_arriba = ceil(numero);
        double redondeado_abajo = floor(numero);
        printf("Valor original: %f\n", numero);
        printf("Valor truncado: %d\n", truncado);
        printf("Redondeado hacia arriba: %.2f\n", redondeado_arriba);
        printf("Redondeado hacia abajo: %.2f\n", redondeado_abajo);

        return 0;
      }
#include <stdio.h>
#include <math.h>

      int main(int argc, char *argv[]) {
        float numero1;
        float numero2;
        printf("Ingrese dos numeros: ");
        scanf("%f %f", &numero1, &numero2);
        float prom= (numero1+numero2)/2;
        printf("num: %f\n", prom);
        return 0;
      }

#include <stdio.h>

      int main(int argc, char *argv[]) {
        int segs;
        printf("Ingrese un tiempo en segundos: ");
        scanf("%d", &segs);
        int horas = segs / 3600;
        int minutos = (segs%3600) / 60;
        int segundos = segs%60;
        printf("%d horas %d minutos %d segundos\n", horas, minutos, segundos);
        return 0;
      }
      //----------------------------//----------------------------//----------------------------

      Massimo Albertinazzi

#include <stdio.h>

        int main(int argc, char *argv[]) {

          //multiplo de 3
          printf("Ingrese un numero: ");
          int num;
          scanf("%d",&num);

          //division por 3
          int div3 = num % 3;

          printf("%d %% 3 = %d \n", num, div3);

          //division por 5
          int div5 = num % 5;

          printf("%d %% 5 = %d \n", num, div5);

          printf("%d es multiplo de 3 y 5 ? = %d ",num, div3 == div5);
          return 0;
        }

#include <stdio.h>
#include <math.h>

      int main(int argc, char *argv[]) {
        printf("Ingrese un numero: ");
        float num;
        scanf("%f",&num);

        //truncar el numero
        printf("%f truncado = %d \n", num, (int)num);

        //redondeo para arriba
        printf("%f redondeo para arriba = %.2f \n", num, ceil(num));
        //redondeo para abajo
        printf("%f redondeo para arriba = %.2f \n", num, floor(num));

        return 0;
      }

#include <stdio.h>

      int main(int argc, char *argv[]) {
        printf("Ingrese dos numeros:\n");
        float num1, num2;
        scanf("%f %f", &num1, &num2);

        printf("El promedio de %f y %f = %f",num1,num2,(num1+num2)/2);

        return 0;
      }

#include <stdio.h>

      int main(int argc, char *argv[]) {
        printf("Ingresar una cantidad de segundos: \n");
        int numSeg;
        scanf("%d",&numSeg);

        int cantHs = numSeg/3600;

        int cantMin = (numSeg%3600)/60;

        int cantSeg = (numSeg%3600)%60;

        printf("Horas: %d Minutos: %d Segundos: %d \n", cantHs, cantMin, cantSeg);

        return 0;
      }



      //----------------------------//----------------------------//----------------------------


#include <stdio.h>//mitchel////
#include <math.h>
      int main(int argc, char *argv[]) {
        int num;

        printf("ingrese un numero:");
        scanf("%d",&num);
        printf("%d",num* (num>=0)- num*(num<0));

        return 0;
      }
      //Pedro
#include <stdio.h>
      int main(void) {
        int num;
        int abs;
        printf("ingrese numero entero: ");
        scanf("%d", &num);
        abs = num-2*num*(num<0);
        printf("Valor absoluto: %d", abs);
        return 0;
      }

      //códigos luli
#include <stdio.h>
#include <math.h>
      int main(int argc, char *argv[]) {
        int num1;

        printf("ingrese un número entero:");
        scanf("%d", &num1);
        num1= (num1%3)==0 && (num1%5)==0;
        printf("Resultado: %d", num1);

        float num2;
        printf("\ningrese un número real:");
        scanf("%f", &num2);
        printf("\n el número truncado hacia arriba es:%d",(int)ceil(num2));
        printf("\n el número truncado hacia abajo es:%d",(int)floor (num2));

        float num3,num4, promedio;
        printf("\ningrese un número real:");
        scanf("%f", &num3);
        printf("\ningrese otro número real:");
        scanf("%f", &num4);
        promedio= (num3+num4)/2.0;
        printf("\nel promedio es: %f", promedio);

        int segtotales,horastotales,mintotales,segrestantes;
        printf("\nIngrese la cantidad de segundos:");
        scanf("%d", &segtotales);
        horastotales= segtotales/3600; 
        segrestantes= segtotales%3600; 
        mintotales=segrestantes/60;
        segtotales=segrestantes%60;
        printf("\nLa cantidad de horas es:%d", horastotales);
        printf("\nLa cantidad de minutos es:%d", mintotales);
        printf("\nLa cantidad de segundos es:%d", segtotales);
        return 0;
      }

