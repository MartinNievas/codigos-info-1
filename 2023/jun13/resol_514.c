
#include <stdio.h>

int main() {
      //defino las variables
    int numero, mayor = 0; // Inicializar mayor con un valor muy pequeño

    printf("Ingrese un número positivo (o -1 para terminar): ");
    scanf("%d", &numero);
    
    // defino el mientras para una condicion que solo salga si es un numeronegativo
    //pero si es distrinto a -1  se repite el bucle.
    while (numero != -1) {
          // la condicion del si me permite tomar el numero ingresado y compararlo  con el mayor
          //y si se cumple que numero es mayor que (el numero mayor), el mayor es el valor del numero. 
        if (numero > mayor) {
            mayor = numero;
        }

        printf("Ingrese otro número positivo (o -1 para terminar): ");
        scanf("%d", &numero);
    }

    printf("El mayor de los números ingresados es: %d\n", mayor);

    return 0;
}

