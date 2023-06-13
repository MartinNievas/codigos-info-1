
#include <stdio.h>
int main(void){
    /*escribir un algoritmo que determine el mayor de N numeros positivos ingresados . 
    El usuario debe ingresar cada uno de los N números. Para terminar
se debe ingresar un -1.*/

    int num = 0, mayor = 0;
    do
    {

      do{
       printf("Ingrese un numero positivo: ");
       scanf("%d",&num);
      }while(num < -1);

         if (num > mayor)
         {
              mayor = num;
         }
    } while (num != -1 );
    printf("El mayor es: %d\n",mayor);

    
    return 0;
}
