#include <stdio.h>

int main(int argc, char *argv[]) {
  int num1;
  int num2;
  printf("ingrese un numero:\n");
  scanf("%d",&num1);

  printf("ingrese un numero:\n");
  scanf("%d",&num2);

  int suma= num1+num2;
  int resta= num1-num2;
  int producto=num1*num2;

  // Casteo (float)
  float cociente = (float)num1/num2;

  printf("la suma es:%d \n",suma);
  printf("la resta es:%d \n",resta);
  printf("el producto es:%d \n",producto);
  printf("el cociente es:%f \n",cociente);

  //fernandez//

  return 0;
}
