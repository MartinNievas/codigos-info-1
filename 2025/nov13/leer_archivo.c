#include <stdio.h>
#define TAM 3

typedef struct{
  char nombre[20];
  long int id;
  float precio;
}prod_t;

int main(void)
{

  prod_t producto;
  FILE *fPtr;

  fPtr = fopen("lista_binaria.dat", "rb");

  if (fPtr == NULL){
    printf("Problemas para abrir el archivo\n");
  }  else {
    printf("El archivo se pudo abrir de forma correcta\n");

    int i = 0;
    while(!feof(fPtr)){
        fseek(fPtr, i * sizeof(prod_t), SEEK_SET);

        fread(&producto, sizeof(prod_t), 1, fPtr);

        /** if (producto.id != 0){ */
          printf("Nombre producto: %s\n", producto.nombre);
          printf("ID %i\n", i);
          printf("precio %f\n", producto.precio);
        /** } */

        i++;
    }
  }
  fclose(fPtr);

  return 0;
}
