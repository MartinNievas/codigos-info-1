#include <stdio.h>


int main(void) {

  int op;

  printf("Ingrese op: ");
  scanf("%d", &op);

  switch(op){
    case 10:
      int i;
      for (i = 0; i < 10; i++)
        printf("%d\n", i);
      break;
    case 20:
      printf("Esto es 20!\n");
      break;
    default:
      printf("No es ningún caso válido\n");
  }

  return 0;
}
