
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

  struct cliente C1;
  printf("Ingrese nombre: ");
  scanf("%s", C1.nombre);

  printf("Ingrese apellido: ");
  scanf("%s", C1.apellido);

  printf("Ingrese número: ");
  scanf("%d", &C1.numero);

  printf("Hola Bella persona le solicito los siguientes datos: \n Su apellido. \n Su nombre. \n Su Codigo de cliente. \n Su DNI. \n Su direccion. \n Su Ciudad \n ------------------------------------------------------------------ \n\n");
  scanf("%s %s %d %d %s %s", C1.apellido, C1.nombre , &C1.numero , &C1.dni , C1.calle , C1.ciudad);

  printf ("\n ------------------------------------------------------------------ \n Los datos ingresados son los siguientes: \n Apellido: %s\n Nombre %s\n Num.Cliente: %d\n D.N.I: %d\n Calle: %s\n Ciudad: %s\n ------------------------------------------------------------------ \n", C1.apellido, C1.nombre, C1.numero, C1.dni, C1.calle, C1.ciudad);	



  return 0;
}

