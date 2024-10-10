#include <stdio.h>

struct inventario{
  char nombre[30];
  int numero_parte;
  float precio;
  int stock;
};

struct estructura{
  char direccion[20];
  char ciudad[25];
  char codpost[6];
};

int main(int argc, char *argv[]) {

  struct inventario Momo = {"Tito Calderon", 2, 12.5, 32};

  struct estructura Calderon = {"Italia", "Egipcio", "0530"};


  printf("nombre: %s\n", Momo.nombre);
  printf("numero de parte: %d\n", Momo.numero_parte);
  printf("precio: %f\n", Momo.precio);
  printf("stock: %d\n", Momo.stock);
  printf("\n----------------------------------------------------\n\n");
  printf("Direccion: %s\nCiudad: %s\nCodigo postal: %s\n",Calderon.direccion,Calderon.ciudad,Calderon.codpost);

  return 0;
}

