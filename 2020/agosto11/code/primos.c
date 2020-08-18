#include <stdio.h>

// Me devuelve 0 si no es primo
// Me devuelve 1 si es primo
int es_primo(int num)
{

  int cont = 0;
  int i;
  int resultado;

  if (num != 1){
    for (i = num; i > 0 ; i--)
      if (num % i == 0)
        cont++;

    if (cont == 2)
      resultado = 1;
    else
      resultado = 0;
  } else {
    resultado = 1;
  }

  return resultado;
}


int main(void)
{

  int num;
  int res;
  int i;

  printf("Ingrese un núm: ");
  scanf("%d", &num);

  for (i = 1; i < num; i++){

    res = es_primo(i);

    printf("%d: ", i);
    if (res){
      printf("Es primo!\n");
    } else {
      printf("No es primo!\n");
    }

  }

  return 0;
}
