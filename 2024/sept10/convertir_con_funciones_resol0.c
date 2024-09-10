#include <stdio.h>

void convertir_a_mayusculas(char *arreglo, int cant);

int main(void) {

  char nombre[10];

  printf("Ingrese su nombre: ");
  scanf("%s", nombre);

  // Convertir el nombre todo a mayúsculas
  convertir_a_mayusculas(nombre, 10);
  printf("Hola %s!\n", nombre);

  return 0;
}

void convertir_a_mayusculas(char *arreglo, int cant){
  for (int i = 0; arreglo[i] != '\0'; i++){
    if(arreglo[i] >= 'a' && arreglo[i] <= 'z'){
      arreglo[i] -= 32;
    }
  }
}

