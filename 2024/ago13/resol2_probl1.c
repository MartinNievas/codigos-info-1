#include<stdio.h>

// Solicitar un número y validar que sea positivo
// Devolver el número positivo
int ingreso_y_validar(void){
  int num;
  printf("Ingrese un numero positivo: ");
  scanf("%d", &num);
  while(num<0){
    printf("El numero ingresado es invalido, vuelva a ingresar.");
    scanf("%d", &num);
  }
  return num;
}

int main(void) {

  int arreglo[4]; // 4 elementos
  int i ;

  for( i = 0; i < 4; i ++){
    int num;
    num = ingreso_y_validar(    );
    arreglo[i] = num;
  }

  for ( i = 0; i < 4; i ++)
    printf("El valor de arreglo[%d] es: %d \n",i ,arreglo [i]);
}
