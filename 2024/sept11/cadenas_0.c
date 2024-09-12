#include <stdio.h>
// Que pasa con los espacios?

int main(void) {

  char nombre[10];

  printf("Ingrese su nombre: ");
  scanf("%s", nombre);

  // Convertir el nombre todo a mayúsculas
  //
  //
  for(int i=0; nombre[i]!='\0'; i++){
    if(nombre[i]>='a' && nombre[i]<='z'){
      nombre[i]-=32;
    }
  }

  printf("Hola %s!\n", nombre);

  return 0;
}
