#include <stdio.h>
int ingresar_y_sumar_numeros(void);
int ingresar_y_restar_numeros(void);
int ingresar_y_multiplicar_numeros(void);

int main(void) {

  printf("1)Suma\n2)Resta\n3)Producto\n");
  int op;
  int resultado;
  printf("Ingrese una operación: ");
  scanf("%d", &op);

  switch(op){
    case 1:
      // Completar
      break;
    //
    // Completar
    //
    default:
      // Completar
      break;
  }
  printf("El resultado es: %d\n", resultado);

  return 0;
}

