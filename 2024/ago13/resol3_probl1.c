#include<stdio.h>

// Solicitar un número y validar que sea positivo
// Devolver el número positivo
int num, num2, num3;

int ingreso_y_validar(int a){
  while (!(num>0)){
    printf("El numero ingresado no es positivo, ingrese nuevamente:");
    scanf("%d", &num);
  }
  return (num);
}

int main(void) {

  int arreglo[4]; // 4 elementos
  int i ;

  for( i = 0; i < 4; i ++){

    printf("Ingrese un número: ");
    scanf("%d", &num);
    ingreso_y_validar(num);
    arreglo[i] = num;
  }

  for ( i = 0; i < 4; i ++)
    printf("El valor de arreglo[%d] es: %d \n",i ,arreglo [i]);
  return 0;
}



printf("El valor de arreglo[%d] es: %d \n",i ,arreglo [i]);
}
