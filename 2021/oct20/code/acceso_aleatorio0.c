#include <stdio.h>
#define TAM 3

typedef struct{
  long int id;
  char nombre[20];
  float precio;
}prod_t;

int main(void)
{

  prod_t producto;
  FILE *fPtr;

  fPtr = fopen("lista_binaria.dat", "wb");

  if (fPtr == NULL){
    printf("Problemas para abrir el archivo\n");
  }  else {
    printf("El archivo se pudo abrir de forma correcta\n");



    producto.id = 0;
    fseek(fPtr, producto.id* sizeof(prod_t), SEEK_SET);
    fwrite(&producto, sizeof(prod_t), 1, fPtr);
    for ( int i = 0;  i < TAM;  i++){
      printf("Ingrese el nombre del producto: ");
      scanf("%s", producto.nombre);
      printf("Ingrese el id: ");
      scanf("%ld", &producto.id);
      printf("Ingrese el precio: ");
      scanf("%f", &producto.precio);

      fseek(fPtr, producto.id* sizeof(prod_t), SEEK_SET);
      fwrite(&producto, sizeof(prod_t), 1, fPtr);
    }
    fclose(fPtr);
  }

  return 0;
}