#include <stdio.h>

void function1(int a);
void function2(int b);
void function3(int c);

int main(void)
{
  void (*f[3])(int) = { function1, function2, function3 };
  int numero;

  printf("%s", "Ingresá un número entre 0-2\nIngresa 3 para salir\nNúmero: ");
  scanf("%d", &numero);

  while (numero >= 0 && numero < 3) {
    (*f[numero])(numero);
    printf("%s", "Ingresá un número entre 0-2\nIngresa 3 para salir\nNúmero: ");
    scanf("%d", &numero);

    f[0] = f[1];
  }

  puts("Fin del programa");
}

void function1(int a)
{
  printf("Ingresaste %d, estás en la Opción 1\n\n", a);
}

void function2(int b)
{
  printf("Ingresaste %d, estás en la Opción 2\n\n", b);
}

void function3(int c)
{
  printf("Ingresaste %d, estás en la Opción 3\n\n", c);
}
