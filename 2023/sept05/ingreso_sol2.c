#include <stdio.h>
#define TAM 10

int ingreso_y_validacion (void){

  int num;

  printf("Ingrese el numero: ");
  scanf("%d" , &num);

  while(num > 100 || num < 0){
    printf("Valor erroneo, ingrese el numero nuevamente: ");
    scanf("%d" , &num);
  }
  return num;
}

void ingresar_elemento (int a[], int tam)
{
  int i;
  for(i = 0; i < tam ; i++){
    a[i] = ingreso_y_validacion();
  }
}

void imprimir_arreglo(int a[] , int tam){
  int i;
  for( i=0; i < TAM ; i++){

    printf("El elemento a[%d] vale: %d\n" ,i , a[i]);

  }
}

float calcular_promedio(int a[] , int tam){

  int prom = 0, i;

  for(i = 0; i < tam ; i++){


    prom += a[i];


  }
  return prom/(float)tam;

}


int main (void) {

  int arreglo[TAM];
  float promedio;

  ingresar_elemento(arreglo, TAM);
  imprimir_arreglo(arreglo , TAM);


  promedio = calcular_promedio( arreglo , TAM); 

  printf("El promedio es: %.2f\n" , promedio);



  return 0;
}
