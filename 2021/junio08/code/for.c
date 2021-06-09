#include <stdio.h>

int main(void) {

  int i;

  for (i = 0; i < 10; i++){
    printf("Hola!\n");
  }
  printf("El valor de i: %d\n", i);

  int j;

  j = 0;
  while (j < 10){
    printf("Chau\n");
    j++;
  }


// i | i < 10  | pr   | i++
// ------------------------
// 0 |    si   | Hola | 1
// 1 |    si   | Hola | 2
// ....
// 9 |    si   | Hola | 10
//10 |    no___

  return 0;
}

