
#include <stdio.h>
#define TAM 20


struct cliente{
  char apellido [TAM];
  char nombre [TAM];
  int numero;
  int dni;
  char calle [TAM];
  char ciudad [TAM];
};
int main(int argc, char *argv[]) {

  struct cliente cl1;

  printf("Ingrese el apellido: ");
  scanf("%s", cl1.apellido);

  printf("Ingrese el nombre: ");
  scanf("%s", cl1.nombre);

  printf("Ingrese el Numero: ");
  scanf("%d", &cl1.numero);

  printf("Ingrese el DNI: ");
  scanf("%d", &cl1.dni);

  printf("Ingrese la calle: ");
  scanf("%s", cl1.calle);

  printf("Ingrese la ciudad: ");
  scanf("%s", cl1.ciudad);

  printf("El nombre completo es: %s %s\nEl numero es: %d\nEl DNI es: %d\nSu calle es: %s\n y la ciudad es: %s ", cl1.apellido, cl1.nombre, cl1.numero, cl1.dni, cl1.calle, cl1.ciudad);
  return 0;
}
