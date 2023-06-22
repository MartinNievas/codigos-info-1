#include <stdio.h>

int main(int argc, char *argv[]) {

  int contador =0;
  int num1;
  printf ("Ingrese un número: ");
  scanf ("%d", &num1);

  while (contador >= num1){
    printf("contador vale: %d\n", contador);
    contador--;
  }
  contador = 0;

  while (contador <= num1){
    printf("contador vale: %d\n", contador);
    contador++;
  }


  return 0;

}
