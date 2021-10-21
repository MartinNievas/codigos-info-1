#include <stdio.h>
#define TAM 4

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

    printf("Ingrese el id: ");
    scanf("%ld", &producto.id);
    while( producto.id != -1){
      printf("Ingrese el nombre del producto: ");
      scanf("%s", producto.nombre);
      printf("Ingrese el precio: ");
      scanf("%f", &producto.precio);

      fseek(fPtr, pos++ * sizeof(prod_t), SEEK_SET);
      // SEEK_SET Desde el inicio del archivo
      // SEEK_CUR Desde el el punto anterior
      // SEEK_END Desde el final del archivo

      fwrite(&producto, sizeof(prod_t), 1, fPtr);

      printf("Ingrese el id: ");
      scanf("%ld", &producto.id);
    }
    fclose(fPtr);
  }

  return 0;
}
