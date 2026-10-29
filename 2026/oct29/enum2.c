#include <stdio.h>

// Definicion de la enumeracion
typedef enum {
    DETENIDA,
    FUNCIONANDO,
    MANTENIMIENTO
} estadoMaquina_t;

// Prototipos
void mostrarEstado(estadoMaquina_t estado);
int estaFuncionando(estadoMaquina_t estado);

int main() {
    estadoMaquina_t estado;

    // Asignar un estado a la maquina
    estado = FUNCIONANDO;

    // Mostrar el estado actual
    mostrarEstado(estado);

    // Consultar si la maquina esta funcionando
    if (estaFuncionando(estado)) {
        printf("La maquina esta funcionando.\n");
    } else {
        printf("La maquina no esta funcionando.\n");
    }

    return 0;
}

// Muestra el nombre del estado
void mostrarEstado(estadoMaquina_t estado) {
    switch (estado) {
        case DETENIDA:
            printf("Estado: Detenida\n");
            break;

        case FUNCIONANDO:
            printf("Estado: Funcionando\n");
            break;

        case MANTENIMIENTO:
            printf("Estado: Mantenimiento\n");
            break;

        default:
            printf("Estado desconocido\n");
            break;
    }
}

// Devuelve 1 si la maquina esta funcionando
int estaFuncionando(estadoMaquina_t estado) {
    return estado == FUNCIONANDO;
}
