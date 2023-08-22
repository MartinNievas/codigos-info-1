#include <stdio.h>
#define TAM 10
int main(void){

    /*resolver
    1. ingresar tam elementos en un arreglo de enteros
    2. solicitar al usuario un numero
    3. buscar ese numero dentro del arreglo. si existe, indicar su posicion (indice)*/

    int arreglo[TAM]={1,5,7,9,3,12,54,100,2,6};
    int num;
    printf("Ingrese un numero: ");
    scanf("%d",&num);
    for(int i=0; i< TAM; i++){
        if(arreglo[i]==num){
            printf("El numero %d se encuentra en la posicion %d\n",num,i);
        }
    }
    return 0;
}
