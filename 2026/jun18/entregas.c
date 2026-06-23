
////// enzo carena
ejercicio 1
#include <stdio.h>
int main(){
  int i;
  int multiplicando=3;

  for (i=2;i<=12;i++){
    printf("%dx%d=%d\n",multiplicando,i,multiplicando*i);
  }
  return 0;
}

//desafio 1//
#include <stdio.h>
int main(){
  int N;
  int longitud = 1;
  int maximo;

  printf("ingrese un numero entero: ");
  scanf("%d",&N);

  maximo = N;

  printf("secuencia: %d ", N);

  while(N !=1){
    if(N % 2 == 0){
      N = N/ 2;
    } else{
      N = N * 3+1;
    }
    printf("%d", N);
    longitud++;

    if(N>maximo){
      maximo=N;
    }
  }

  printf("\n\nCantidad de terminos:%d", longitud);
  printf("\n\nNumero Maximo:%d\n", maximo);

  return 0;
}
////////////////////////////////////////////////////// ejercicio 1 lospibardos
#include <stdio.h>
int main(int argc, char *argv[]) {
  int num;
  printf("escriba un numero: ");
  scanf("%d",&num);
  for ( int i = 1 ; i <= 12 ; i++){
    printf ("%d x %d = %d\n", num,i,num*i); }
  return 0; }
  //////////////////////////////////////////////////////
  //ejercicio 1 LR
#include<stdio.h>

  int main(){
    int num, producto;	
    do{
      printf("Ingrese un numero del 1 al 10: ");
      scanf("%d", &num);
    }while(num>10 || num<0);
    for(int i=1;i<13;i++){
      producto = num*i;
      printf("%d * %d = %d\n", num, i, producto);
    }

    return 0;
  }
//////////////////////////////////////////////////////
//NOMBRE DE LOS AUTORES: CATALINA Y IGNACIO

#include <stdio.h>

int main(void) {
  int i, num;
  printf("Ingrese un numero entero del 1 al 10: ");
  scanf("%d", &num);
  for(i=1; i<=12 ; i++){
    printf("%d * %d = %d \n",num, i, i*num);
  }
  return 0;
}
///////////////////////////////////////////////////////
//Autores : Catalina y Ignacio
#include <stdio.h>

int main(void) {
  int i,num;
  int n = 1;

  printf("Ingrese un numero entero positivo");
  scanf("%d",&num);

  for(i=1; i<=num;i++){
    n= n*i;
  }
  printf("n!: %d\n",n);
  return 0;
}
/////////////////////////////////////////////////////////
#include <stdio.h> //Tiziano Meza

int main(int argc, char *argv[]) {
  int numero;
  printf("ingrsese un numero del 1 al 10:\n");
  scanf("%d" , &numero);


  for (int i = 1; i <= 12; i++){
    printf("%d x %d = %d\n" , numero , i , numero * i );
  }
  return 0;

}
///////////////////////////////////////////////////////
#include <stdio.h>

int main(void) {

  int i;
  int f=1;
  printf("Ingrese un numero del 1 al 10:");
  scanf("%d", &i);
  for(int d=i;d<=i*12; d=d+i){
    printf("%dx%d=%d\n", i ,f++,  d);
  }
  return 0;
}


////////////////////////////////////////////////////////////
/*Còdigo de los PAPUS*/

#include <stdio.h>

int main(int argc, char *argv[]) {
  int num;
  int result;
  printf("Ingrese un numero entero del 1 al 10: \n");
  scanf("%d", &num);
  for(int mul=1; mul <13;mul++){
    result = num * mul;
    printf("tu numero multiplicado por %d es: %d \n", mul, result);
  }
  return 0;
}

/////////////////////////////////////////////////////////////
