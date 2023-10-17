#include <stdio.h>

union convertir{
  char bytes[4];
  float numero;
};

int main(void) {
  union convertir conversor = {'2', 'w', ')'};
  printf("Ingrese su float: ");
  scanf("%f", &conversor.numero);

  for (int i = 0; i < 4; i++){
    printf("%d\n", conversor.bytes[i]);
  }

  return 0;
}
