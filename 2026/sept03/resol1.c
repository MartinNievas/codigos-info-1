int main(int argc, char *argv[]) {
  int test[]={1,2,3,4,5,6,7,8,9,1,0,1,2};

  sumarElementos(test, 12);

  for(int i=0;i<13;i++)
    printf("%d ", test[i]);
  return 0;
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
include <stdio.h>

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
  // Alternativa
  float prom=0;
  for (int i = 0; i<tam; i++){ 
    prom+=vec[i];
  }
  prom /= (float) tam;
  return prom;
}
int main(int argc, char *argv[]) {
  int var[T] = {1,2};
  printf("El promedio es:%f ",calprom(var,T));
  return 0;
}

int contarPares( int vec[],int tam){
  int pares=0;
  for (int i = 0; i<tam; i++){ 
    if(vec[i]%2 == 0)
      pares++;
  }
  return pares;
}



//Ejercicio E)
//mamani
#include <stdio.h>
#define K 10
int contarImpares( int vec[],int tam){
  int impr=0;
  for (int i = 0; i<tam; i++){ 
    impr+=vec[i]%2;
  }
  return impr;
}
int main(int argc, char *argv[]) {
  int var[T] = {5,2,4,4,4};
  printf("cantidad de impares:%d ",contarImpares(var,K));
  return 0;
}

//Ejercicio F 
//llanqui
#include <stdio.h>
#define T 10
int buscarelem( int vec[],int tam,int clave){
  int res = -1;
  for (int i = 0; i<tam; i++){ 
    if(vec[i]==clave){
      res = i;
    }

  }
  return res;
}
int main(int argc, char *argv[]) {
  int var[T] = {556,289,489,123,478};
  int clave=123;
  printf("La clave esta en:%d ",buscarelem(var,T,clave));
  return 0;
}


