#include <stdio.h>

int ingreso_y_validacion(void);

int main(void) {

  printf("El resultado es: %d\n", ingreso_y_validacion());

  return 0;
}

// Solo ingresar positivos
int ingreso_y_validacion(void){

  int num;
  do{
    printf("Ingrese un número: ");
    scanf("%d", &num);
    if( num < 0){
      printf("Número incorrecto, intente nuevamente\n");
    }
  }while(num < 0);
  return num;
}


