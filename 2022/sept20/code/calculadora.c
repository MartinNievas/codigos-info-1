#include <stdio.h>

int suma(int a, int b)
{
  return a+b;
}

int resta(int a, int b)
{
  return a-b;
}

int prod(int a, int b)
{
  return a*b;
}

int div(int a, int b){
  return a/b;
}

int main(void) {
  // Puntero a función que recibe un puntero a otra función
  // int (*fun)(int (int*)(int,int));

  int (*fun[])(int a, int b) = {suma, resta, prod, div, modulo};

  char* operaciones[] = {"Suma", "Resta", "Producto", "División", "Módulo", "Salir"};
  int op=0, resultado, num1, num2;

    for (int i = 0; i < (sizeof operaciones)/sizeof(char*); i++){
      printf("%d: %s\n", i, operaciones[i]);
    }

    printf("Ingrese la operación: ");
    scanf("%d", &op);

  while(op!=5){
    printf("Ingrese num1: ");
    scanf("%d", &num1);
    printf("Ingrese num2: ");
    scanf("%d", &num2);

    resultado = fun[op](num1,num2);

    printf("El resultado es: %d\n", resultado);

    // Intercambia dos operaciones del menú
    char* temp;
    temp = operaciones[0];
    operaciones[0] = operaciones[1];
    operaciones[1] = temp;

    int (*temp_fun)(int, int);
    temp_fun = fun[0];
    fun[0] = fun[1];
    fun[1] = temp_fun;

    for (int i = 0; i < 6; i++){
      printf("%d: %s\n", i, operaciones[i]);
    }

    printf("Ingrese la operación: ");
    scanf("%d", &op);
  };

  return 0;
}
