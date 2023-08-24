#include <stdio.h>
#define TAM 1000

int main(void) {

  int nota[TAM];
  int tam;

  do{
    printf("Ingrese la cantidad: ");
    scanf("%d", &tam);
  }while(tam < 0 || tam > TAM);

  for (int i = 1; i <= tam; i++){
    printf("Ingrese la nota: ");
    scanf("%d", &nota[i]);
  }

  for (int i = 1; i <= tam; i++){
    printf("nota: %d", nota[i]);
  }

  return 0;
}
