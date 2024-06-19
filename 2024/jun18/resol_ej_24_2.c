//ejercicio 5.24 
//Gimenez Bosch
#include <stdio.h>

int main(int argc, char *argv[]) {
  int num;
  printf("Ingrese un num: ");
  scanf("%d", &num);
  if(num<=100 && num>=10){
    if(num%2==0){
      printf("El número %d es par.", num);
    }else{
      printf("El número %d es impar.", num);
    }
  }	else{
    printf("el número ingresado no está dentro del rango.");
  }


  return 0;
}
