
//Cesar Rivera
#include <stdio.h>

int main(int argc, char *argv[]) {
  int n;
  printf("Ingrese el numero 'n': ");
  scanf("%d", &n);
  for(int i = n; i > 0; i--){
    printf("%d ", i);
  }
  for(int i = 0; i < n+1; i++){
    printf("%d ", i);
  }
  return 0;
}
