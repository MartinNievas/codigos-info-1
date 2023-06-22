#include <stdio.h>

int main()
{
    int contador = 0;
    int numero = 0;
    printf("ingerese hasta que numero quiere contar: ");
    scanf("%d" , &numero);

    while (contador <= numero){
      printf("contador vale: %d\n" , contador);
      contador++;
    }

    return 0;
}
