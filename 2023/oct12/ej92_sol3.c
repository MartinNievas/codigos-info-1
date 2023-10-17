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

  struct cliente cliente1;

  printf ("Ingrese su apellido: ");
  scanf ("%20s", cliente1.apellido);

  printf ("Ingrese su nombre: ");
  scanf ("%20s", cliente1.nombre);

  printf ("Ingrese su numero: ");
  scanf ("%d", &cliente1.numero);

  printf ("Ingrese su dni: ");
  scanf ("%d", &cliente1.dni);

  printf ("Ingrese su calle: ");
  scanf ("%20s", cliente1.calle);

  printf ("Ingrese su ciudad: ");
  scanf ("%20s", cliente1.ciudad);

  printf("Apellido: %s\n", cliente1.apellido);
  printf("Nombre: %s\n", cliente1.nombre);
  printf("Numero: %d\n", cliente1.numero);
  printf("DNI: %d\n", cliente1.dni);
  printf("Calle: %s\n", cliente1.calle);
  printf("Ciudad: %s\n", cliente1.ciudad);

  return 0;
}
