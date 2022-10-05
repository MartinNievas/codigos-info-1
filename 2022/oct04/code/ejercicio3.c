#include <stdio.h>
#include <stdlib.h>
#define TAM 20

struct punto_2D {
  int x ;
  int y ;
};

void dibuja_punto(char** canva, struct punto_2D punto, char item)
{

  /** canva[punto.x][punto.y] = item; */
  for (int i = 0; i < 4; i++)
    *(*(canva+4)+3) = item;
}

void imprime_canva(char** canva)
{
  for (int i = 0; i < TAM; i++){
    for (int j = 0; j < TAM; j++)
      printf("%c", canva[i][j]);
    printf("\n");
  }
}

int main(void) {

  char** lienzo;

  lienzo = malloc(TAM * sizeof *lienzo);
  for (int i=0; i<TAM; i++)
  {
    lienzo[i] = malloc(TAM * sizeof *lienzo[i]);
  }

  struct punto_2D punto1 = {3, 3};

  dibuja_punto(lienzo, punto1, 'x');
  imprime_canva(lienzo);


  return 0;
}
