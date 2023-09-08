#include <stdio.h>

void ingresar_elementos(int a[], int tam)
{
  // Cargar todos los elementos del arreglo
}

void imprimir_arreglo(int a[], int tam)
{
  // Imprime todos los element	os
}

float calcular_promedio(int a[], int tam);
int busca_mayor(int a[], int tam);	
int busca_menor(int a[], int tam);


int main(void) {

  int arreglo[N];
  ingresar_elemen, N);
  imprimir_arreglo(arreglo, N);

  return 0;
}

#include <stdio.h>
#define N 10

void ingresar_elementos(int a[], int tam)
{
  for(int i=0;i<tam;i++){
    printf("Ingrese el elemento %d: ", i);
    scanf("%d", &a[i]);
  }
}

void imprimir_arreglo(int a[], int tam)
{
  for(int i=0;i<tam;i++){
    printf("El elemento %d es el numero: %d\n", i, a[i]);
  }
}

int main(void) {

  int arreglo[N];
  ingresar_elementos(arreglo, N);
  imprimir_arreglo(arreglo, N);

  return 0;
}


#include <stdio.h>
#define N 10

void ingresar_elementos(int a[], int tam)
{
  for (int i = 0; i < tam ; i++){
    printf("Ingrese el elemento [%d]: ", i);
    scanf("%d", &a[i]);
  }
}

void imprimir_arreglo(int a[], int tam)
{

  for (int i = 0; i < tam ; i++){
    printf("[%d]", a[i]);
  }
}

int main(void) {

  int arreglo[N] = {0};
  ingresar_elementos(arreglo, N);
  imprimir_arreglo(arreglo, N);

  return 0;
}d ingresar_elementos(int a[], int tam)
{
  for(int i = 0; i < tam; i++) {
    printf("Ingrese los elementos del arreglo: ");
    scanf("%d", &a[i]);
  }
}

void imprimir_arreglo(int a[], int tam)
{
  for(int i = 0;i < tam; i++) {
    printf("El elemento en el índice [%d] es: %d\n", i, a[i]);
  }
}

int main(void) {

  int arreglo[N];
  ingresar_elementos(arreglo, N);
  imprimir_arreglo(arreglo, N);

  return 0
    ,

#include <stdio.h>
#define N 5

    void ingresar_elementos(int a[], int tam)
    {
      for(int i=0;i<tam;i++){
        printf("ingresar el elemento [%d]: ",i);
        scanf("%d",&a[i]);
      }

    }

  void imprimir_arreglo(int a[], int tam)
  {
    for(int i=0;i<tam;i++)
      printf("Arreglo[%d]: %d\n",i ,a[i]);
  }

  float calcular_promedio(int a[],int tam){

    float prom=0;

    for(int i=0;i<tam;i++)
      prom+=a[i];
    prom/=tam;

    return prom;
  }

  int busca_mayor (int a[],int tam){

    int max=0;
    for(int i=0;i<tam;i++){
      if(a[i]>max)
        max=a[i];
    }
    return max;

  }

  int busca_menor (int a[],int tam){

    int min=a[0];
    for(int i=0;i<tam;i++){
      if(a[i]<min)
        min=a[i];
    }
    return min;


  }

  int main(void) 
  {

    int arreglo[N];
    ingresar_elementos(arreglo, N);
    imprimir_arreglo(arreglo, N);

    printf("El promedio es: %.2f\n",calcular_promedio(arreglo,N));
    printf("El mayor es: %d\n",busca_mayor(arreglo,N));
    printf("El menor es: %d\n",busca_menor(arreglo,N));

    return 0;

  }
#include <stdio.h>
#define N 10

  void ingresar_elementos(int a[], int tam)
  {
    for(int i=0; i<tam; i++){
      printf("Ingresa el elemento %d del arreglo:",i+1);
      scanf("%d",&a[i]);
    }  
    // Cargar todos los elementos del arreglo
  }

  void imprimir_arreglo(int a[], int tam)
    for(int i=0; i<tam; i++){
      printf("El elemento %d del arreglo es:%d \n",i+1,a[i]);

    }  

}


float calcular_promedio(int a[], int tam);
int busca_mayor(int a[], int tam);
int busca_menor(int a[], int tam);


int main(void) {
  float promedio;
  int menor;
  int mayor;
  int arreglo[N];
  ingresar_elementos(arreglo, N);
  imprimir_arreglo(arreglo, N);
  promedio = calcular_promedio(arreglo,N);
  menor = busca_menor(arreglo,N);
  mayor = busca_mayor(arreglo,N);
  printf("el promedio es:%.2f \n", promedio);
  printf("El menor es:%d \n", menor);
  printf("El mayor es:%d \n", mayor);
  return 0;
}
float calcular_promedio (int a[], int tam){
  float prom;
  for(int i = 0; i<tam; i++){
    prom += a[i]; 
  }
  return prom / tam;
}
int busca_menor(int a[], int tam){
  int men = a[0];
  for(int i=0; i<tam; i++){
    if(a[i] < men){
      men = a[i];
    }
    else{}
  }
  return men;
}
int busca_mayor(int a[], int tam){
  int may= 0;
  for(int i=0; i<tam; i++){
    if(a[i] > may){
      may = a[i];
    }
  }
  return may;
#include <stdio.h>
#define TAM 3

  int main(void) {
    int i, j;
    int matriz [TAM][TAM];

    for (i=0; i<TAM; i++) {
      for (j=0; j<TAM; j++) {
        printf ("Ingrese el elemento [%d][%d]: ", i+1, j+1);
        scanf ("%d", &matriz [i][j]);
      }
    }
    for (i=0; i<TAM; i++) {
      for (j=0; j<TAM; j++) {
        if (j==TAM-1)
          printf ("%d \n", matriz [i][j]);
        else
          printf ("%d ", matriz [i][j]);
      }

    }

    return 0;
  }
}


#include <stdio.h>
#define N 10

void ingresar_elementos(int a[], int tam)
{
  for(int i=0;i<tam;i++){
    printf("Ingrese el elemento %d: ", i);
    scanf("%d", &a[i]);
  }
}

void imprimir_arreglo(int a[], int tam)
{
  for(int i=0;i<tam;i++){
    printf("El elemento %d es el numero: %d\n", i, a[i]);
  }
}
float calcular_promedio (int a[], int tam){
  float prom=0, suma=0;
  for(int i=0;i<tam;i++){
    suma+=a[i];
  }
  prom=suma/tam;
  printf("El promedio es: %f\n", prom);
  return 0;
}
int buscar_maximo(int a[],int tam){
  int max=a[0];
  for(int i=0;i<tam;i++){
    if (a[i] > max )
      max = a[i];

  }
  printf("El maximo es: %d\n", max);
  return max;
}
int buscar_minimo(int a[],int tam){
  int min=a[0];
  for(int i=0;i<tam;i++){
    if (a[i] < min )
      min = a[i];
  }
  printf("El minimo es: %d\n", min);
  return min;
}


int main(void) {

  int arreglo[N];
  ingresar_elementos(arreglo, N);
  imprimir_arreglo(arreglo, N);
  calcular_promedio(arreglo, N);
  buscar_maximo(arreglo, N);
  buscar_minimo(arreglo, N);
  return 0;
}
#include <stdio.h>
#define N 10


float calcular_promedio(int a[], int tam){
  float sum = 0;

  for(int i = 0; i < tam; i++){
    sum += a[i];
  }

  return sum/tam;
}

int busca_mayor(int a[], int tam){
  int max = a[0];

  for(int i = 0; i < tam; i++){
    if(a[i] > max)
      max = a[i];
  }
  return max;
}
int busca_menor(int a[], int tam){
  int menor = a[0];

  for(int i = 0; i < tam; i++){
    if(a[i] < menor)
      menor = a[i];
  }
  return menor;
}
//separador
void ingresar_elementos(int a[], int tam)
{
  for (int i = 0; i < tam ; i++){
    printf("Ingrese el elemento [%d]: ", i);
    scanf("%d", &a[i]);
  }
}

void imprimir_arreglo(int a[], int tam)
{
  for (int i = 0; i < tam ; i++){
    printf("[%d]\n", a[i]);
  }
}

int main(void) {

  int arreglo[N] = {0};
  ingresar_elementos(arreglo, N);
  imprimir_arreglo(arreglo, N);

  printf("El promedio es: %f\n", calcular_promedio(arreglo, N));
  printf("El mayor es: %d\n", busca_mayor(arreglo, N));
  printf("El menor es: %d\n", busca_menor(arreglo, N));

  return 0;
} 


#include <stdio.h>
#define N 5

void ingresar_elementos(int a[], int tam)
{
  for(int i = 0; i < tam; i++){
    printf("Ingrese un número: ");
    scanf("%d", &a[i]);
  }
}

void imprimir_arreglo(int a[], int tam)
{
  for(int i = 0;i < tam; i++) {
    printf("El elemento en el índice [%d] es: %d\n", i, a[i]);
  }
}

float calcular_promedio(int a[], int tam){
  float prom;
  float sum;
  for(int i = 0;i < tam; i++) {
    sum += a[i];
  }
  prom= sum/tam;
  printf("El promedio es: %.2f", prom);
  return prom;
}
int busca_mayor(int a[], int tam){
  int max= a[0];
  for(int i = 0;i < tam; i++){
    if(a[i]>max)
      max= a[i];
  }
  return max;
}

int busca_menor(int a[], int tam){
  int min= a[0];
  for(int i = 0;i < tam; i++){
    if(a[i] < min)
      min= a[i];
  }
  return min;
}


int main(void) {

  int arreglo[N];
  ingresar_elementos(arreglo, N);
  imprimir_arreglo(arreglo, N);
  calcular_promedio(arreglo, N);
  printf("\nEl mayor es: %d", busca_mayor(arreglo, N));
  printf("\nEl menor es: %d", busca_menor(arreglo, N));

  return 0;
}
⠀⠀⠀⠀⠀
