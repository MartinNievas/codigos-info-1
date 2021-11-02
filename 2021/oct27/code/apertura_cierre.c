#include <stdio.h>

int main(void) {

  FILE *fp;
  int val = 100;

  return 0;
}

void cargar_elemento( )
{
  fPtr = fopen("test.dat", "rb+");

  if (fPtr == NULL){
    printf("El archivo no existe. Creando el archivo");
    fPtr = fopen("test.dat", "wb+");

    if (fPtr == NULL)
      printf("El archivo no se puede abrir");
    else
      carga_un_elemento();

  }  else {
    printf("El archivo existe\n");
    carga_un_elemento();
  }
}

void imprimir_elemeto()
{
  fp = fopen("test.dat", "rb+");

  if (fPtr == NULL)
    printf("El archivo no se puede abrir o no existe");
  else {
    imprimir_elementos();
  }
}
