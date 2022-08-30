#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  char refranes_vol_1[10][60] = {
    "A caballo regalado no se le miran los dientes.",
    "Agua que no has de beber...",
    "El que madruga encuentra todo cerrado",
  };
  srand(time(NULL));

  // Como obtener una frase aleatoria?

  printf("%s\n", refranes_vol_1[rand()%3]);
  printf("%s\n", refranes_vol_1[rand()%3]);
  printf("%s\n", refranes_vol_1[rand()%3]);
  printf("%s\n", refranes_vol_1[rand()%3]);
  printf("%s\n", refranes_vol_1[rand()%3]);
  printf("%s\n", refranes_vol_1[rand()%3]);

  return 0;
}
