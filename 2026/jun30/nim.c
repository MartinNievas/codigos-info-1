#include <stdio.h>

int main(void) {

  int cant_fichas;
  int saca;
  int jugador = 1;

  do {
    printf("Ingrese la cantidad de fichas: \n");
    scanf("%d", &cant_fichas);
    if (cant_fichas < 10){
      printf("Ingrese una cantidad mayor a 10\n");
    }
  } while (cant_fichas < 10);


  do {
    printf("\n==Turno Jugador%d==\n", jugador);
    do{
      printf("Ingrese la cantidad de fichas a sacar: ");
      scanf("%d", &saca);
      if(saca <=0 || saca >=4){
        printf("Solo puede sacar fichas entre [1-3]\n");
      } else if (cant_fichas - saca < 0) {
        printf("No quedan más fichas, sacá menos...\n");
      }
    }while(saca <=0 || saca >=4);

    cant_fichas-= saca;
    printf("Quedan %d fichas\n", cant_fichas);

    if (cant_fichas == 0){
      printf("Perdiste... :(\n");
    }

    jugador++;
    if(jugador >=3)
      jugador = 1;

  } while (cant_fichas > 0);

  return 0;
}
