#include <stdio.h>
/*completar*/

int potencia(int b, int e){
  int res,i ;res =1;
  for( i=0; i<e; i++){
    res *= b  ;
  }

  return res;
}
/*Completar hasta aca*/
int main(){
  int base, exp;

  printf("Ingrese base y exponente: ");
  scanf("%d %d", &base, &exp);

  printf("El numero %d elevado a la %d es: %d\n", base, exp, potencia(base, exp));

  return 0;

}
