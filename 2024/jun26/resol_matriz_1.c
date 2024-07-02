#include <stdio.h>
//valentinsanchez 95167
int main(void) {
  int fila;
  int columna;
  int contador;
  int contador2;
  int contador3=0;

  printf("Ingresa la cantidad de fila:");
  scanf("%d",&fila);
  printf("Ingresa la cantidad de columna:");
  scanf("%d",&columna);

  for(contador=0;contador<fila;contador++){
    printf("\n%d",contador3);
    contador3++;

    for(contador2=1;contador2<columna;contador2++){
      printf("\t%d",contador3);
      contador3++;
    }
  }
  return 0;
}
