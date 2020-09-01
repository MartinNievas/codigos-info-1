#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int calculo(int (*operacion)(int a, int b), int, int);
int suma(int, int);
int resta(int, int);

int main(void)
{

  srand(time(NULL));

  char *frases_bien[2] = { "Buenaaaa", "Geniooo", };
  char *frases_mal[2] = { "Va de nuevo", "Intentá de nuevo", };

  int (*operaciones[2])(int,int) = { suma, resta};
  int dificultad;
  int op;

  printf("\n0 - suma\n1 - resta\nIngrese la operación:");
  scanf("%d", &op);

  printf("\n1 - una\n2 - dos\nIngrese la dificultad:");
  scanf("%d", &dificultad);

  for (int i = 0; i < 10; i++){
    calculo(*operaciones[op], op, dificultad);
  }


  return 0;
}


int suma(int a, int b) { return a+b; }
int resta(int a, int b) { return a-b; }

int calculo(int (*operacion)(int a, int b), int op, int dificultad){

  char signo;
  int num1, num2;
  int div = pow(10, dificultad);
  int resultado;
  int resultado_ingresado;

  num1 = rand() % div;
  num2 = rand() % div;

  switch(op){
    case 0: signo = '+'; break;
    case 1: signo = '-'; break;
    default: break;
  }

  printf("Cuánto es %d %c %d?\n", num1, signo, num2);
  scanf("%d", &resultado_ingresado);
  resultado =  (*operacion)(num1, num2);
  printf("El resultado debería ser: %d\n", resultado);

  //if (resultado != resultado_ingresado){
  //  printf("%s\n", arreglo_bien[rand() % 3]);
  //}

  return 1;
}
