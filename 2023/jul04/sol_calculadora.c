#include <stdio.h>
float suma(float,float);
float resta(float,float);
float multiplicacion(float,float);
float division(float,float);
float potencia(float,float);
float raiz_cuadrada(float);
int ingresar_y_validar_opcion(void);

int main(void){

    int op, num1, num2;
    printf("1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n");
    printf("\n5.Potencia\n6. Raiz cuadrada\n7. Salir\n");

    op = ingresar_y_validar_opcion();

    switch (op)
    {
    case 1:
        printf("Ingrese los numeros a sumar: ");
        scanf("%f %f", &num1, &num2);
        float resultado = suma(num1,num2);
        printf("El resultado de la suma es: %.2f\n", resultado);
        break;
    case 2:
        printf("Ingrese los numeros a restar: ");
        scanf("%f %f", &num1, &num2);
        resta(num1,num2);
        break;
    case 3:
        printf("Ingrese los numeros a multiplicar: ");
        scanf("%f %f", &num1, &num2);
        multiplicacion(num1,num2);
        break;
    case 4:
        printf("Ingrese los numeros a dividir: ");
        scanf("%f %f", &num1, &num2);
        division(num1,num2);
        break;
    case 5:
        printf("Ingrese la base y el exponente: ");
        scanf("%f %f", &num1, &num2);
        potencia(num1,num2);
        break;
    case 6: 
        printf("Ingrese el numero a calcular la raiz cuadrada: ");
        scanf("%f", &num1);
        raiz_cuadrada(num1);
        break;
    case 7:
        printf("Saliendo del programa...\n");
        break;
    }
    return 0;
}

int ingresar_y_validar_opcion(void){
    int op;
    printf("Ingrese la opción: ");
    scanf("%d", &op);
    while(op < 1 || op > 6){
        printf("Opcion invalida, ingrese nuevamente: ");
        scanf("%d", &op);
    }

    return op;
}

float suma(float num1, float num2){
    float resultado = num1 + num2;
    return resultado;
}
float resta(float num1, float num2){
    float resultado = num1 - num2;
    printf("El resultado de la resta es: %.2f\n", resultado);
    return resultado;
}
float multiplicacion(float num1, float num2){
    float resultado = num1 * num2;
    printf("El resultado de la multiplicacion es: %.2f\n", resultado);
    return resultado;
}
float division(float num1, float num2){
    float resultado = num1 / num2;
    printf("El resultado de la division es: %.2f\n", resultado);
    return resultado;
}
float potencia(float num1, float num2){
    float resultado = 1;
    for(int i = 0; i < num2; i++){
        resultado *= num1;
    }
    printf("El resultado de la potencia es: %.2f\n", resultado);
    return resultado;
}
float raiz_cuadrada(float num1){
    return sqrt(num1);
}

