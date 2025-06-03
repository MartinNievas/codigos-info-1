#include <stdio.h>
int main (){
  int meta,A=0,B=1,C=1;
  /*do*/
  printf("ingrese un numero que sea la meta:");
  scanf("%d",&meta);
  do{  A+=3;
    B=B*2;
    C+=2;
    printf("A=%d\n",A);
    printf("B=%d\n",B);
    printf("C=%d\n",C);
  } while( A<meta && B<meta && C<meta );


  if(A==B || A==C || B==C ){
    printf("Hay un empate");
  }
  else if(A>=meta){printf("El ganador es:A");}
  else    if(C>=meta){printf("El ganador es:C");}
  else    if(B>=meta){printf("El ganador es:B");}

  return 0;
}
