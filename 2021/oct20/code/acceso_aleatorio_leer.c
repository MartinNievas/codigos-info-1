#include <stdio.h>
#define TAM 4
// Antes de correr este programa, tiene que estar creado el archivo
// lista_binaria.dat mediante el programa acceso_aleatorio2.c

typedef struct{
  long int id;
  char nombre[20];
  float precio;
}prod_t;

int main(void)
{

  prod_t producto = {0,"",0.0};
  FILE *fPtr;

  fPtr = fopen("lista_binaria.dat", "rb");

  if (fPtr == NULL){
    printf("Problemas para abrir el archivo\n");
  }  else {
    printf("El archivo se pudo abrir de forma correcta\n");

    while (!feof(fPtr)) {

      if(producto.id != 0){
        printf("nombre: %s\n", producto.nombre);
        printf("precio: %f\n", producto.precio);
        printf("id: %ld\n", producto.id);
      }
      fread(&producto, sizeof(prod_t), 1, fPtr);
    }
    fclose(fPtr);
  }

  return 0;
}
