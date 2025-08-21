#include <stdio.h>

int contarCifras(int n){
  int contador=0;
  if(n=0)
    contador=1;
  while(n>0){
    n/=10;
    contador++;
  }
  return (contador);
}

int contarCifras(int n, int b){
  int contador=0;
  if(n=0)
    contador=1;
  while(n>0){
    n/=10;
    contador++;
  }
  return (contador);
}

int main(int argc, char *argv[]) {
  int num, cont;
  printf("Ingrese num: ");
  scanf("%d", &num);
  printf("El num tiene %d cifras", contarCifras(num));
  return 0;
}

