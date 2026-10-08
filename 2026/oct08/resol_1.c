
///Ejercicio 1 Maxi


#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, n2;
  int *vector;

  do{
    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);
  }while(n < 0);

  vector = malloc(n*sizeof (int));
  if(vector == NULL)
    return -1;

  for(int i=0; i<n; i++){
    printf("Ingrese el elemento numero %d: ", i+1);
    scanf("%d", &vector[i]);
  }

  for(int i=0; i<n; i++){
    printf("\n%d ",vector[i]);
  }

  free (vector);


  return 0;
}

//ejercicio 1 samu
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
    printf("cargar el elemento %d: ", i);
    scanf("%d", vector+i);
  }

  for(int j=0; j < n; j++){
    printf("%d\n", *(vector + i));
  }

  free(vector);
  return 0;
}
// ejercicio 2 samu
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  float *vector;
  float suma = 0;

  printf("Ingrese la cantidad de elementos: ");
  scanf("%d", &n);

  vector = malloc(n * sizeof(float));

  if(vector == NULL){
    printf("fallo en la matrix");
    return 1;
  }

  for(int i=0; i < n; i++){
    printf("cargar el elemento %d: ", i);
    scanf("%f", vector+i);
  }

  for(int i=0; i < n; i++){
    suma += *(vector+i);
  }

  printf("el promedio es: %.2f", (float)suma/n);

  free(vector);
  return 0;
}


///Ejercicio 2 Maxi
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  float *vector, n2;
  float suma = 0;

  printf("Ingrese la cantidad de elementos: ");
  scanf("%d", &n);

  vector = malloc(n*sizeof(int));
  if(vector==NULL)
    return -1;


  for(int i = 0 ; i<n ; i++){
    printf("Ingrese el elemento numero %d: ", i+1);
    scanf("%f", &n2);
    vector[i]=n2;
  }

  for(int i=0;i<n;i++){
    suma+=*(vector+i);
  }

  printf("\nEl promedio es: %.2f", suma/n);

  free (vector);

  return 0;
}

