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
  int pos = 0;

  fPtr = fopen("lista_binaria.dat", "wb");

  if (fPtr == NULL){
    printf("Problemas para abrir el archivo\n");
  }  else {
    printf("El archivo se pudo abrir de forma correcta\n");

      for ( int i = 0;  i < TAM;  i++){
        printf("Ingrese el nombre del producto: ");
        scanf("%s", producto.nombre);
        printf("Ingrese el id: ");
        scanf("%ld", &producto.id);
        printf("Ingrese el precio: ");
        scanf("%f", &producto.precio);

        fseek(fPtr, producto.id* sizeof(prod_t), SEEK_SET);
        fwrite(&producto, sizeof(prod_t), 1, fPtr);
        //pos++;
    }
  }
  fclose(fPtr);

  return 0;
}
