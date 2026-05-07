

///////////////////// Agus B Y Zoe PB/////////////
EJERCICIO 1

#define IVA 1.21

#include <stdio.h>


int main(void) {
  int precio;
  float total;
  printf ("ingrese el precio de un producto: ") ;
  scanf("%d",&precio);
  total = precio*IVA;
  printf("\nel precio final es:%f ", total);
  return 0;
}



/////////////////////////////////////////Camila R y Ludmila F
#include <stdio.h>

#define PI 3.14159

int main(int argc, char *argv[]) {

  float r;

  printf ("Ingrese el radio del circulo: ");
  scanf ("%f", &r);

  float area = PI * r * r;

  printf ("El area del circulo es: %f\n", area);

  return 0;
}
Ejercicio 2
//Pedro P
#include <stdio.h>
int main(void) {
  int ed;
  float pe;
  int alt;
  printf("Ingrese edad: ");
  scanf("%d", &ed);
  printf("Ingrese peso: ");
  scanf("%f", &pe);
  printf("Ingrese altura (cm): ");
  scanf("%d", &alt);
  printf("EDAD: %d \nPESO: %f \nALTURA: %d", ed, pe, alt);
  return 0;

}

//codigo de los pibes
#include <stdio.h>

int main(int argc, char *argv[]) {
  int edad;
  float altura, peso;
  printf("ingrese su edad: \n");
  scanf("%d", &edad);
  printf("ingrese su altura:\n");
  scanf("%f", &altura);
  printf("ingrese su peso: \n");
  scanf("%f", &peso);
  printf ("edad: %d - altura: %f - peso %f", edad, altura, peso);


  return 0;
}

#include <stdio.h>////mitchel ejer3///////////////

int main(int argc, char *argv[]) {
  int peso;
  int altura;
  int edad;
  printf("ingrese peso, altura y edad: ");
  scanf("%d%d%d",&peso,&altura,&edad);
  printf("peso:%d\naltura:%d\nedad:%d",peso,altura,edad);

  return 0;
}
#include <stdio.h>//////////mitchel ejer4/////////////////

int main() {
  char letra;
  printf("ingrese un valor de la tabla ascii: ");
  scanf("%c",&letra);
  printf("%d",letra);
  return 0;
}

///////////////////// Agus B Y Zoe PB/////////////
////EJERCICIO 0//////

#define Pi 3.1416

#include <stdio.h>


int main(void) {
  float rad;
  float radio;
  printf ("ingrese el radio de un circulo: ") ;
  scanf("%f",&rad);
  radio = Pi*(rad*rad);
  printf("\nel Radio final del circulo es:%f ", radio);
  return 0;


  //codigo de los pibes ejercicio 3
#include <stdio.h>

  int main(int argc, char *argv[]) {
    char letra;
    printf("colocar letra:");
    scanf("%c", &letra);
    printf("su codigo ASCII es:%d\n", letra);

    return 0;
  }

  Ejercicio 3
    //Pedro P
#include <stdio.h>
    int main(void) {
      char car;
      printf("Ingrese un caracter: ");
      car = getchar();
      printf("Numero en tabla: %d", car);
      return 0;

    }

#include <stdio.h>
  //LDF
  int main(void) {
    char letra;
    printf("CONVERSOR A ASCII\n");
    printf("Dame tu letra: ");
    scanf("%c", &letra);
    printf("Tu letra en ASCII es: %d", letra);

    return 0;
  }


#include <stdio.h>

  int main(void) {
    int EDAD;
    int ALTURA;
    int PESO;
    printf("ingrese peso: \n");
    scanf("%d", &EDAD);
    printf("ingrese edad: \n");
    scanf("%d", &ALTURA);
    printf("ingrese altura: \n");
    scanf("%d", &PESO);
    printf("sus resultados son: %d,%d,%d", EDAD,ALTURA,PESO);
    return 0;
  }

  Gama
#include <stdio.h>

    int main(){
      int edad = 0;
      float altura = 0;
      int peso = 0;

      printf("Introduzca sus siguientes datos: \n");
      printf("Edad: ");
      scanf("%d", &edad);
      printf("Altura: ");
      scanf("%f", &altura);
      printf("Peso: ");
      scanf("%d", &peso);

      printf("Usted tiene %d años, ", edad);
      printf("mide %f metros ", altura);
      printf("y pesa %d kilos", peso);

      return 0;
    }

#include <stdio.h>

  int main(){
    char caracter;
    printf("Introduzca su caracter: ");
    scanf("%c", &caracter);

    printf("El codigo ASCII de su caracter es: %d", caracter);

    return 0;
  }

  ///////////////////// Agus B Y Zoe PB/////////////
  ////EJERCICIO 3//////

#include <stdio.h>

  int main(void) {
    int edad;
    int altura;
    int peso;
    printf ("ingrese su edad: ") ;
    scanf ("%d", &edad);
    printf ("ingrese su altura: ") ;
    scanf ("%d", &altura);
    printf ("ingrese su peso: ") ;
    scanf ("%d", &peso);

    printf("\nel Los datos ingresados fueron:%d %d %d", edad, altura, peso);
    return 0;
  }
