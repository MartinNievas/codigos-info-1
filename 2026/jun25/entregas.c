//////////////////////////////////////enzo 
   int main() {

     int num, suma = 0;

     printf("ingrese un numero entero(0 para terminar):\n");

     do{
       scanf("%d",&num);
       suma += num;
     } while(num != 0);

     printf("la suma de numeros es: %d\n", suma);

     return 0;
   }
/////////////////////////////////////enzo
int main() {

  int num;
  int suma  = 0;
  int cant = 0;
  float prom;

  printf("ingrese un numero entero(0 para terminar):\n");
  scanf("%d",&num);

  while(num >= 0){
    suma+= num;
    cant++;

    scanf("%d",&num);
  }

  if(cant > 0){
    prom = (float)suma/cant;
    printf("prom=%.2f\n",prom);
  }else{
    printf("no se ingresaron numeros validos");
  }

  return 0;
}

///////////////////////////////////////////////////////////////////////////
//Facundo  
#include <stdio.h>

int main(void) {
  int n, suma = 0;

  do {
    printf("Ingrese un numero entero (0 para terminar): ");
    scanf("%d", &n);
    suma += n;
  } while (n != 0);

  printf("La suma es: %d\n", suma);
  return 0;
}

#include <stdio.h>

int main(void) {
  int n, cantidad = 0;
  double suma = 0.0;

  printf("Ingrese numeros enteros (negativo para terminar):\n");
  scanf("%d", &n);

  while (n >= 0) {
    suma += n;
    cantidad++;
    scanf("%d", &n);
  }

  if (cantidad > 0)
    printf("Promedio: %.2f\n", suma / cantidad);
  else
    printf("No se ingresaron datos.\n");

  return 0;
}

#include <stdio.h>

int main(void) {
  double precio, total = 0.0;

  printf("=== CAJA REGISTRADORA ===\n");
  printf("Ingrese precios (0 para finalizar):\n");

  do {
    printf("Precio: ");
    scanf("%lf", &precio);
    total += precio;
  } while (precio != 0.0);

  printf("-------------------------\n");
  printf("TOTAL A PAGAR: $%.2f\n", total);
  return 0;
}


#include <stdio.h>

int main(void) {
  int nota, total = 0, aprobados = 0;
  int desaprobados;
  double porcentaje;

  printf("Ingrese notas (-1 para terminar):\n");

  scanf("%d", &nota);
  while (nota != -1) {
    total++;
    if (nota >= 6)
      aprobados++;
    scanf("%d", &nota);
  }

  if (total == 0) {
    printf("No se ingresaron alumnos.\n");
    return 0;
  }

  desaprobados = total - aprobados;
  porcentaje   = (double)desaprobados / total * 100.0;

  printf("\n=== RESULTADOS ===\n");
  printf("Total de alumnos evaluados : %d\n", total);
  printf("Alumnos aprobados          : %d\n", aprobados);
  printf("Porcentaje desaprobados    : %.2f%%\n", porcentaje);

  return 0;
}


/////////////////


#include <stdio.h>/////////mitchel

int main(int argc, char *argv[]) {
  int a;
  int b;
  int sumatoria;
  printf("ingrese dos numero: ");
  scanf("%d%d",&a,&b);
  while(a>0 && b>0){

    sumatoria= a+b; 
    printf("la sumatoria es: %d",sumatoria);
    printf("\ningrese dos numero: ");
    scanf("%d%d",&a,&b);
  }
  printf("no cumple");
  return 0;
}

#include <stdio.h>

int main(void) {
  int n, max, min;

  printf("Ingrese el primer numero positivo: ");
  scanf("%d", &n);

  if (n == 0) {
    printf("No se ingresaron datos.\n");
    return 0;
  }

  max = min = n;

  while (n != 0){
    printf("Ingrese un numero (0 para terminar): ");
    scanf("%d", &n);
    if (n != 0) {
      if (n > max)
        max = n;
      if (n < min)
        min = n;
    }
  }

  printf("Maximo: %d\n", max);
  printf("Minimo: %d\n", min);
  return 0;
}
#include <stdio.h>//////////mitchel

int main(int argc, char *argv[]) {
  int a;
  int b;
  int promedio;
  printf("ingrese dos numero: ");
  scanf("%d%d",&a,&b);
  while(a>=0 && b>=0){
    promedio= (a+b)/(float)2; 
    printf("el promedio es: %d",promedio);
    printf("\ningrese dos numero: ");
    scanf("%d%d",&a,&b);
  }
  printf("hay un numero negativo");
  return 0;
}



// Santino Ariatello

#include <stdio.h>

int main(){
  int num, acumulador = 0;
  printf("Bienvenido al programa. El mismo calculará la sumatoria de los numeros enteros ingresados.");
  printf("\nEl programa finalizará cuando se ingrese el número cero.");
  while (num!=0){
    printf("\nIngrese un número: ");
    scanf("%d", &num);
    acumulador = acumulador + num;
  }
#include <stdio.h>//////mitchel

  int main(int argc, char *argv[]) {
    int a;
    int b;
    printf("ingrese dos numero: ");
    scanf("%d%d",&a,&b);
    while(a>0 && b>0){
      if(a>b){
        printf("\nel maximo es:%d",a);
        printf("\n el nimino es:%d",b);
      }
      else{
        printf("\nel maximo es:%d",b);
        printf("\nel nimino es:%d",a);
      }
      printf("\ningrese dos numero: ");
      scanf("%d%d",&a,&b);
    }

    printf("hay un numero negativo");
    return 0;
  }

  printf("\nLa sumatoria de los números ingresados es: %d", acumulador);
}

// Santino Ariatello

#include <stdio.h>

int main(){
  int contador = 0, acumulador = 0, num;
  printf("Bienvenido al programa. Ingrese números enteros para calcular su promedio.");
  printf("\nEl programa finalizará cuando ingrese un número negativo.");

  while (num >= 0){
    printf("\nIngrese un número: ");
    scanf("%d", &num);
    if (num >= 0){
      acumulador = acumulador + num;
      contador++;
    }
  }
  
  printf("El promedio de los números ingresados es: %.2f", (float)acumulador / contador);
  return 0;
}

// Santino Ariatello

#include <stdio.h>

int main(){
  int num = 1, max = 0, min = 0;
  printf("Bienvenido al programa. Este se encarga de calcular el máximo y mínimo de un grupo de números.");
  printf("\nEl programa concluye en el momento en el que usted ingrese 0.");
  while (num!=0){
    printf("\nIngrese un número: ");
    scanf("%d", &num);
    if (num != 0){
      if (num > max){
        max = num;
      }
      else if (num < min){
        min = num;
      }
    }
  }
  printf("\nMáximo: %d \nMínimo: %d", max, min);
  return 0;
}

//------------------------Codigardo de Lopez y Coronel---------------------------------
#include <stdio.h>

int main(void) {
  /*1.0
    int num=1,suma=0;
    while(num!=0){
    printf("Ingrese un numero entero: ");
    scanf(" %d",&num);
    suma=suma+num;
    }
    printf("La suma de todos los numeros es: %d",suma);
    */
  /*2.0
    int num=0,suma=0,cantNum=-1;
    while(num>=0){
    suma=suma+num;
    cantNum=cantNum+1;
    printf("Ingrese un numero entero: ");
    scanf(" %d",&num);
    }
    printf("El promedio de todos los numeros es %.2f",suma/(float)cantNum);
    */
  /*3.0
    int num=1,max=0,min;
    while(num!=0){
    printf("Ingrese un numero entero: ");
    scanf(" %d",&num);
    if(max<num)
    max=num;
    if(min>num&&num!=0)
    min=num;
    }
    printf("El numero maximo y minimo ingresado son %d y %d",max,min);
    */
  /*4.0
    float num=1,suma=0;
    while(num!=0.0){
    printf("Ingrese el precio de su producto ");
    scanf(" %f",&num);
    suma=suma+num;
    }
    printf("Su total a pagar es %.2f",suma);
    */
  /*7.0
    int alumTrue=0,numAlum=-1,alumFalse=0;
    float alumNota;
    while(alumNota!=-1){
    numAlum+=1;
    printf("Ingrese la nota de un alumno ");
    scanf(" %f",&alumNota);
    if(alumNota>=6.0)
    alumTrue+=1;
    else if(alumNota!=-1.0)
    alumFalse+=1;

    }
    printf("El numero de alumnos presentados es %d\nEl numero de alumnos aprobados es %d\nEl porcentaje de numeros desaprobados "
    "es %%%.2f",
    numAlum,
    alumTrue,
    (((float)alumFalse)/numAlum)*100);
    */

  return 0;
}
//lisandro y luis
#include <stdio.h>
/*1. Escribir un algoritmo que permita ingresar números enteros y calcular
  su suma. El proceso debe finalizar cuando se ingrese el número cero.*/

int main(int argc, char *argv[]) {
  int num1;
  int suma =0;
  while (num1) {
    printf("\nIngrese numeros enteros, para finalizar ingrese 0: ");
    scanf("%d", &num1);
    if(num1!=0){
      suma+=num1;
      printf("%d", num1);
    } else {
      printf("\n%d", suma);
    }
  }

  return 0;
}


