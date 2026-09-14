
// ej1 Tiago Amaya 99293


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

void min_max(int a, int b, int *minimo, int *maximo)
{ 
  if (a < b){
    *minimo = a;
    *maximo = b;
  }
  else
  {
    *minimo = b;
    *maximo = a;
  }


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
  printf
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







