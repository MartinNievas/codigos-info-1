#include <stdio.h>//Kisinger Leandro
#define TAM 20

struct cliente{
  char apellido [ TAM ];
  char nombre [ TAM ];
  int numero_tel;
  int dni;
  char calle [ TAM ];
  char ciudad [ TAM ];
};

int main () {

  struct cliente clte;

  printf ( "Ingrese el apellido: " );
  scanf ( "%s", &clte.apellido[0] );

  printf ( "Ingrese el nombre: " );
  scanf ( "%s", clte.nombre );

  printf ( "Ingrese el Numero de telefono: " );
  scanf ( "%d", &clte.numero_tel );

  printf ( "Ingrese el DNI: " );
  scanf ( "%d", &clte.dni );

  printf ( "Ingrese la calle: " );
  scanf ( "%s", clte.calle );

  printf ( "Ingrese la ciudad: " );
  scanf ( "%s", clte.ciudad );

  printf ( "El nombre completo es: %s %s\nEl numero de telefono es: %d\nEl DNI es: %d\nSu ubicacion es: %s _ %s ", clte.apellido, clte.nombre, clte.numero_tel, clte.dni, clte.calle, clte.ciudad );
  return 0;
}


