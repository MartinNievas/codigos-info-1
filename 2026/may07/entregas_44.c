## Ejercicio 0

Calcular el área de un círculo usando una constante PI.
Formula:
A = π · r²

## Ejercicio 1 
Calcular el precio final de un producto agregando IVA.

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
  printf("el area es: %.2lf\n", area);

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
  scanf("%f", &r);
  printf("el area del circulo: %.2f", pi * r * r);
  return 0; 
}
















-----------------------------------------------------------------------------
//Arias EJERCICIO 0.
#include <stdio.h>
#define PI 3.14

int main(void)
{
  float r;
  printf("Ingrese el radio del circulo: ");
  scanf("%f", &r);
  printf("El area del circulo es: %.2f", PI*r*r);
  return 0;
}	



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


Ejercico 2


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

#define pi 3.14

int main() {
  float radio, area;

  printf("Ingresa el radio del círculo: ");

  scanf("%f", &radio);

  area = pi * (radio * radio);

  printf("área del círculo: %.2f\n", area);

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

  printf("Elm total + IVA es: $%.2f",total);

  return 0;
}

------------------------------------------------------------------------------------------------





























--------------------------------------------------------------------------------
Nicolas Rossiputo

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

Ejerci















----------------------------------------------











