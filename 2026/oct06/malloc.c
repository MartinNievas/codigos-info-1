#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int *arr;
  int n = 0;

  do{
    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);
  }while(n < 0);

  arr = malloc(n * sizeof(int));
  if(arr == NULL){
    printf("ERROR: No se logró reservar memoria\n");
    return -1;
  }

  for (int i = 0; i < n; i++){
    *(arr + i) = 0;
  }

  for (int i = 0; i < n; i++){
    printf("%d\n", *(arr + i));
  }

  free(arr);
  return 0;
}
