#include <stdio.h>

struct cliente {
  char apellido[20];
  char nombre[20];
  int numero;
  int dni;
  char calle[20];
  char ciudad[20];
};

int main(void) {

  struct cliente cl1;

  printf("Ingrese su DNI: ");
  scanf("%d", &cl1.dni);
  printf("Ingrese el número: ");
  scanf("%d", &cl1.numero);
  printf("Ingrese el nombre: ");
  scanf("%s", cl1.nombre);
  printf("Ingrese el apellido: ");
  scanf("%s", &cl1.apellido[0]);

  printf("DNI: %d\n", cl1.dni);
  printf("número: %d\n", cl1.numero);
  printf("nombre: %s\n", cl1.nombre);
  printf("apellido: %s\n", cl1.apellido);


  return 0;
}
