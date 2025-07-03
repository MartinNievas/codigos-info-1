#include<stdio.h>

int potencia (int a, int b){
  int x= 1;
  for(int i=0;; i++){
    x*=a;
    printf("%d\n", x);
    if (x == 0)
      break;
  }
  return x;

}

int main ( void )
{
  int base , exp;
  printf (" Ingrese base y explonente : ") ; scanf (" %d %d", &base
      , & exp ) ;
  printf ("El numero %d elevado a la %d es: %d\n", base , exp ,
      potencia (base , exp ) ) ;
  return 0;
}
