#include <stdio.h>
/** Determinar si un número es primo */

int main(void) {

  int num, restos = 0;


  printf("Ingrese un número: ");
  scanf("%d", &num);

  for (int i = 1; i <= num; i++){
    if (num % i == 0)
        restos++;
  }

  if (restos <= 2 || num == 1){
    printf("El número es primo\n");
  } else {
    printf("El número NO es primo\n");
  }


  return 0;
}
