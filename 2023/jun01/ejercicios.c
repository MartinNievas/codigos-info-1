//Joan Miranda Programa 4.8
#include <stdio.h>

int main(int argc, char *argv[]) {
  int num1;

  printf("Ingrese un numero\n:");
  scanf("%d", &num1);

  if(num1>=100&&num1<1000){
    printf("El numero %d es de tres cifras\n", num1);
  }

  else{
    printf("El numero ingresado no es de tres cifras");
  }


  return 0;
}


//Joan Miranda Programa 4.7
#include <stdio.h>

int main(int argc, char *argv[]) {

  float precio, descuento;

  printf("Infrese el valor de la compra\n");
  scanf("%f", &precio);

  if(precio>1000){


    descuento=precio*0.80;

    printf("El monto a pagar con el descuento  es\n:%.2f", descuento);
  }
  else{
    printf("El monto a pagar es de:%.2f", precio);


  }

  return 0;
}


//Joan Miranda Programa 4.6
#include <stdio.h>

int main(int argc, char *argv[]) {
  int nota1, nota2;
  float promedio;
  float  nota3;
  printf("Ingrese la nota del primer parcial\n");
  scanf("%d", &nota1);
  printf("Ingrese la nota del segundo parcial\n");
  scanf("%d", &nota2);
  printf("Ingrese la nota del tercer parcial\n");
  scanf("%f", &nota3);

  promedio= (nota1+nota2+nota3)/3;

  printf("El promedio del estudiante es:%.2f", promedio);

  return 0;
}
#include <stdio.h>
//made by isma 
int main(int argc, char *argv[]) {

  int nota1 , nota2 , nota3;
  float notaf;

  printf("ingrese su nota:");
  scanf("%d", & nota1);
  printf("ingrese su nota:");
  scanf("%d", & nota2);
  printf("su nota final es:");
  scanf("%d", & nota3);

  notaf =( nota1 + nota2 + nota3 )/(float)3;

  printf("su nota final es %0.2f:", notaf);


  return 0;
}

}
//Braida Zanel ejercicio 4.6
int main(int argc, char *argv[]) {
  float nota1;
  float nota2;
  float nota3;
  float suma;

  printf("ingrese nota 1: ");
  scanf("%f", &nota1);
  printf("ingrese nota 2: ");
  scanf("%f", &nota2);
  printf("ingrese nota 3: ");
  scanf("%f", &nota3);

  suma = (nota1 + nota2 + nota3)/ 3;

  printf("El promedio es: %.2f", suma);

#include <stdio.h>  
  //Ejercicio 4.6 Iturrez
  int main(int argc, char *argv[]) {
    float nota1, nota2, nota3, promedio;

    printf("ingrese nota 1: ");
    scanf("%f", &nota1);
    printf("ingrese nota 2: ");
    scanf("%f", &nota2);
    printf("ingrese nota 3: ");
    scanf("%f", &nota3);
    promedio = (nota1 + nota2 + nota3)/(float)3;
    printf("El promedio es: %f\n", promedio);

    if(promedio >= 8){
      printf("promociona");
    };

    if(promedio < 6){
      printf("desaprobado");
    }

    if(promedio >= 6){
      if(promedio < 8){
        printf("aprobado");
      }
    }

    return 0;
  }

  int main(void) {
    float nota1;
    float nota2;
    float nota3;


    printf("Hecho por Gatica y Leòn\n");


    printf("\nEscriba su nota1\n");
    scanf("%d",&nota1);
    printf("Escriba su nota2\n");
    scanf("%d",&nota2);
    printf("Escriba su nota3\n");
    scanf("%d",&nota3);

    float promedio;
    promedio = (nota1+nota2+nota3)/3;
    printf("Tu promedio es: %.2f\t", promedio );

    if(promedio>=8){
      printf("Promociòn\n");
    }
    if(promedio>=6){
      if(promedio<8){
        printf("Aprobado\n");
      }

    }
    if(promedio<6){
      printf("Desaprobado \n");
    }
    if(promedio=1){

    }

    return 0;
  }
  //Ejercicio 4.6 Cipolla Pannunzio
#include <stdio.h>

  int main(int argc, char *argv[]) {
    int cantidaddenotas;
    float nota1, nota2, nota3, suma, promedio;


    printf ("Ingrese cantidad de notas:");
    scanf("%d", &cantidaddenotas);
    printf ("Ingrese nota:");
    scanf ("%f",&nota1);

    printf ("Ingrese nota:");
    scanf("%f", &nota2);

    printf("Ingrese nota:");
    scanf("%f", &nota3);

    suma = nota1 + nota2 + nota3;

    promedio = suma / cantidaddenotas;
    printf("El promedio es: %0.2f", promedio);

    if (promedio < 6){
      printf("\n Alumno: DESAPROBADO");
    }

    if (promedio >= 6){
      if(promedio < 8){
        printf("\n Alumno: APROBADO");	
      }
    }

    if (promedio > 8){
      printf("\n Alumno: PROMOCIONADO");	
    }
    return 0;
  }
  //Ejercicio 4.7 Cipolla Pannunzio

#include <stdio.h>

  int main(int argc, char *argv[]) {
    float Precio, Descuento,Total1,Total2;

    printf("Ingrese precio del producto:");
    scanf("%f", &Precio);

    printf("Ingrese el Descuento:");
    scanf("%f",&Descuento);
    if (Precio <= 1000){
      Total2 = Precio;
      printf ("Precio: %f",Total2);

    }

    if (Precio > 1000){
      Total1= Precio - ((Precio * Descuento)/100) ;
      printf ("\nPrecio con descuento:%f",Total1);
    }

    return 0;
  }



  //Ejercicio 4.8Cipolla Pannunzio 
#include <stdio.h>

  int main(int argc, char *argv[]) {
    int num;
    printf("Ingrese un Numero:\n");
    scanf("%d", &num);
    if (num>=100){
      if(num<=999){
        printf("Numero de tres cifras");
      }

    }
    if (num<100){
      printf("Este numero no tiene tres cifras");

    }
    if(num>999){
      printf("Este numero no tiene tres cifras");
    }
    return 0;
  }





#include <stdio.h>

  int main(int argc, char *argv[]) {

    float nota1, nota2, nota3, promedio;

    printf("Ingrese la Primer Nota: ");
    scanf("%f", &nota1);
    printf("Ingrese la Segunda Nota: ");
    scanf("%f", &nota2);
    printf("Ingrese la Primer Nota: ");
    scanf("%f", &nota3);

    promedio =(nota1 + nota2 + nota3) / 3;

    printf("El Promedio Es: %.2f", promedio);
    return 0;
  }
