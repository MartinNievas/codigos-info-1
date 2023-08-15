#include <stdio.h>
// Función que devuelve un número
// ingresado por el usuario dentro
// del rango especificado
int ingresar_y_validar(int inferior, int superior);

int main(void) {

  int num = ingresar_y_validar(10, 100);
  printf("El número ingresado es: %d", num);

  return 0;
}


int ingresar_y_validar(int inferior, int superior){

    int num;

    printf("Ingrese un número: ");
    scanf("%d", &num);

    while (num < inferior || num > superior){
      printf("Ingrese un número: ");
      scanf("%d", &num);
    }

  return num;
}
