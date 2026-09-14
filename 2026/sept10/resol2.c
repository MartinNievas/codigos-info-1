// Ejercicios 10/09
/*
 * Ejercicio 1 - Intercambiar valores
 * Tema: punteros y llamadas por referencia.
 *
 * Completar la función intercambiar para que intercambie
 * los valores de dos variables recibidas desde main.
 */

include <stdio.h>

void intercambiar(int *a, int *b)
{ 
  /* COMPLETAR */
}

int main(void)
{
  int x = 10;
  int y = 25;

  printf("Antes: x = %d, y = %d\n", x, y);

  intercambiar(&x, &y);


  ;
}



// segundo


/*
 * Ejercicio 2 - Minimo y maximo
 * Tema: funciones por referencia.
 *
 * Escribir una funcion que reciba dos enteros y devuelva
 * mediante punteros el menor y el mayor.
 */

#include <stdio.h>

void min_max(int a, int b, int *minimo, int *maximo)
{ 
  /* COMPLETAR */
}

int main(void)
{
  int a, b;
  int minimo, maximo;

  printf("Ingrese dos enteros: ");
  scanf("%d %d", &a, &b);

  min_max(a, b, &minimo, &maximo);

  printf("Minimo: %d\n", minimo);
  printf("Maximo: %d\n", maximo);

  return 0;





  // Tercero


  /*
   * Ejercicio 3 - Cociente y resto
   * Tema: multiples parametros de salida mediante punteros.
   *
   * Implementar una funcion que reciba dividendo y divisor
   * y devuelva por referencia el cociente y el resto.
   */
#include <stdio.h>

  void dividir(int dividendo, int divisor, int *cociente, int *resto)
  {
    /* COMPLETAR */
  }

  int main(void)
  {
    int dividendo, divisor;
    int cociente, resto;

    printf("Dividendo: ");
    scanf("%d", &dividendo);

    printf("Divisor: ");
    scanf("%d", &divisor);

    if (divisor == 0) {
      printf("No se puede dividir por cero.\n");
      return 1;
    }

    dividir(dividendo, divisor, &cociente, &resto);

    printf("Cociente: %d\n", cociente);
    printf("Resto: %d\n", resto);

    return 0;
  }



  // Cuarto


  /*
   * Ejercicio 4 - Estadisticas
   * Tema: arreglos + punteros + funciones por referencia.
   *
   * Implementar una funcion que reciba un arreglo de enteros
   * y calcule mediante parametros de salida:
   *   - suma
   *   - promedio
   *   - minimo *   - maximo


#include <stdio.h>

void estadisticas(int v[], int n, int *suma, float *promedio, int *minimo, int *maximo)
{   
  /* COMPLETAR */
}

int main(void)
{
  int v[] = {8, 4, 15, 3, 10, 7};
  int n = sizeof(v) / sizeof(v[0]);

  int suma, minimo, maximo;
  float promedio;

  estadisticas(v, n, &suma, &promedio, &minimo, &maximo);

  printf("Suma: %d\n", suma); 
  printf("Promedio: %.2f\n", promedio);
  printf("Minimo: %d\n", minimo);
  printf("Maximo: %d\n", maximo);

  return 0;
}


// Ejercicios 10/09
/*
 * Ejercicio 1 - Intercambiar valores
 * Tema: punteros y llamadas por referencia.
 *
 * Completar la función intercambiar para que intercambie
 * los valores de dos variables recibidas desde main.
 */


#include <stdio.h>

void intercambiar(int *a, int *b)
{ 
  int c = *a;
  int d = *b;
  *a = d;
  *b = c;
}

int main(void)
{
  int x = 10;
  int y = 25;

  printf("Antes: x = %d, y = %d\n", x, y);

  intercambiar(&x, &y);

  printf("Despues: x = %d, y = %d\n", x, y);

  return 0;
}
//Cardenas y Mamani
#include <stdio.h>

void intercambiar(int *a, int *b)
{ 
  int vari = *a;
  *a = *b;
  *b = vari;
}

int main (void)
{
  int x = 10;
  int y = 25;

  printf("Antes: x = %d, y = %d\n", x, y);

  intercambiar(&x, &y);

  printf("Despues: x = %d, y = %d\n", x, y);

  return 0;
}
//Cardenas y Mamani
#include <stdio.h>

void min_max(int a, int b, int *minimo, int *maximo)
{ 
  *maximo = (a > b) ? a : b;
  *minimo = (a < b) ? a : b;

}

int main(void)
{
  int a, b;
  int minimo, maximo;

  printf("Ingrese dos enteros: ");
  scanf("%d %d", &a, &b);

  min_max(a, b, &minimo, &maximo);

  printf("Minimo: %d\n", minimo);
  printf("Maximo: %d\n", maximo);

  return 0;
}

//samu y benja
#include <stdio.h>

#define TAM 7
void estadisticas(int v[], int n,
    int *suma, float *promedio,
    int *minimo, int *maximo);

int main(void) {
  int vec[TAM];

  for(int i=0; i<TAM; i++){
    scanf("%d", &vec[i]);
  }
  int sum=0, min, max;
  float prom;

  estadisticas(vec, TAM, &sum, &prom, &min, &max);
  printf("la suma es %d\n", sum);
  printf("el promedio es %.2f\n", prom);
  printf("el minimo es %d\n", min);
  printf("el maximo es %d\n", max);

  return 0;
}

void estadisticas(int v[], int n,
    int *suma, float *promedio,
    int *minimo, int *maximo)
{   
  *minimo=v[0]; *maximo=v[0];
  for(int a=0;a<n;a++){
    *suma+=v[a];
    if(v[a]>*maximo)
      *maximo=v[a];
    if(*minimo>v[a])
      *minimo=v[a];
  }
  *promedio=(float)*suma/n;
}

//Tiago amay


//toscano
#include <stdio.h>

void estadisticas(int v[], int n,
    int *suma, float *promedio,
    int *minimo, int *maximo)
{
  *minimo = v[0];
  *maximo = v[0];
  *promedio = 0;
  *suma = 0;

  // Sumatoria
  for(int i = 0; i < n ; i++)
    *suma += v[i];

  // Buscando máximo
  for(int i = 0; i < n ; i++)
    if(v[i] > *maximo)
      *maximo = v[i];

  // Buscando mínimo
  for(int i = 0; i < n ; i++){
    if(v[i] < *minimo)
      *minimo = v[i];

  // Calcular promedio
  *promedio = (float)*suma / n;

}

int main(void)
{
  int v[] = {8, 4, 15, 3, 10, 7};
  int n = sizeof(v) / sizeof(v[0]);

  int suma, minimo, maximo;
  float promedio;

  estadisticas(v, n, &suma, &promedio, &minimo, &maximo);

  printf("Suma: %d\n", suma); 
  printf("Promedio: %.2f\n", promedio);
  printf("Minimo: %d\n", minimo);
  printf("Maximo: %d\n", maximo);

  return 0;
}
//code by ciro y los persas
#include <stdio.h>
void dividir(int dividendo, int divisor, int *cociente, int *resto){
  *cociente = dividendo / divisor;
  *resto = dividendo % divisor;
}
int main(int argc, char *argv[]) {
  int dividendo, divisor;
  int cociente, resto;
  printf("dividiendo: ");
  scanf( " %d", &dividendo);
  printf("divisor: ");
  scanf(" %d", &divisor);
  if (divisor == 0){
    printf("no se puede dividir por cero \n");
    return 1;
  }
  dividir(dividendo, divisor, &cociente, &resto);
  printf(" cociente: %d\n", cociente);
  printf(" resto: %d\n", resto);
  return 0;
}

//Mamani y Cardenas
#include <stdio.h>

void dividir(int dividendo, int divisor, int *cociente, int *resto)
{
  *cociente = dividendo / divisor;
  *resto = dividendo % divisor;
}

int main(void)
{
  int dividendo, divisor;
  int cociente, resto;

  printf("Dividendo: ");
  scanf("%d", &dividendo);

  printf("Divisor: ");
  scanf("%d", &divisor);

  if (divisor == 0) {
    printf("No se puede dividir por cero.\n");
    return 1;
  }

  dividir(dividendo, divisor, &cociente, &resto);

  printf("Cociente: %d\n", cociente);
  printf("Resto: %d\n", resto);

  return 0;
}

//Mamaní y Cardenas











v
