//--------------------------------------------------------------------
// Ezequiel Albornoz
#include<stdio.h>
int main(void){
  int num1;
  int num2;
  printf("Ingresar primer numero: ");
  scanf("%d",&num1);
  printf("\nIngresar primer numero: ");
  scanf("%d",&num2);
  printf("\ncociente de %d y %d es %d\n",num1,num2,num1/num2);
  printf("producto de %d y %d es %d\n",num1,num2,num1*num2);
  printf("suma de %d y %d es %d\n",num1,num2,num1+num2);
  printf("resta de %d y %d es %d\n",num1,num2,num1-num2);
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
  printf("Ingrese un numero entero: ");
  scanf("%d", &num1);
  printf("Ingrese otro numero entero: ");
  scanf("%d", &num2);
  printf("Suma: %d\nResta: %d\nProducto: %d\nCociente: %d\nResto: %d", num1+num2, num1-num2, num1*num2, num1/num2, num1%num2);
  return 0;
}

//

#include <stdio.h>

int main(int argc, char *argv[]) {

  int PrimerNumero;
  int SegundoNumero; 

  printf("ingrese un primer numero entero: ");
  scanf("%d",&PrimerNumero);
  printf("Ingrese un segundo numero entero: ");
  scanf("%d",&SegundoNumero);

  int suma = PrimerNumero + SegundoNumero;
  int resta = PrimerNumero - SegundoNumero;
  int producto = PrimerNumero * SegundoNumero;
  int cociente = PrimerNumero / SegundoNumero;
  int resto = PrimerNumero % SegundoNumero;

  printf("La suma de los anteriores numeros es: %d\n", suma);
  printf("La diferencia entre los anteriores numeros es: %d\n", resta);
  printf("El producto entre los anteriores numeros es: %d\n", producto);
  printf("El cociente entre los anteriores numeros es: %d\n", cociente);
  printf("El resto entre la division entre los numeros anteriores es: %d\n", resto);

  return 0;
}

//
//Coty Pautasso y Millicay Mariana


#include <stdio.h>

int main(void) {
  int num=0;
  int num2=0;
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

  printf ("Ingrese un numero entero: ");
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

//--------Martin Lucero ----------------------------------
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
  printf("El cociente es: %f\n",(float)num1/num2);
  printf("El resto es: %d\n",num1%num2);
  return 0;
}

//____________________________________________________________
#include <stdio.h>

int main(int argc, char *argv[]) {
  //Defagot lucas: tarea 2
  int nom = 2;
  int num = 10;

  printf("Ingrese el primer numero entrero: ");
  scanf("%d", &num);
  printf("\nIngrese el segundo numero entrero: ");
  scanf("%d", &nom);

  printf("\nNumero final con resta: %d", num-nom);
  printf("\nNumero final con suma: %d", num+nom);
  printf("\nNumero final con multiplicacion: %d", num*nom);
  printf("\nNumero final cin division: %d", num/nom);

  return 0;
}


#include <stdio.h>

int main(int argc, char *argv[]) {
  int num1;
  int num2;
  printf("Ingrese el primer nùmero entero:\n");
  scanf("%d",&num1);
  printf("El primer nùmero ingresado es: %d\n\n", num1);

  printf("Ingrese el segundo nùmero entero:\n");
  scanf("%d",&num2);

  printf("El segundo nùmro ingresado es: %d\n\n",num2);

  printf("La suma es:%d\n",num1+num2);
  printf("L resta es:%d\n",num1-num2);
  printf("El producto es:%d\n",num1*num2);
  printf("El cociente es:%d\n",num1%num2);
  printf("El resto es :%d\n",num1/num2);

  return 0;
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
  printf("el cociente de los numeros es:%f\n",num1/(num2+0.0000000000000000000000000000000000000000000000000000001));
  printf("el resto de los numeros es:%d",num1%num2);
  return 0;
}


int main(int argc, char *argv[]) {
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
