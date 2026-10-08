//Ejercicio 5 Maxi
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  int *vector1;
  int *vector2;

  do{
    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);

    if(n<0)
      printf("\nEl valor ingresado es invalido, intentelo nuevamente\n\n");
  }while(n<0);

  vector1 = calloc(n, n*sizeof(int));
  vector2 = calloc(n, n*sizeof(int));

  if(vector1==NULL||vector2==NULL)
    return -1;


  for(int i=0;i<n;i++){
    printf("\nIngrese el valor numero %d: ", i+1);
    scanf("%d", vector1+i);
  }

  for(int i =0; i<n; i++){
    *(vector2+i) = *(vector1+i);
  }

  for(int i =0; i<n; i++){
    printf("\nVector1 = [%d]		-	Vector2 = [%d]\n", *(vector1+i), *(vector2+i));
  }

  free(vector1);
  free(vector2);
  return 0;



  // Ejerc 5 Yoli

#include <stdio.h>
#include <stdlib.h>

  int main() {

    int n;
    int *vec1;
    int *vec2;

    printf("Ingrese la cantidad de elementos del vector: ");
    scanf("%d",&n);

    vec1 = malloc(n*sizeof(int));
    vec2 = malloc(n*sizeof(int));

    if (vec1 == NULL || vec2 == NULL){
      printf("ERROR\n");
      return -1;
    }

    printf("\nIngrese los elementos: ");
    for(int i=0; i<n; i++){
      scanf("%d",vec1+i);
    }

    for(int i=0; i<n; i++){
      *(vec2+i) = *(vec1+i);
    }

    printf("\nLos vectores son:");

    printf("\nVector 1: ");
    for(int i=0; i<n; i++){
      printf("%d ", *(vec1+i));
    }

    printf("\nVector 2: ");
    for(int i=0; i<n; i++){
      printf("%d ", *(vec2+i));
    }

    free(vec1);
    free(vec2);

    return 0;
  }
