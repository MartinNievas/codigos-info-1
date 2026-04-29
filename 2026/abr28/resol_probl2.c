#include<stdio.h>
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
  printf("resto de %d y %d es %d\n",num1,num2,num1%num2);
  return 0;
}
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


#include <stdio.h>

int main(void) {
  int num;
  int num2;
  printf("Ingrese el primer nùmero entero:\n");
  scanf("%d", &num);
  printf("Ingrese el segundo nùmero entero:\n");
  scanf("%d", &num2);
  printf("Suma:\n%d\n", num + num2);
  printf("Resta:\n%d\n", num - num2);
  printf("Producto:\n%d\n", num * num2);
  printf("Cociente:\n%d\n", num / num2);
  printf("Resto:\n%d\n", num % num2);



  return 0;
}

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




#include <stdio.h>

int main() {
  int num1;
  int num2;
  printf("Ingrese primer numero\n");
  scanf("%d",&num1);
  printf("Ingrese segundo numero\n");
  scanf("%d",&num2);
  printf("La suma de los numeros es:%d\n",num1+num2);
  printf("La resta de los numeros es:%d\n",num1-num2);
  printf("el producto de los numeros es:%d\n",num1*num2);
  printf("el cociente de los numeros es:%f\n",num1/num2);
  printf("el resto de los numeros es:%d",num1%num2);
  return 0;
}

//--------Martin Lucero ------------------------
#include <stdio.h>

int main()
{
  int num1, num2;

  printf("Ingrese el primer numero:\n ");
  scanf("%d",&num1);

  printf("Ingrese el segundo numero:\n ");
  scanf("%d",&num2);

  printf("La suma es: %d\n",num1+num2);
  printf("La resta es: %d\n",num1-num2);
  printf("El producto es: %d\n",num1*num2);
  printf("El cociente es: %.2f\n",(float)num1/num2);
  printf("El resto es: %d\n",num1%num2);
  return 0;
}

int main(int argc, char *argv[]) {#include <iostream>
  using namespace std;

  int main(int argc, char *argv[]) {
    float num1,num2;

    printf("ingrese un numero entero:");
    scanf("%f",&num1);

    printf("ingrese un numero entero:");
    scanf("%f",&num2);



    printf("\nsuma: %f\n", num1+num2);
    printf("\nresta:%f\n",num1-num2);
    printf("\nmultiplicacion:%f\n",num1*num2);

    printf("\ndivisiion:%f\n",num1/num2);

    //printf("\nresto:%f\n",num1%num2);

    int num1,num2;

    printf("ingrese un numero entero:");
    scanf("%d",&num1);

    printf("ingrese un numero entero:");
    scanf("%d",&num2);



    printf("\nsuma: %d\n", num1+num2);
    printf("\nresta:%d\n",num1-num2);
    printf("\nmultiplicacion:%d\n",num1*num2);

    printf("\ndivisiion:%d\n",num1/num2);

    printf("\nresto:%d\n",num1%num2);


    return 0;
  }


#include <stdio.h>

  int main(int argc, char *argv[]) {

    int PrimerNumero;
    int SegundoNumero; 
    printf("ingrese un primer numero entero: ");
    scanf("%d",&PrimerNumero);
    printf("Ingrese un segundo numero entero: ");
    scanf("%d",&SegundoNumero);
    int suma = PrimerNumero + SegundoNumero;
    int resta = PrimerNumero - SegundoNumero;#include <stdio.h>

      int main(int argc, char *argv[]) {

        float PrimerNumero;
        float SegundoNumero;

        printf("ingrese un primer numero entero: ");
        scanf("%f",&PrimerNumero);

        printf("Ingrese un segundo numero entero: ");
        scanf("%f",&SegundoNumero);

        float suma = PrimerNumero + SegundoNumero;
        float resta = PrimerNumero - SegundoNumero;
        float producto = PrimerNumero * SegundoNumero;
        float cociente = PrimerNumero / SegundoNumero;
        float resto = PrimerNumero % SegundoNumero;

        printf("La suma  es: %f\n", suma);
        printf("La diferencia es: %f\n", resta);
        printf("El producto es: %f\n", producto);
        printf("El cociente es: %f\n", cociente);
        printf("El resto es: %f\n", resto);

        return 0;

        int producto = PrimerNumero * SegundoNumero;
        int cociente = PrimerNumero / SegundoNumero;
        int resto = PrimerNumero % SegundoNumero;
        printf("La suma  es: %d\n", suma);
        printf("La diferencia es: %d\n", resta);
        printf("El producto es: %d\n", producto);
        printf("El cociente es: %d\n", cociente);
        printf("El resto es: %d\n", resto);

        return 0;
      }
    int main(void)
    {
      float num;
      float segundo_num;

      printf("Ingrese el primer numero entero: ");
      scanf("%f", &num);

      printf("Ingrese el segundo numero entero: ");
      scanf("%f", &segundo_num);

      printf("\nLa suma es: %f\n", num + segundo_num);
      printf("\nLa resta es: %f\n", num - segundo_num);
      printf("\nEl producto es: %f\n", num * segundo_num);
      printf("\nEl cociente es: %f\n", num / segundo_num);
      //printf("\nEl resto es: %f\n", num % segundo_num);

      return 0;
    }

#include <stdio.h>

    int main(int argc, char *argv[]) {
      float num1;
      float num2;
      printf("Ingrese el primer nùmero entero:\n");
      scanf("%f",&num1);
      printf("El primer nùmero ingresado es: %f\n\n", num1);

      printf("Ingrese el segundo nùmero entero:\n");
      scanf("%f",&num2);

      printf("El segundo nùmro ingresado es: %d\n\n",num2);

      printf("La suma es:%f\n",num1+num2);
      printf("L resta es:%f\n",num1-num2);
      printf("El producto es:%f\n",num1*num2);
      printf("El cociente es:%f\n",num1/num2);
      //printf("El resto es :%f\n",num1%num2);

      return 0;
    }

    //Santiago Velasco
#include <stdio.h>
    int main(void) {
      float num1, num2;
      printf("Ingrese un numero real: ");
      scanf("%f", &num1);
      printf("Ingrese otro numero real: ");
      scanf("%f", &num2);
      printf("Suma: %.03f\nResta: %.03f\nProducto: %.03f\nCociente: %.03f", num1+num2, num1-num2, num1*num2, num1/num2);
      return 0;
    }


#include <stdio.h>

    int main(void) {

      printf("suma 10 y 20 es: %d: \n", 10+20);
      float pato, b;
      printf("mandarina cantidad plz: ");
      scanf("%f", &pato);
      printf("mandarina2 cantidad plz: ");
      scanf("%f", &b);

      printf("coso suma: %.2f \n", pato+b);
      printf("coso resta: %.2f \n", pato-b);
      printf("coso mul: %.2f \n", pato*b);
      printf("coso div: %.2f \n", pato/b);
      //printf("coso res: %f \n", a%b);

      return 0;
    }

    //____________________________________________________________________________________________________________________
#include <stdio.h>

    int main(int argc, char *argv[]) {
      //Defagot lucas: tarea 2.2
      float N = 2.1;
      float n = 1.1;

      printf("Ingrese el primer numero real: ");
      scanf("%f", &n);
      printf("\nIngrese el segundo numero real: ");
      scanf("%f", &N);

      printf("\nNmeros en:");
      printf("\nResta: %f", N-n);
      printf("\nSuma: %f", N+n);
      printf("\nMultiplicacion: %f", N*n);
      printf("\nDivision: %f", N/n);

      return 0;
    }
#include <stdio.h>

    int main() {
      float num1;
      float num2;

      printf("Ingrese primer numero\n");
      scanf("%f",&num1);
      printf("Ingrese segundo numero\n");
      scanf("%f",&num2);

      printf("La suma de los numeros es:%f\n",num1+num2);
      printf("La resta de los numeros es:%f\n",num1-num2);
      printf("el producto de los numeros es:%f\n",num1*num2);
      printf("el cociente de los numeros es:%f\n",num1/(num2+0.0));

      int num3 = num1;
      int num4 = num2;
      printf("el resto de los numeros es:%d",num3 % num4);
      return 0;
    }

#include <stdio.h>

    int main(int argc, char *argv[]) {


      float num;
      float num2;

      printf("Ingrese un numero entero:");
      scanf("%f",&num);
      printf("Ingrese un segundo numero entero:");
      scanf("%f",&num2);

      printf("La suma de tu numeros es %f\n", num + num2);
      printf("La resta de tu numeros es %f\n", num - num2);
      printf("El producto de tu numeros es %f\n", num * num2);
      printf("El cociente de tu numeros es %f\n", num / num2);
      int num3 = num;
      int num4 = num2;
      printf("El resto de tu numeros es %d\n", num3 % num4); /*Tiziano :)*/

      return 0;
    }

#include <stdio.h>

    int main(int argc, char *argv[]) {

      float n1, n2, suma, resta, producto, cociente, resto;

      printf("Ingrese el primer número: ");
      scanf("%f", &n1);
      printf("Ingrese el segundo número: ");
      scanf("%f", &n2);
      suma= n1+n2;
      resta=n1-n2;
      producto=n1*n2;
      cociente=n1/n2;
      resto= n1-((int)(n1/n2)*n2);
      printf("\nLa suma de ambos números es: %.2f", suma);
      printf("\nLa resta de ambos números es: %.2f", resta);
      printf("\nEl producto entre ambos números es: %.2f", producto);
      printf("\nEl cociente entre ambos números es: %.2f", cociente);
      printf("\nEl resto entre ambos números es: %.2f", resto); 

      return 0;
    }#include <stdio.h>

    int main(int argc, char *argv[]) {

      float PrimerNumero;
      float SegundoNumero;

      printf("ingrese un primer numero entero: ");
      scanf("%f",&PrimerNumero);

      printf("Ingrese un segundo numero entero: ");
      scanf("%f",&SegundoNumero);

      float suma = PrimerNumero + SegundoNumero;
      float resta = PrimerNumero - SegundoNumero;
      float producto = PrimerNumero * SegundoNumero;
      float cociente = PrimerNumero / SegundoNumero;
      float resto = PrimerNumero % SegundoNumero;

      printf("La suma  es: %f\n", suma);
      printf("La diferencia es: %f\n", resta);
      printf("El producto es: %f\n", producto);
      printf("El cociente es: %f\n", cociente);
      printf("El resto es: %f\n", resto);

      return 0;

#include <stdio.h>

      int main(int argc, char *argv[]) {

        float PrimerNumero;
        float SegundoNumero;

        printf("ingrese un primer numero entero: ");
        scanf("%f",&PrimerNumero);

        printf("Ingrese un segundo numero entero: ");
        scanf("%f",&SegundoNumero);

        float suma = PrimerNumero + SegundoNumero;
        float resta = PrimerNumero - SegundoNumero;
        float producto = PrimerNumero * SegundoNumero;
        float cociente = PrimerNumero / SegundoNumero;
        float resto = PrimerNumero % SegundoNumero;

        printf("La suma  es: %f\n", suma);
        printf("La diferencia es: %f\n", resta);
        printf("El producto es: %f\n", producto);
        printf("El cociente es: %f\n", cociente);
        printf("El resto es: %f\n", resto);

        return 0;

#include <stdio.h>

        //Rama, Juan Ignacio el que toca el pedazo
        int main(int argc, char *argv[]) {
          float numero1;
          float numero2;

          printf("Ingrese un numero real: ");
          scanf("%f", &numero1);

          printf("Ingrese otro numero real: ");
          scanf("%f", &numero2);

          printf("La suma es: %.2f\n", numero1 + numero2 );
          printf("La resta es: %.2f\n", numero1 - numero2 );
          printf("El producto es: %.2f\n", numero1 * numero2 );
          printf("El cociente es: %.2f\n", numero1 / numero2 );


          return 0;
        }

#include <stdio.h>

        int main(int argc, char *argv[]) {
          float num1;
          float num2;
          printf("Ingrese el primer nùmero entero:\n");
          scanf("%f",&num1);
          printf("El primer nùmero ingresado es: %f\n\n", num1);

          printf("Ingrese el segundo nùmero entero:\n");
          scanf("%f",&num2);

          printf("El segundo nùmro ingresado es: %d\n\n",num2);

          printf("La suma es:%f\n",num1+num2);
          printf("L resta es:%f\n",num1-num2);
          printf("El producto es:%f\n",num1*num2);
          printf("El cociente es:%f\n",num1/num2);
          //printf("El resto es :%f\n",num1%num2);

          return 0;
        }

#include <stdio.h>

        int main(int argc, char *argv[]) {

          float num =0;
          float num2 = 0 ;

          printf ("Ingrese un numero entero: ");
          scanf ("%f", &num);

          printf ("Ingrese un segundo numero entero: ");
          scanf ("%f", &num2);

          float suma= num+num2;
          printf("Suma: %f\n", suma);

          float resta= num-num2;
          printf("Resta: %f\n", resta);

          float producto=num*num2;
          printf("Producto: %f\n", producto);

          float cociente=num/num2;
          printf("Cociente: %f\n", cociente);

          return 0;
        }


#include <stdio.h>

        int main(void) {

          printf("suma 10 y 20 es: %d: \n", 10+20);
          float pato, b;
          printf("mandarina cantidad plz: ");
          scanf("%f", &pato);
          printf("mandarina2 cantidad plz: ");
          scanf("%f", &b);

          printf("coso suma: %.2f \n", pato+b);
          printf("coso resta: %.2f \n", pato-b);
          printf("coso mul: %.2f \n", pato*b);
          printf("coso div: %.2f \n", pato/b);
          int cucaracha_eladera=pato;
          int cucaracha_heladera=b;
          printf("%d %d \n", cucaracha_eladera, cucaracha_heladera);
          printf("coso res: %d \n", cucaracha_eladera%cucaracha_heladera);

          return 0;
        }


