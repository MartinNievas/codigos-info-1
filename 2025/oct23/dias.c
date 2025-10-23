#include <stdio.h>

// 1. Definimos la enumeración para los días de la semana.
// Por defecto, LUNES=0, MARTES=1, MIERCOLES=2, etc.
typedef enum {
    LUNES,
    MARTES,
    MIERCOLES,
    JUEVES,
    VIERNES,
    SABADO,
    DOMINGO
} DiaSemana;

int main() {
    // 2. Creamos una variable del tipo DiaSemana
    DiaSemana hoy;

    // 3. Asignamos un valor usando el nombre descriptivo
    hoy = MARTES;

    // 4. Podemos compararlos de forma legible
    if (hoy == SABADO || hoy == DOMINGO) {
        printf("Hoy es fin de semana!\n");
    } else {
        printf("Hoy es un dia de semana.\n");
    }

    // 5. Demostración: Internamente, 'hoy' guarda un número entero.
    // (MIERCOLES es 2, porque LUNES fue 0)

    printf("Valor numerico de 'hoy': %d\n", hoy); // Imprimirá 2
    for (int i = LUNES; i <= DOMINGO; i++){
      printf("Hoy es: %d\n", i);
    }

    return 0;
}
