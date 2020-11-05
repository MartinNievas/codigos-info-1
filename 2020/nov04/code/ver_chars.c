#include <stdio.h>

typedef union {
  unsigned int uint;
  char c[4];
}reg_u;

void imprimir_binario(unsigned int);
void calcular_entero(unsigned int);

int main(void) {

  reg_u registro;

  printf("Ingrese un entero positivo: ");
  scanf("%d", &registro.uint);

  imprimir_binario(registro.uint);

  calcular_entero(registro.uint);

  return 0;
}

void imprimir_binario(unsigned int num)
{
  for (int i = 31; i >= 0; i--){
    printf("%c", (num & 1<<i) ? '1' : '0');
    if (i % 8 == 0)
      printf(" ");
  }
}

void calcular_entero(unsigned int num)
{
  unsigned int temp = 0;
  unsigned int numero = 0;

  for (int i = 31; i >= 0; i--){
    temp = num & 1<<i;
    printf("%u\n", temp);
    numero += temp;
  }
  printf("El número es: %u\n", numero);
}

