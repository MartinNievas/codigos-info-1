// data from: https://github.com/luisgagocasas/rrhh/blob/master/usuarios-csv.csv
#include <stdio.h>

int main(void)
{
  FILE *cfPtr; 
  char caracter;

  if (( cfPtr = fopen("personas0.csv", "r") ) == NULL) 
  {
    puts("El archivo no puede ser abierto");
  }
  else 
  {
    printf("Archivo abierto\n");
    
    while ( !feof(cfPtr) ) {
      caracter = fgetc(cfPtr);
      printf("%c\n", caracter);
    }
    fclose(cfPtr); // fclose closes file
  }
}
