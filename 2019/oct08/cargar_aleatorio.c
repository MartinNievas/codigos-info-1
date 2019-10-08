#include <stdio.h>

typedef struct {
  int num; 
  int dni; 
  char nombre[10]; 
}corredor_t;

int main(void)
{
  FILE *cfPtr;
  
  if (( cfPtr = fopen("valor_nombre.dat", "rb+") ) == NULL) {
    puts("El archivo no puede ser abierto.");
  }
  else {
    corredor_t corredor = {0, 0, ""};

    printf("%s", "\nIngrese el número del corredor(0 para terminar): ");
    scanf("%d", &corredor.num);
    
    while (corredor.num != 0) {
   
      printf("%s", "\nIngrese el documento y nombre del corredor:");
  
      fscanf(stdin, "%d%10s", &corredor.dni, corredor.nombre);
 
      fseek(cfPtr, (corredor.num - 1) * sizeof(corredor_t), SEEK_SET);

      fwrite(&corredor, sizeof(corredor_t), 1, cfPtr);

      printf("%s", "\nIngrese el número del corredor: ");
      scanf("%d", &corredor.num);
    }
    fclose(cfPtr); 
  }
}
