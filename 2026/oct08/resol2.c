///Ejercicio 2 Maxi

#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  float *vector;
  float suma = 0;
  do{
    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);

    if(n<0)
      printf("\nEl numero ingresado no es valido, intente nuevamente\n");
  }while(n<0);
  vector = malloc(n*sizeof(float));
  if(vector==NULL)
    return -1;


  for(int i = 0 ; i<n ; i++){
    printf("Ingrese el elemento numero %d: ", i+1);
    scanf("%f", vector + i);
  }

  for(int i=0;i<n;i++){
    suma+=*(vector+i);
  }

  printf("\nEl promedio es: %.2f", suma/n);

  free (vector);

  return 0;
}

//Ejercicio 3 Maxi
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, n2;
  int *vector;
  int maxp, minp;


  do{
    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);

    if(n<0)
      printf("\nEl valor ingresado no es valido, intentelo nuevamente\n\n");
  }while(n<0);
  vector = malloc(n*sizeof(int));
  if(vector==NULL)
    return-1;

  for(int i=0;i<n;i++){
    printf("Ingrese el elemento numero %d: ", i+1);
    scanf("%d", &n2);

    *(vector+i)=n2;
  }

  int max = vector[0];
  int min =  *vector;
  for(int i=0;i<n;i++){
    if(*(vector+i)<min){
      min= *(vector+i);
      minp = i+1;
    }

    if(*(vector+i)>max){
      max= *(vector+i);
      maxp = i+1;
    }
  }

  printf("max %d, posicion %d. min %d, posicion %d", max, maxp, min, minp);

  free (vector);

  //ejercicio 3 samu
#include <stdio.h>
#include <stdlib.h>

  int main() {
    int n;
    int *vector;

    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);

    vector = malloc(n*(sizeof(int)));

    if(vector == NULL){
      printf("falla de carga de memoria");
      return 1;
    }

    for(int i=0; i < n; i++){
      printf("cargar el elemento %d: ", i+1);
      scanf("%d", vector+i);
    }

    int posMax = 0;
    for(int j=0; j < n; j++){
      if(*(vector+j) > *(vector+posMax)){
        posMax = j;
      }
    }
    int posMin = 0;
    for(int k=0; k < n; k++){
      if(*(vector+k) < *(vector+posMin)){
        posMin = k;
      }
    }
    printf("el maximo es: %d\n", *(vector+posMax));
    printf("en la posicion: %d\n", posMax+1);
    printf("el minimo es: %d\n", *(vector+posMin));
    printf("en la posicion: %d\n", posMin+1);
    free(vector);
    return 0;
  }
