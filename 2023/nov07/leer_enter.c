#include <stdio.h>

int main(void) {

  FILE *fptr;
  char cadena[20];

  if( (fptr = fopen("algo.txt", "r")) == NULL){
    printf("ERROR\n");
  } else {
    while (!feof(fptr)){
      fscanf(fptr,"%s", cadena);
      printf("%s\n", cadena);
    }
  }

  return 0;
}
