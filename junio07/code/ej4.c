#include <stdio.h>

int main(void) {

  int i,j, cant_c, cant_f;
  scanf("%d", &cant_c);
  scanf("%d", &cant_f);
  for (i = 1; i <= cant_f; i++){
    for (j = 1; j <= cant_c; j++){
      printf("%d\t", (j-1)+cant_c*(i-1));
    }
    printf("\n");
  }
  // Segunda versión
  printf("Segunda versión\n");
  for (i = 0; i < cant_f; i++){
    for (j = 0; j < cant_c; j++){
      printf("%d\t", j+cant_c*i);
    }
    printf("\n");
  }

  return 0;
}
