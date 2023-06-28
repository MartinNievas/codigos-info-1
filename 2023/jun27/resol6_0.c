#include <stdio.h>
int potencia(int b, int e){
    int res = 1;
    for(int i = 0; i < e; i++){
        res *= b;
    }
    return res;
}
int main(void){
    int base, exp;
    printf("Ingrese base y exponente: ");
    scanf("%d %d", &base, &exp);
    printf("El número %d elevado a la %d es: %d\n",
        base, exp, potencia(base, exp));
    return 0;
}
