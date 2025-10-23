#include <stdio.h>

// 1. Definimos los posibles estados de un semáforo
typedef enum {
  ROJO,
  AMARILLO,
  VERDE
} EstadoSemaforo;

// 2. Creamos una función que reacciona según el estado
void accionSemaforo(EstadoSemaforo estadoActual) {

  // 3. El 'switch' es mucho más legible que usar 'switch(numero)'
  switch (estadoActual) {
    case ROJO:
      printf("Accion: Detener el vehiculo.\n");
      break;
    case AMARILLO:
      printf("Accion: Bajar la velocidad, precaucion.\n");
      break;
    case VERDE:
      printf("Accion: Avanzar.\n");
      break;
      // 'default' no es estrictamente necesario si cubrimos todos los casos,
      // pero es buena práctica.
    default:
      printf("Accion: Estado desconocido (ERROR).\n");
      break;
  }
}

int main() {
  // 4. Probamos la función con diferentes estados
  EstadoSemaforo miSemaforo = ROJO;

  printf("El semaforo esta en ROJO.\n");
  accionSemaforo(miSemaforo);

  miSemaforo = VERDE;
  printf("\nEl semaforo cambio a VERDE.\n");
  accionSemaforo(miSemaforo);

  return 0;
}
