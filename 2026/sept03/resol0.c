#include <stdio.h>
void inicializarEnCero(int vec[], int tam);

#define TAM 5

int main(void) {
  int arreglanto[TAM];

  inicializarEnCero(arreglanto, TAM);

  for(int i=0;i<TAM;i++){
    printf("%d\n", arreglanto[i]);
  }

  return 0;
}

void inicializarEnCero(int vec[], int tam){
  for(int i=0;i<tam;i++){
    vec[i]=0;
  }
}
////////////////////////////////////////////////////////////////////////////	
//B)mamani y llanqui
#include <stdio.h>
#define K 10
int sumarElementos( int vec[],int tam){
  int suma=0;
  for (int i = 0; i<tam; i++){ 
    suma+=vec[i];
  }
  return suma;
}

int main(int argc, char *argv[]) {
  int var[K] = {1,2,6,7,8};
  printf(" La suma total:%d ",sumarElementos(var,T));
  return 0;
}

//////////////////////////////////////////////////////////////////////
//lopez y tessio
#include <stdio.h>

/*	
    Ejercicios de Arreglos y Funciones (Fáciles - sin punteros)
    Escriba el código en C para implementar las siguientes funciones:
    a) void inicializarEnCero(int vec[], int tam): Llena todos los
    elementos del arreglo con el valor 0.
    b) int sumarElementos(int vec[], int tam): Devuelve la suma de
    todos los elementos del arreglo.
    c) float calcularPromedio(int vec[], int tam): Retorna el pro-
    medio de los elementos del arreglo.
    d) int contarPares(int vec[], int tam): Cuenta y retorna la can-
    tidad de números pares en el arreglo.
    e) int contarImpares(int vec[], int tam): Cuenta y retorna la
    cantidad de números impares en el arreglo.
    */
void inicializarEnCero(int vec[], int tam);
int sumarElementos(int vec[], int tam);
#define Elem 10

int main(void) {
  //ejercicio 1
  /*
     int vec[Elem];
     inicializarEnCero(vec,Elem);
     for(int a=0;a<Elem;a++){
     printf("%d ",vec[a]);
     }
     */
  //ejercicio 2
  /*
     int vec1[Elem];
     int num;
     for(int a=0;a<Elem;a++){
     printf("\nIngrese el elemento %d del arreglo: ",a+1);
     scanf(" %d",&vec1[a]);
     }
     printf("La suma de todos los elementos del arreglo es: %d",sumarElementos(vec1,Elem));
     */
  //Ejercicio 3


  return 0;
}

void inicializarEnCero(int vec[], int tam){
  for(int a=0;a<tam;a++){
    vec[a]=0;
  }
}


int sumarElementos(int vec[], int tam){
  int suma=0;
  for(int a=0;a<Elem;a++){
    suma+=vec[a];
  }
  return suma;
}
/////////////////////////////////////////



//maxi:
#include <stdio.h>

void inicializarEnCero(int matriz[], int tam){
  int i; 
  for(i=0;i<tam;i++){
    matriz[i]=0;
  }
}


int main(int argc, char *argv[]) {
  int test[]={1,2,3,4,5,6,7,8,9,1,0,1,2};

  inicializarEnCero(test, 5);

  for(int i=0;i<13;i++)
    printf("%d ", test[i]);
  return 0;
}
//C)Llanqui
#include <stdio.h>
#define T 10
float calprom( int vec[],int tam){
  float prom=0;
  for (int i = 0; i<tam; i++){ 
    prom+=vec[i]/(float)tam;
  }
  return prom;
}
int main(int argc, char *argv[]) {
  int var[T] = {1,2};
  printf("El promedio es:%f ",calprom(var,T));
  return 0;
}



