


//Coty y Dylan 1
#include <stdio.h>

int main(void) {
  int i, v;
  printf("Ingrese un nùmero entero entre 1 y 10: ");
  scanf("%d",&v);

  for(i=1;i<=12;i++){
    printf("%d x %d = %d\n",i,v,i*v);
  }

  return 0;
}
//2 coty y dylan
#include <stdio.h>

int main(void) {
  int i, n;
  int v=1;
  printf("Ingrese un nùmero entero: ");
  scanf("%d",&n);

  for(i=1;i<=n;i++){
    v=v*i;
  }

  printf("El factorial de %d es %d",n,v);
  return 0;
}


// Pedraza Milicay

#include <stdio.h>

int main(void) {
  int num=0;
  int i=0;
  printf ("Escriba un numero entero del 1 al 10: \n");
  scanf ("%d", &num);

  for (i=0; i<13 ; i++){;

    printf ("\n%d*%d = %d\n", num , i  , num*i);
  }


  return 0;
}

#include <stdio.h>

int main(int argc, char *argv[]) {

  int i,num;
  do{
    printf("ingrese un numero entero del 1 al 10:");
    scanf("%d",&num);

    if(num < 1 || num > 10){
      printf("error: el numero debe de estar entre el 1 y 10\n");
    }
  }while(num < 1 || num > 10);

  for(i = 1;i <= 12; i++){
    printf("%d*%d= %d\n",num, i, num*i);
  } 

  return 0;
}

