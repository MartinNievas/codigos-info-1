#include <stdio.h>

int main(void) {

  int contador_0 = 100;
  int contador_1 = 100;

  // a == b -> si a es igual a b
  //if (contador_0 == contador_1) {
  //  printf("Los contadores son iguales\n");
  //}

  // a == b -> si a es diferente de b
  //if (contador_0 != contador_1){
  //  printf("Los contadores son diferentes\n");
  //}

  if (!(contador_0 == contador_1)) {
    printf("Los contadores son iguales\n");
  } else {
    printf("Los contadores son diferentes\n");
  }




  return 0;
}
