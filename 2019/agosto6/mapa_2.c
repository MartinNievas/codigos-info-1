#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 30

int main(void)
{
  
  int celda;
  int i,j;
  int mapa[TAM][TAM];
  int posX = 4 , posY = 3;

  srand(time(NULL));
  

  // Genera un mapa aleatorio y lo almacena
  for (i = 0; i < TAM; i++)
    for (j = 0; j < TAM; j++)
    {
      celda = 1 + rand() % 4;
      mapa[i][j] = celda;
    }

  // Imprime el mapa aleatorio
  for (i = 0; i < TAM; i++)
  {
    for (j = 0; j < TAM; j++)
    {
      
      // Actualizo el mapa con la posición del jugador
      if (j == posX && i == posY) 
        mapa[i][j] = 5; 

      switch(mapa[i][j])
      {
      case 1: printf(" "); break;
      case 2: printf(" "); break;
      case 3: printf(" "); break;
      case 4: printf("."); break;
      case 5: printf("@"); break;
      default: break;
      }

    }
    printf("\n");
  }

  return 0;
}


