#include <stdio.h>

int main(void)
{
  FILE *cfPtr; 
  char nombre[15];
  float num, mayor = -1;
  int contador = 0;
  int cont = 0;

  if (( cfPtr = fopen("productos1.csv", "r") ) == NULL) 
  {
    puts("El archivo no puede ser abierto");
  }
  else 
  {
    printf("Archivo abierto\n");
    
    while ( !feof(cfPtr) ) {

      fscanf(cfPtr,"%f%s", &num, nombre);
      
      // Contar las palabras que inician con 'B'
      if (nombre[0] == 'B')
      {
        printf("%s\n", nombre);
        contador++; 
      }
      cont++;

      if (num > mayor) 
      {
        printf("Actualiza--------------------------\n");
        mayor = num;
      }

    }
    printf("El mayor es: %.2f\n", mayor);
    printf("Palabras con 'B': %d\n", contador);
    printf("la cantidad total: %d\n", cont);
    fclose(cfPtr); 
  }
}
