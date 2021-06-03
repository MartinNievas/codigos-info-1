#include <stdio.h>

int main(void) {

  int i = 100;

  do{
    printf("%d\n", i);
    i++;
  }while( i < 10 );


  while (i < 10){
    printf("%d\n", i);
    i++;
  }

  return 0;
}
