#include <stdio.h>
//prototipos o declaraciones
int primos(int);
int main(void){

    int i, num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    printf("Los numeros primos menores que %d son: ", num);
    primos(num);
    return 0;
}

// Definicion
int imprimir_primos_hasta(int n){
    for(int i = 1; i <= n; i++){
        int cont = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                cont++;
            }
        }
        if(cont == 2 || i == 1){
            printf("%d ", i);
        }
    }
}

