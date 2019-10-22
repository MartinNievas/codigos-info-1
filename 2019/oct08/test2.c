// Fig. 11.10: fig11_10.c
// Creating a random-access file sequentially
#include <stdio.h>

typedef struct  {
  char nombre[20];
  float precio;
} producto_t;

int main(void)
{
  FILE *cfPtr; // accounts.dat file pointer
  // fopen opens the file; exits if file cannot be opened
  if (( cfPtr = fopen("productos1.dat", "wb") ) == NULL) {
    puts("File could not be opened.");
  }
  else {
    producto_t producto = {"",0.0};
    for (unsigned int i = 1; i <= 996; ++i) {
      printf("Guardando elemento [%d]\n", i);
      fwrite(&producto, sizeof(producto_t), 1, cfPtr);
    }
    fclose (cfPtr); // fclose closes the file
  }
}

