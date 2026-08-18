// Ejercicios 13-08//lo amo profe
a) float celsiusToFahrenheit(float celsius): Recibe una tempe-
ratura en grados Celsius y devuelve su equivalente en Fahrenheit
(F = C · 1,8 + 32).
b) int esPar(int numero): Devuelve 1 si el número recibido es par, y
0 si es impar.
c) int obtenerMayor(int a, int b): Recibe dos números enteros y
retorna el mayor de ellos.
d) float calcularPorcentaje(float total, float porcentaje):
Calcula y retorna el porcentaje indicado de una cantidad dada (ej. el
21 % de 500).
  
//---------------//---------------//---------------//---------------//---------------
//------------------------------------------------------------------Codigardo de Lopez y Coronel-------------------------------------------------------------------------------------------------------------
#include <stdio.h>

  float celsiusToFahrenheit(float);
  int esPar(int);
  int obtenerMayor(int,int);
  float calcularPorcentaje(float,float);

  int main(void) {
    //--------------- ejer 1
    float tempC;
    printf("Ingrese una temperatura en grados Celcius: ");
    scanf("%f",&tempC);
    printf("La temperatura en grados Fahrenheit es de : %.2f",celsiusToFahrenheit(tempC));
    //--------------- ejer 2
    int numero;
    printf("\nIngrese un numero para determinar si es un numero par: ");
    scanf(" %d",&numero);
    if(esPar(numero)==0)
      printf("El numero es par");
    else
      printf("El numero es impar");
    //-------------- ejer 3
    int a,b;
    printf("\nIngres 2 numeros enteros para determinar cual es mayor:\n");
    scanf(" %d %d",&a,&b);
    printf("El numero mas grande es: %d",obtenerMayor(a,b));
    //------------- ejer 4
    float total,porcentaje;
    printf("\nIngrese primero el numero y despues el porcentaje que quiere obtener: \n");
    scanf(" %f %f",&total,&porcentaje);
    printf("El %.2f%% de %.2f es igual a %.2f",porcentaje,total,calcularPorcentaje(total,porcentaje));
    //-------------

    return 0;
  }

float celsiusToFahrenheit(float celcius){
  return (celcius*1.8+32);
}

int esPar(int numero){
  return numero%2;
}

int obtenerMayor(int a,int b){
  if(a>=b)
    return a;
  return b;
}
float calcularPorcentaje(float total,float porcentaje){
  return (total*porcentaje/100);
}

//-------------------------------------------------------------------Termina el mejor codigo----------------------------------------------------------------------------------------------------------------------------------
/////////////////////////////////////////////////////////////////////
/* código de zullojuan */

//1er Ejercicio
#include <stdio.h>

float celsiusToFahrenheit(float celsius){

  float fahrenheit = (celsius * 1.8) + 32;

  return fahrenheit;
}

int main(int argc, char *argv[]) {

  float c;

  printf("Ingrese la cantidad de grados C°: ");
  scanf("%f", &c);

  float f = celsiusToFahrenheit(c);

  printf("Los nuevos grados F° son %.1f", f); 

  return 0;
}


//2do Ejercicio
#include <stdio.h>

void esPar(int numero){

  int val = numero % 2;

  if (val == 0)
    printf("El número %d es par", numero);
  else/
    printf("El número %d es impar", numero);

}

int main(int argc, char *argv[]) {

  int num;

  printf("Ingrese un número: ");
  scanf("%d", &num);

  esPar(num);

  return 0;
}


//3er Ejercicio
#include <stdio.h>

void obtenerMayor(float a, float b){

  if (a > b)
    printf("El numero %.2f es mayor al numero %.2f", a, b);
  else if (b > a)
    printf("El numero %.2f es mayor al numero %.2f", b, a);
  else
    printf("Ambos numeros son iguales");

}

int main(int argc, char *argv[]) {

  float num1, num2;

  printf("Ingrese el 1er numero: ");
  scanf("%f", &num1);

  printf("Ingrese el 2do numero: ");
  scanf("%f", &num2);

  obtenerMayor(num1, num2);


  // 4to Ejercicio
#include <stdio.h>

  float calcularPorcentaje(float total, float porcentaje){

    float resultado = total * (porcentaje / 100);
    return resultado;

  }

  int main(int argc, char *argv[]) {

    float total, porcentaje, resultado;

    printf("Ingrese el total del rango: ");
    scanf("%f", &total);

    do{
      printf("Ingrese el porcentaje del rango: ");
      scanf("%f", &porcentaje);

      if(porcentaje < 0)
        printf("\n Ingrese un porcentaje positivo");
    } while(porcentaje < 0);

    resultado = calcularPorcentaje(total, porcentaje);

    printf("El %.2f porciento de %.2f es %.2f", porcentaje, total, resultado);

    return 0;
  }



  //vvvvvvvvvvvvvvvvvvvvv   Codigos Inferiores abajo    vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv

  //2
  int num;
  int convertir;
  int far;
  int cel;

  do{
    printf("\nIngrese 1 para conversion de Celcius a Fahrenheit");
    printf("\nIngrese 2 para conversion de Fahrenheit a Celcius");
    printf("\nIngrese 3 para salir\n");
    scanf("%d" , &num);

    switch(num){
      case 1:
        printf("Ingrese la temperatura que desea convertir: ");
        scanf("%d" , &convertir);
        far = 273 + convertir;
        printf("La temperatura de celcius a fahrenheit es: %d\n" , far);
        break;
      case 2:
        printf("Ingrese la temperatura que desea convertir: ");
        scanf("%d" , &convertir);
        cel = convertir - 273;
        printf("La temperatura de fahrenheit a celcius es: %d\n" , cel);
        break;
      default:
        printf("Numero no valido, intente de nuevo.\n\n");
        break;
    }

  } while(num !=3);

  // Santino Ariatello
  int main(){
    int op;
    float temperatura, resultado;
    printf("Bienvenido al conversor de temperaturas.");
    printf("\nDadas las siguientes opciones: \n1. Celsius a Fahrenheit. \n2. Fahrenheit a Celsius. \n3. Salir.");
    do{
      printf("\n\nIngrese una opción: ");
      scanf("%d", &op);
      switch(op){
        case 1:
          printf("\nIngrese la temperatura en grados Celsius (se admiten hasta 2 decimales): ");
          scanf("%f", &temperatura);
          resultado = (temperatura * (9./5)) + 32.;
          printf("\n%.2f grados Celsius equivalen a %.2f grados Fahrenheit.", temperatura, resultado);
          break;
        case 2:
          printf("\nIngrese la temperatura en grados Fahrenheit (se admiten hasta 2 decimales): ");
          scanf("%f", &temperatura);
          resultado = (temperatura - 32) * 5/9.;
          printf("\n%.2f grados Fahrenheit equivalen a %.2f grados Celsius.", temperatura, resultado);
        case 3:
          printf("\nSaliendo del programa...");
      }
    } while(op!=3);
    return 0;
  }

  //lisandro y luis
#include <stdio.h>

  int main(int argc, char *argv[]) {
    int opcion;
    float temp;
    printf("1-Celsius a Fahrenheit\n");
    printf("2-Fahrenheit a Celsius\n");	
    printf("3-Salir\n");

    do{
      scanf("%d", &opcion);
      if(opcion==1){
        printf("Ingrese la temperatura en celsiuis: ");
        scanf("%f", &temp);
        printf("La temperatura en fahrenheit es: %.2f \n", temp * (9./5) + 32);}
      if(opcion==2){
        printf("Ingrese la temperatura en fahrenheit: ");
        scanf("%f", &temp);
        printf("La temperatura en celsius es: %.2f \n", (temp - 32) * (5./9));}
      if(opcion<1 || opcion>3)
        printf("Opcion no valida, ingrese una opcion valida\n");
    } while(opcion!=3);



    return 0;
  }
  //////////////////////////////////////////////////////////////////////// mis compañeritos y yo
#include <stdio.h>
  float celsiusToFahrenheit(float celisus);

  int main(void){
    float celsius;
    printf("ingrese grados celsius: ");
    scanf("%f",&celsius);
    celsiusToFahrenheit(celsius);
    float temp=celsiusToFahrenheit(celsius);
    printf("los grados en fahrenheit son:%2.f",temp);
    return 0;
  }

  float celsiusToFahrenheit(float celsius){
    float fahrenheit;
    fahrenheit= celsius*1.8+32;
    return fahrenheit;
  }
  ///////////////////////////////////////////////////////////////////// enzo gil
#include <stdio.h>

  float celsuisToFahr(float celsuis){
    float fare;

    fare=celsuis*1.8+ 32;

    return fare;
  }
  int main() {
    float temp;

    printf("ingrese la temperatura");
    scanf("%f",&temp);

    float result=celsuisToFahr(temp);

    printf("resultado %.2f ", result);

    return result;
  }

  //2do ejercicio enzo

#include <stdio.h>

  int esPar(int numero){
    if(numero % 2 == 0){
      return 1;
    }else{
      return 0;
    }
  }

  int main (){
    int numero;
    int resultado;

    printf("ingrese un numero: ");
    scanf("%d", &numero);

    resultado = esPar(numero);

    printf("el resultado es: %d\n", resultado);

    return 0;
  }


  /////////////////////////////////////////////////////////////////////
  //2do ejercicio

#include <stdio.h>
  int esPar(int num);

  int main(void) {
    int num;

    printf("ingrese un numero: ");
    scanf("%d" , &num);

    esPar(num);

    int tem = esPar(num);

    printf("%d", tem);

    return 0;
  }	

  int esPar (int num) { 
    int operacion;
    int a = 1;
    int b = 0;
    operacion = num % 2;

    if(operacion == 0){
      operacion = a;
    }else{
      operacion = b;
    }

    return operacion;
  }



  //1er ejerecicio 

  /*
     float celsius_farenheit (float celsius)
     recibe un numero en grados y pasalo a farenheit
     */
#include <stdio.h>

  float celsius_farenheit (float celsius)
  {
    float farenheit;

    farenheit = celsius*1.8+32;

    return farenheit;
  }
  int main(void) 
  {
    float grados,farenheit;

    printf("Ingrese la cantidad en grados celsius: ");
    scanf("%f",&grados);

    farenheit = celsius_farenheit(grados);

    printf("La cantidad en grados farentheit es: %2.f",farenheit);


    return 0;
  }
  //2do ejercicio 

#include <stdio.h>

  int es_par(int numero)
  {
    int num;
    if (num % 2 == 0)
    {
      printf("1");
    }else 
      printf("0");

    return num;
  }

  int main(void) {

    int x;

    printf("Ingrese un numero entero: ");
    scanf("%d",&x);

    es_par(x);

    return 0;
  }
  //3er ejercicio 
#include <stdio.h>
  int obtener_mayor(int a,int b)
  {
    int max;
    if (a>b) {
      max=a;
    }
    if (a<b)
    {
      max=b;

    }

    return max;
  }

  int main(void) {
    int x,y;
    int num;

    printf("Ingrese dos numeros enteros: ");

    scanf("%d%d",&x,&y);

    num = obtener_mayor(x,y);

    printf("El mayor de los numeros es %d",num);

    return 0;
  }
  //4to ejercicio 





  return 0;
}
/////////////////////////////////////////////////// monigotes interpretativos
#include <stdio.h>
int esPar(int numero);

int main(void){
  int numero, result;
  printf("Ingrese un numero:");
  scanf("%d", &numero);
  result = esPar(numero);
  printf("Par = 1 impar = 0\n resultado = %d", result);
  return 0;
}

int esPar(int numero){
  int operacion;
  int par = 1, impar = 0;
  operacion = numero % 2;
  if (operacion == 0){
    operacion = par;
  }
  else{
    operacion = impar;
  }
  return operacion;
}
///////////////////////////////////////////////////
#include <stdio.h>
int obtenerMax(int a, int b);

int main(void){
  int a, b;

  printf("ingresa 2 numeros: \n");
  scanf ("%d", &a);
  scanf("%d", &b);
  obtenerMax(a,b);

  int tem = obtenerMax(a, b);
  printf("el mayor es : %d", tem);

  return 0;
}

int obtenerMax(int a, int b){
  int operacion;


  operacion = a - b;

  if(operacion > 0){
    operacion = a;
  }else{
    operacion = b;
  }

  return operacion;
}
/////////////////////////////////////////////// AAAAAAAAAAAAAAAAAAAAAAA+
#include <stdio.h>
int sumarDigitosDosCifras(int num);

int main(void){
  int num,sumatoria;
  printf("ingrese un numero de dos digitos");
  scanf("%d",&num);
  sumatoria = sumarDigitosDosCifras(num);
  printf("la suma de las cifras es: %d", sumatoria);

  return 0;
}

int sumarDigitosDosCifras(int num){
  int unidad, decena, resultado;
  unidad = num/10;
  decena = num%10;
  resultado= (unidad + decena);
  return resultado;
}


int esVocal(char letra){

  if( letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' ){
  return 1;
  } else {
    return 0;
  }

}



int esVocal(char letra){
  int res;

  switch(letra){
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
    res = 1;
  default:
    res = 0;
  break;
  }
  return res;
}

float calcularSuperficieTriangulo(float base, float altura){
  return base * altura / 2;
}

int esPositivo(int n){
  if(n > 0)
    return 1;
  else if (n < 0)
    return -1;
  else
    return 0;
}
