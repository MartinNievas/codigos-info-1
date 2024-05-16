#include <stdio.h>

int main(void) {
    int numero;
    printf("Ingresa un numero : ");
    scanf("%d",&numero);
    if (numero >=100){
        if (numero >=1000){
            printf("No tiene 3 cifras %d\n", numero);
        }
        if (numero <1000){
            printf("Tiene 3 cifras %d\n", numero);
        }
    }
    if (numero <=99){
            printf("No tiene 3 cifras %d\n", numero);
        }

    return 0;
}

