#include <stdio.h>
#include <math.h>
// No funciona

void imprimir_bien(void)
{
  switch(rand() % 4){
  case 0: printf("Primera frase\n"); break;
  case 1: printf("Segunda frase\n"); break;
  case 2: printf("Tercera frase\n"); break;
  case 3: printf("Cuarta frase\n"); break;
  }
}

int dificultad(int a)
{

  int dif, num;

  switch(a){
  case 1: dif = 10; break;
  case 2: dif = 100; break;
  case 3: dif = 1000; break;
  }

  num = rand() % dif;

  return num;
}

int main(void) {
  int op;
  int dif;
  int x, y, suma, resultado;
  int contador_bien = 0;
  int contador_mal = 0;


  printf("1_ suma\n2_ resta\n4_ salir");
  printf("Ingresar la operación: ");
  scanf("%d", &op);

  printf("Ingresar dif: ");
  scanf("%d", &dif);

  for (int i = 0; i < 10; i++){

    x = dificultad(dif);
    //x = rand() % pow(10,dif);
    y = rand() % (int)pow(10,dif); // 10^dif

    switch(op){
      case 1: // suma
        suma = x + y;

        do{
          printf("\nCuánto es %d + %d? ", x, y);
          scanf("%d", &resultado);

          if (resultado == suma){
            imprimir_bien();
            contador_bien++;
          } else {
            contador_mal++;
            //imprimir_mal();
          }

        }while(resultado != suma);

      break;
    }
  }

  printf("El por...\n");

  return 0;
}
