#include<stdio.h>

// Solicitar un número y validar que sea positivo
// Devolver el número positivo
int ingreso_y_validar(void);

int main(void) {

  // Declarar la variable que es un arreglo
  int arreglo[4]; // 4 elementos
                  // primer índice-> 0
                  // último índice-> 3

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
