#include <stdio.h>
#define TAM 5

struct auto_t{
  char marca[20];
  char modelo[20];
  int año;
  int km;
};

int main()
{
  struct auto_t autos[TAM];

  for(int i = 0; i < TAM; i++){
    printf("Ingrese una marca de auto: ");
    scanf("%s", autos[i].marca);
    printf("Ingrese un modelo de auto: ");
    scanf("%s", autos[i].modelo);
    do{
      printf("Ingrese el año del auto: ");
      scanf(" %d", & autos[i].año);

      if(autos[i].año < 0);
      printf("\nIngrese un año mayor a 0.\n");
    }while(autos[i].año < 0);
    do{
      printf("Ingrese el kilometraje del auto: ");
      scanf(" %d", & autos[i].km);

      if(autos[i].km < 0);
      printf("\nIngrese un kilometraje mayor 0 igual 0.\n");
    }while(autos[i].km < 0);

    for(int j = 0; j < TAM; j++){
      printf("marca: %s\tmodelo: %s\taño: %d\tkilometraje: %d", autos[j].marca, autos[j].modelo, autos[j].año, autos[j].km);
    }
  }

  return 0;
}

