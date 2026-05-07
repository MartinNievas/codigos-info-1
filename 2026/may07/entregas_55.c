//----------------------------------------------------------------------------------------
## Ejercicio 0

Calcular el área de un círculo usando una constante PI.
Formula:
A = π · r²


//----------------------------------------------------------------------------------------
## Ejercicio 1
Calcular el precio final de un producto agregando IVA.


///////////////codigo Mitchel////////////////////////////
#include <stdio.h>
#define pi 3.14

int main(void) {
  float rad;
  float radio;
  printf("ingrese el radio de un circulo: ");
  scanf("%f", &rad);
  radio= pi*(rad*rad);
  printf("\nel radio es:%f",radio);
  return 0;
}

#define IVA 1.21


#include <stdio.h>///mitchel ejercicio 2///
int main(void) {
  int precio;
  float total;

  printf("ingrese el precio de un producto: ");
  scanf("%d",&precio);
  total = precio* IVA;
  printf("\nel precio final es:%f",total);
  return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////by Alfita and company
#include <stdio.h>
#define pi 3.14159265359


int main(int argc, char *argv[]) {

  float radio;
  printf("ingrese el radio de su circulo: ");
  scanf("%f", &radio);
  float Area=pi*(radio*radio);
  printf("El area de su circulo es:%f ",Area);


  return 0;
}
/////////////////////////////////////////////////////////////////////////////////// by Alfita and company
#include <stdio.h>
#define IVA 0.21


int main(int argc, char *argv[]) {
  float producto;
  float calculoiva;
  printf("ingrese el precio de su producto: ");
  scanf("%f", &producto);
  calculoiva=producto*IVA;
  float total=calculoiva+producto;
  printf("el precio con iva es:%f", total);


  return 0;
}

/////////////////////////////////////////////////////////////////////////////////////CÒDIGO LUIS
#include <stdio.h>
#define PI 3.1415

int main(void) {

  int r;

  float A;



  printf("ingrese el radio de su cìrculo: ");
  scanf( "%d", &r);

  A = (r * r) * PI;

  printf("el àrea de su cìrculo es: %f\n", A);

  return 0;
}


LULI
#include <stdio.h>

#define  PI 3.141516
int main(void) {

  float radio, area;

  printf("Ingrese un radio:");
  scanf("%f",&radio);

  area=PI*(radio*radio);

  printf("El radio de la circunferencia es:\n %f", area);

  return 0;
}

#include <stdio.h>

#define  IVA 0.21
int main(void) {

  float precio,preciof;

  printf("Ingrese un precio:");
  scanf("%f",&precio);
  preciof= precio+(IVA*precio);
  printf("El precio final con IVA es: %f", preciof);

  return 0;
}

yo:
#include <stdio.h>
#define PI 3.14159265359
int main(void) {

  float radio;

  float area;

  printf(" %f insetar valor del radio del circulo: ");
  scanf("%f", &radio);
  area= (radio*radio)*PI;
  printf("\nel valor del area es: %f", area);
  return 0;
}


//codigo de los pibes
#include <stdio.h>
#define PI 3.14

int main(int argc, char *argv[]) {
  float radio2, area;
  printf("ingrese el radio del circulo:\n");
  scanf("%f", &radio2);
  area= PI * radio2 * radio2;
  printf("Area del circulo: %f\n", area);


  return 0;
}

Gama
#include <stdio.h>

#define Pi 3.14159265358979

int main(){
  printf("Ingrese el valor de su radio: \n");
  float radio;
  scanf("%f", &radio);

  float Area = 0;

  Area = Pi * radio * radio;

  printf("El area del circulo es: %f", Area);

  return 0;
}

Giuliano y Ram:
#include <stdio.h>

int main() {
  float radio, area;
  const float PI = 3.1416;

  printf("Ingrese el area del circulo");
  scanf("%f", &radio);

  area = PI * radio * radio;

  printf("El area del circulo es: %.2f\n" , area);
  return 0;
}

Naza:
// Código de calculo de Área
#include <stdio.h>

int main(int argc, char *argv[]) {
  float pi, r, Area;
  pi = 3.14156;
  printf("Hola buen dia!\n");
  printf("Por favor ingrese un radio: \n");
  scanf("%f", &r);
  Area = pi * (r * r);
  printf("El área calculada es: \n");
  printf("%f", Area);
  return 0;
}

// Código de calculo de precio de productos + IVA
#include <stdio.h>
#define IVA 0.21

int main(int argc, char *argv[]) {
  float precio, precio_final;

  printf("Hola, buenos dias!\n");
  printf("Ingrese el valor del producto: ");
  scanf("%f", &precio);
  precio_final = precio + (precio * IVA);
  printf("El precio final es: \n");
  printf("%f", precio_final);
  return 0;
}

