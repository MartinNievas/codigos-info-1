#include <stdio.h>//CODIDO MITCHEL

int main(void){
  int num1;
  int num2;

  // Alternativa
  // printf("Ingrese el primer número: ");
  // scanf("%d", &num1);
  // printf("Ingrese el segundo número: ");
  // scanf("%d", &num2);

  printf("imprime dos numero: ");
  scanf("%d%d",&num1,&num2);
  printf("\nel numero es:%d,%d",num1,num2);

  printf("\n la suma es: %d",num1+num2);
  printf("\nla resta es: %d",num1-num2);;
  printf("\nel producto es: %d",num1*num2);
  printf("\nel cociente es: %d",num1/num2);
  printf("\nel resto es: %d",num1%num2);
  return 0;
}
//Codigo de Lu <3
#include <stdio.h>

int main(void) {
  int num;
  int num1;
  printf("Ingrese dos numeros: ");
  scanf( "%d%d", &num , &num1);
  printf("Numeros: %d , %d\n" , num,num1);
  printf("La suma de estos numeros es: %d\n" , num + num1);
  printf("La resta de estos numeros es: %d\n", num - num1);
  printf("El cociente de estos numeros es: %d\n", num / num1);
  printf("El producto de estos numeros es: %d\n", num * num1);
  return 0;
}


#include <stdio.h>

// Código del capo del Fede y Juani

int main(int argc, char *argv[]) {

  float x;
  float y;

  printf("x: ");
  scanf("%f", &x);

  printf("y: ");
  scanf("%f", &y);

  float sum = x + y;
  float res = x - y;
  float mul = x * y;
  float div = x / y;


  printf("Suma: %f\n", sum);
  printf("Resta: %f\n", res);
  printf("Multiplicación: %f\n", mul);
  printf("División: %f\n", div);

  return 0;
}

//codigo de los verdadero programadores
#include <stdio.h>


int main(void) {
  int numero,numero1;
  printf("Ingrese 2 numeros\n");
  scanf("%d\n %d",&numero,&numero1);
  printf("\n La suma:%d\n La Resta:%d\n La Divicion:%d\n La Multiplicacion:%d",numero+numero1,numero-numero1,numero/numero1,numero*numero1);
  return 0;
}


