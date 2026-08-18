#include <stdio.h>
int contarcifras(int num){
  int cifras = 0;

  do{
    cifras++;
    num/=10;
  } while(num > 0);
  return cifras;
}

int main(void) {
  int num;

  scanf("%d", &num);

  printf("La cant de cifras es: %d", contarcifras(num));
  return 0;
}
