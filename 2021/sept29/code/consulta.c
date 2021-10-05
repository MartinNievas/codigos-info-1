#include <stdio.h>


int main(void) {
  int importancia;
  int repeticion;

  do{
    for(int i=0;i<5;i++)// aca se imprime el cuestionario
    {
      do{
        printf("ingrese tema:");
        scanf("%d", &importancia);
      }while(importancia < 0 || importancia > 10);

      //conteo[i][importancia]++;
    }

    printf("\nSi queres repetir esta encuesta, ingresa 1: ");
    scanf("%d", &repeticion);

  }while(repeticion == 1);// condicion para que se repita o termine la encuesta


    return 0;
  }
