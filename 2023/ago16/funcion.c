int es_impar(int A){
  int var;

  var = A%2;

  if(var == 0){
    return 0;
  }else{
    return 1;}
}

int es_impar(int A){
  return A%2;
}

/*Función que determina si un número es par
 * devuelve:
 * 1: par
 * 0: impar
*/
int es_par(int num){
  return !(num%2);
}

.....................................................................
#include <stdio.h>

int es_impar(int A);

int main(int argc, char *argv[]) {

  int num = 3;
  printf(" %d ", es_impar(num));

  return 0;
}

int es_impar(int A){
  int var;

  var = A%2;

  if(var == 0){
    return 0;
  }else{
    return 1;}
}
............................................................



.......................................................................

..............................................................................
#include <stdio.h>
int es_impar(int);
int main(void) {
  int num;

  printf("ingrese un numero:");
  scanf("%d",&num);
  es_impar(num);


  return 0;
}

int es_impar(int num){
  int res;
  res = num%2;
  if(res == 0){
    printf("su numero es par: 0");
  }else
    printf("su numero es impar: 1");



}



/////////////////////////////////////////////////////////
int lean(){


}
return 0;































....................................................
#include <stdio.h>//403145 jose contrera

int main()
{int impar;
  scanf("%d",&impar);
  if(impar%2>0){printf("impar");}else{printf("par");}


  return 0;
}

