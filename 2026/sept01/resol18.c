
// benjamìn quierofa maku gutierrez y Sanchez URiel

#include <stdio.h>
int main (void){
  int mal[3][3]; 
  int bien[3][3];
  int suma [3][3]= {0};
  printf("ingrese los valores de la matriz 1, uno por uno \n");
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++){
      printf("ingrese valor %d %d:", i, j);
      scanf("%d", &mal[i][j]);
    }
  }

  printf("ingrese los valores de la matriz 2, uno por uno \n");

  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++){
      printf("ingrese valor %d %d:", i, j);
      scanf("%d", &bien[i][j]);
    }
  }

  for (int k=0; k<3; k++){
    for (int q=0; q<3; q++){
      suma[k][q] = mal[k][q] + bien [k][q];
    }
  }

  for (int l = 0; l < 3; l++) { 
    for (int m = 0; m < 3; m++) {
      printf("%4d", suma [l][m]);
    }

    printf("\n");
  }   

  return 0;
}

#include <stdio.h>   
#define N 3

int main (void){

  int mat1[N][N];
  int mat2[N][N];

  printf("Matriz 1\n");
  for (int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      printf("ingrese el elemento [%d][%d]: ", i, j);
      scanf("%d", &mat1[i][j]);
    }
  }
  printf("Matriz 2\n");
  for (int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      printf("ingrese el elemento [%d][%d]: ", i, j);
      scanf("%d", &mat2[i][j]);
    }
  }

  for (int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      printf("%4d", mat1[i][j]+ mat2[i][j]);

    }
    printf("\n");
  }


  return 0;
}

