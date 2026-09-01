#include <stdio.h>
#define N 100
#define M 100

int main(void) {

  int screen[N][N] = {{0}};

  for (int i = 0; i < N; i++){
    for (int j = 0; j < M; j++){
      int res = (i-N/2)*(i-N/2)+((j-M/2)*(j-M/2));
      printf("res: %d\n",res);
      if ((res-100)>0){
        screen[i][j] = 1;
      }
    }
  }

  for (int i = 0; i < N; i++){
    for (int j = 0; j < M; j++){
      if (screen[i][j] == 1)
        printf(" ");
      else
        printf("*");
    }
    printf("\n");
  }

  return 0;
}
