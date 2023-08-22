#include <stdio.h>
/*Función que determina si un número es impar
 * devuelve:
 * 1: impar
 * 0: par
*/
int es_impar(int);

int main(void) {

  int num = 10;

  if (es_impar(num)){
    printf("Es impar\n");
  } else {
    printf("Es par\n");
  }

  return 0;
}


int par_impar(int num1){
  return num1%2;
}

int es_impar (int num){
  if (num%2==0)
    return 0;
  else
    return 1;
}
