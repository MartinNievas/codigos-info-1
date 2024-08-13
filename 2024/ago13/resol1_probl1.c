#include<stdio.h>

// Solicitar un número y validar que sea positivo
// Devolver el número positivo
int ingreso_y_validar(void);

int main(void) {

  int arreglo[4]; // 4 elementos
  int i ;

  for( i = 0; i < 4; i ++){
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);
    arreglo[i] = num;
  }

  for ( i = 0; i < 4; i ++)
    printf("El valor de arreglo[%d] es: %d \n",i ,arreglo [i]);
}

int ingreso_y_validar(void){
  int num;

  printf("Ingrese un numero: ");
  scanf("%d", &num);
  if(num>0){
    printf("el numero es positivo");
  }
  return num;
}
