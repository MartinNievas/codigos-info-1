#include <stdio.h>

/* Su alteza Juan Cruz rey de los Ándalos y los Rhoynar y los Primeros Hombres,
   señor de los Siete Reinos y Protector del Reino (4013366) (team black) */

int main(int argc, char *argv[]) {
  int num = -1000;


  do{
    printf("Ingrese un numero impar po si ti vo :\n");
    scanf ("%d", &num);
  } while (num % 2 == 0 || num < 0);

  if(num>0 && num<101){
    printf("\n Como costo eh");
  };

  return 0;


}
