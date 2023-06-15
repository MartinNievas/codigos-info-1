#include <stdio.h>

int main(int argc, char *argv[]) {
  float num1;
  float num2;
  float suma;
  float multimap;

  printf("Ingrese el primer número: ");
  scanf("%f", & num1);
  printf("Ingrese el segundo número: "); 
  scanf("%f", & num2);

  suma= (num1+num2);
  multimap=(num1*num2);

  if(num1>num2)
    printf("%.2f", suma);

  if(num1<num2)
    printf("%.2f", multimap);

  if(num1==num2)
    printf("Los números son iguales");

  return 0;

}
