
#include <stdio.h>

int main(){
  int n1;
  printf("coloque su numero aqui ");
  scanf("%d", &n1);

  if(n1>99){
    if(n1<1000){
      printf("su numero tiene 3 cifras");
    }else{
      printf("su numero no tiene 3 cifras");
    }
  }else{
    printf("su numero no tiene 3 cifras");
  }
}
