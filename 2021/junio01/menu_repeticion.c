#include <stdio.h>

int main(void) {

  int op;

  printf("1) Trabajadores 1\n");
  printf("2) Trabajadores 2\n");
  printf("3) Salir \n");
  printf("Ingrese una opción: ");
  scanf("%d", &op);

  while (op != 3){
    switch(op){
    case 1:
      printf("Datos de trabajadores1\n");
    break;
    case 2:
      printf("Datos de trabajadores2\n");
    break;
    default:
      printf("Opción no válida\n");
    }

    // Terminé las operaciones de cada trabajador dentro del switch
    // Ahora que salí del switch, tengo que preguntar si quiere
    // cargar otro tipo de empleado o salir
    printf("1) Trabajadores 1\n");
    printf("2) Trabajadores 2\n");
    printf("3) Salir \n");
    printf("Ingrese una opción: ");
    scanf("%d", &op);
  }

  return 0;
}
