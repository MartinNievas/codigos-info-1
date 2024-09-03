#include <stdio.h>

int main(void) {

  int matriz1[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9},
  };
  int matriz2[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9},
  };
  int matriz2[3][3] = {{0}};

  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      matriz1[i][j] =  matriz1[i][j] - matriz2[j][i];
    }
  }

  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      printf("%d  ", matriz1[j][i]);
    }
    printf("\n");
  }

  return 0;
}
