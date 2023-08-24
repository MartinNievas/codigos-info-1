#include <stdio.h>
#define TAM 10

int main(void) {

  int uid[TAM], consulta;

  for (int i = 0; i < TAM; i++){
    printf("Ingrese uid %d: ", i);
    scanf("%d", &uid[i]);
  }

  printf("Ingrese el elemento a buscar: ");
  scanf("%d", &consulta);

  // Buscar el elemento "consulta" en el arreglo
  // Si existe imprimir el índice de la posición
  // Si no existe, imprimir "no existe"
  int indice = -1;

  for (i = 0; i < TAM; i++){
    if (consulta == uid[i]){
      indice = i;
    }
  }
  if (indice == -1){
    printf("El número no se encuentra en el arreglo\n");
  }else {
    printf("El número existe y está en la posición: %d\n", indice);
  }

  return 0;
}
