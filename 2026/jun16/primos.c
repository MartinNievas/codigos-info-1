#include <stdio.h>

int main(void) {

  int n, i;
  int cant_div = 0;

  printf("Ingrese un númreo: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++){
    if(n % i == 0)
      cant_div++;
  }

  if(cant_div == 2 || n == 1){
    printf("El número es primo\n");
  }else{
    printf("El número no es primo\n");
  }

  return 0;
}
