#include <stdio.h>

int main(void)
{

  char nombre[10][100] = {
    {"martin"},
    {"ju"}
    };


  for (int i = 0; i < 10; i++){
    printf("Ingrese el nombre %d: ", i);
    scanf("%s", &nombre[i][0]);
  }

  printf("El nombre es: %s\n", &nombre[0][0]);
  printf("El nombre es: %s\n", &nombre[1][0]);

  return 0;
}
