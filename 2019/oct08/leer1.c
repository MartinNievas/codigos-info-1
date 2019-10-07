// data from: https://github.com/luisgagocasas/rrhh/blob/master/usuarios-csv.csv
#include <stdio.h>

int main(void)
{
  FILE *cfPtr; 
  char nombre[15];
  char apellido[15];
  int num;

  if (( cfPtr = fopen("personas0.csv", "r") ) == NULL) 
  {
    puts("El archivo no puede ser abierto");
  }
  else 
  {
    printf("Archivo abierto\n");
    
    while ( !feof(cfPtr) ) {
      fscanf(cfPtr,"%s%s%d", nombre, apellido, &num);
      printf("%15s\t%15s\t%d\n", nombre, apellido, num);
    }
    fclose(cfPtr); // fclose closes file
  }
}
