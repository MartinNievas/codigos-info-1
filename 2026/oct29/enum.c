#include <stdio.h>

// Definicion de la enumeracion
typedef enum {
    LUNES = 1,
    MARTES,
    MIERCOLES=20,
    JUEVES,
    VIERNES,
    SABADO,
    DOMINGO
} diaSemana_t;

int main() {
    diaSemana_t dia;
    int opcion;

    printf("Ingrese un numero del 1 al 7: ");
    scanf("%d", &opcion);

    dia = opcion;

    switch (dia) {
        case LUNES:
            printf("Lunes\n");
            break;

        case MARTES:
            printf("Martes\n");
            break;

        case MIERCOLES:
            printf("Miercoles\n");
            break;

        case JUEVES:
            printf("Jueves\n");
            break;

        case VIERNES:
            printf("Viernes\n");
            break;

        case SABADO:
            printf("Sabado\n");
            break;

        case DOMINGO:
            printf("Domingo\n");
            break;

        default:
            printf("Dia invalido\n");
            break;
    }

    return 0;
}
