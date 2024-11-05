#include <stdio.h>

// Función para imprimir un número en formato binario (8 bits)
void imprimir_bits(unsigned char num) {
    for (int i = 7; i >= 0; i--) {
        printf("%u", (num >> i) & 1);
    }
    printf("\n");
}

int main(void) {
    unsigned char numero;
    int bitPos;
    char opcion;

    // Solicitar al usuario un número entre 0 y 255
    printf("Ingrese un número entre 0 y 255: ");
    scanf("%hhu", &numero);

    printf("Número ingresado: %d\n", numero);
    printf("Bits: ");
    imprimir_bits(numero);

    // Solicitar al usuario la posición del bit a modificar
    printf("Ingrese la posición del bit que desea modificar (0-7): ");
    scanf("%d", &bitPos);

    if (bitPos < 0 || bitPos > 7) {
        printf("Posición de bit inválida.\n");
        return 1;
    }

    // Elegir la operación: encender (|) o apagar (&)
    printf("¿Desea encender (e) o apagar (a) el bit %d? ", bitPos);
    scanf(" %c", &opcion);

    unsigned char mask = 1 << bitPos;  // Crear la máscara para la posición seleccionada

    if (opcion == 'e') {
        numero = numero | mask;  // Encender el bit usando OR
    } else if (opcion == 'a') {
        numero = numero & ~mask;  // Apagar el bit usando AND con máscara negada
    } else {
        printf("Opción inválida.\n");
        return 1;
    }

    // Mostrar el nuevo número y su representación en bits
    printf("Nuevo número: %d\n", numero);
    printf("Bits: ");
    imprimir_bits(numero);

    return 0;
}
