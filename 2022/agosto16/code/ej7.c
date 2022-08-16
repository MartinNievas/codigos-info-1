#include <stdio.h>

// Número primo?
// Si n es primo, entonces (num % i ) == 0
// solo para i = num, e i = 1
int es_primo(int num)
{
  int primo = 0;
  int contador = 0;

  if( num == 1)
    primo = 1;
  else{
    for (int i = 1; i <= num; i++){
      if ( (num%i) == 0){
        contador++;
      }
    }
  }

  if (contador == 2)
    primo = 1;

  return primo; // 1 si es primo, 0 si no es primo
}



int main(void) {


  int num;
  printf("Ingrese un número positivo: ");
  scanf("%d", &num);

  for( int i = 1; i <= num; i++)
    if (es_primo(i))
      printf("%d\n", i);

  return 0;
}
