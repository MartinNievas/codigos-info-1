#include <stdio.h>
struct cliente {
  char apellido [20];
  char nombre [20];
  int numero ;
  int dni;
  char calle [20];
  char ciudad [20];
};

int main(int argc, char *argv[]) {
  struct cliente clientes[2];

  for (int i = 0; i < 2; i++){
    printf("Ingrese Apellido: ");
    scanf("%s", clientes[i].apellido);
    printf("Ingrese DNI: ");
    scanf("%d", &clientes[i].dni);
  }


  printf("Ingrese Nombre: ");
  scanf("%s", cl.nombre);
  printf("Ingrese numero: ");
  scanf("%d", &cl.numero);
  printf("Ingrese dni: ");
  scanf("%d", &cl.dni);
  printf("Ingrese calle: ");
  scanf("%s", cl.calle);
  printf("Ingrese ciudad: ");
  scanf("%s", cl.ciudad);

  printf("Apellido: %s\n", cl.apellido);
  printf("nombre: %s\n", cl.nombre);
  printf("numero: %d\n", cl.numero);
  printf("dni: %d\n", cl.dni);
  printf("calle: %s\n", cl.calle);
  printf("ciudad: %s\n", cl.ciudad);
  return 0;
}
