#include <stdio.h>

typedef struct {
  int num; 
  int dni; 
  char nombre[10]; 
}corredor_t;

int main(void)
{
  FILE *cfPtr; // accounts.dat file pointer
  if (( cfPtr = fopen("valor_nombre.dat", "rb+") ) == NULL) {
    puts("El archivo no puede ser abierto.");
  }
  else {
    printf("%-10s%-8s%-11s\n", "Número", "DNI", "nombre");

    while (!feof(cfPtr)) {

      corredor_t corredor = {0, 0, ""};
      int result = fread(&corredor, sizeof(corredor_t), 1, cfPtr);

      if (result != 0 && corredor.num != 0) {
        printf("%-10d%-8d%-11s\n",
            corredor.num, corredor.dni,
            corredor.nombre);
      }
    }
    fclose(cfPtr); // fclose closes the file
  }
}
