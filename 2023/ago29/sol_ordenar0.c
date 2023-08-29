#include <stdio.h>
#define N 5
int main(int argc, char *argv[]) {

  int i, j, temp;
  int a[N];
  i=0;
  do{
    printf("Escriba dato: ");
    scanf("%d", &a[i]);
    i++;
  } while(i<N);


  for(i=0;i<N;i++){
    for(j=0;j<N-1;j++){
      if(a[j]<a[j+1]){
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
  for(i=0;i<N;i++)
    printf("%d\n", a[i]);
  printf("El mayor del arreglo es: %d", a[0]);

  return 0;

