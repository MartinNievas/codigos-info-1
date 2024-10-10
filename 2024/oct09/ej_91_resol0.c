#include <stdio.h>

struct cliente {
  char apellido [20];
  char nombre [20];
  int numero ;
  int dni ;
  char calle [20];
  char ciudad [20];
};

int main(int argc, char *argv[]) {
  struct cliente datos;
  printf("Ingrese su apellido: ");
  scanf("%s", datos.apellido);
  printf("Ingrese su nombre: ");
  scanf("%s", datos.nombre);
  printf("Ingrese su numero: ");
  scanf("%d", &datos.numero);
  printf("Ingrese su DNI: ");
  scanf("%d", &datos.dni);
  printf("Ingrese su calle: ");
  scanf("%s", datos.calle);
  printf("Ingrese su ciudad: ");
  scanf("%s", datos.ciudad);

  printf("\n");
  printf("Su apellido es: %s\n", datos.apellido);
  printf("Su nombre es: %s\n", datos.nombre);
  printf("Su numero es: %d\n", datos.numero);
  printf("Su DNI es: %d\n", datos.dni);
  printf("Su calle es: %s\n", datos.calle);
  printf("Su ciudad es: %s\n", datos.ciudad);

  return 0;
}
