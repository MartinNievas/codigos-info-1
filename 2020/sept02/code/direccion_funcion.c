#include <stdio.h>

void paradoja(void){
  printf("Esta afirmación es falsa\n");
}

int main(void){

  paradoja();

  printf("%p\n", paradoja);

//  //En realidad se debería imprimir de esta forma
//  size_t i;
//  void (*ptr_to_main)() = paradoja;
//  for (i=0; i<sizeof ptr_to_main; i++)
//    printf("%.2x", ((unsigned char *)&ptr_to_main)[i]);
//  putchar('\n');

  return 0;
}
