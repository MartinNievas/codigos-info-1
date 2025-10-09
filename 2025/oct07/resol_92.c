#include <stdio.h>

struct cliente {
  char apellido[20];
  char nombre[20];
  char inicial;
  int numero;
  int dni;
  char calle[20];
  char ciudad[20];
};

//codeshare.io/info1R1

int main(void) {

 struct cliente c1;

 printf("Ingrese el Apellido: ");
 scanf("%[^\n]s", c1.apellido);
 printf("Ingrese el Nombre: ");
 scanf("%s", c1.nombre);
 printf("Ingrese el número: ");
 scanf("%d", &c1.numero);
 printf("Ingrese la inicial: ");
 scanf(" %c", &c1.inicial);

 printf("Apellido: %s\n", c1.apellido);
 printf("Nombre: %s\n", c1.nombre);
 printf("Número: %d\n", c1.numero);
 printf("Inicial: %c\n", c1.inicial);

  return 0;
}
