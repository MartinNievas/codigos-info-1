#include <stdio.h>
// Repetir una lista de opciones y realizar tareas

int ingresar_opcion_valida(void);

int main(void) {

  int option;

  option = ingresar_opcion_valida();

  while(option != 4){


    option = ingresar_opcion_valida();
  }



  return 0;
}


int ingresar_opcion_valida(void){

  int op;

  do{
  printf("Ingrese una opción válida: ");
  printf("1. Café\n2. Cortado\n3. Té\n4.Salir");
  scanf("%d", &op);

  }while(!(op > 0 || op < 4));

  return op;

}

