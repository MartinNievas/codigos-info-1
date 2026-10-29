#include <stdio.h>
// Utilizamos una unión dentro de una estructura para representar un sensor que puede medir temperatura o distancia.
//
// En un sistema tenemos dos tipos de sensores:
// - Sensor de temperatura: almacena una medición en grados Celsius.
// - Sensor de distancia: almacena una medición en centímetros.
// Cada sensor tiene un identificador y un tipo. Según el tipo de sensor, se debe interpretar el dato almacenado en la unión.

// Enumeracion para identificar el tipo de sensor
typedef enum {
    SENSOR_TEMPERATURA,
    SENSOR_DISTANCIA
} tipoSensor_t;

// Union para almacenar la medicion
typedef union {
    float temperatura;
    float distancia;
} medicion_t;

// Estructura que representa un sensor
typedef struct {
    int identificador;
    tipoSensor_t tipo;
    medicion_t medicion;
} sensor_t;


// Muestra la informacion del sensor
void mostrarSensor(sensor_t sensor) {

    printf("Identificador: %d\n", sensor.identificador);

    switch (sensor.tipo) {
        case SENSOR_TEMPERATURA:
            printf("Tipo: Temperatura\n");
            printf("Medicion: %.2f grados Celsius\n",
                   sensor.medicion.temperatura);
            break;

        case SENSOR_DISTANCIA:
            printf("Tipo: Distancia\n");
            printf("Medicion: %.2f centimetros\n",
                   sensor.medicion.distancia);
            break;

        default:
            printf("Tipo de sensor desconocido\n");
            break;
    }
}


int main() {
    sensor_t sensor1;
    sensor_t sensor2;

    // Configurar el primer sensor
    sensor1.identificador = 1;
    sensor1.tipo = SENSOR_TEMPERATURA;
    sensor1.medicion.temperatura = 24.5;

    // Configurar el segundo sensor
    sensor2.identificador = 2;
    sensor2.tipo = SENSOR_DISTANCIA;
    sensor2.medicion.distancia = 125.8;

    // Mostrar los sensores
    printf("=== SENSOR 1 ===\n");
    mostrarSensor(sensor1);

    printf("\n=== SENSOR 2 ===\n");
    mostrarSensor(sensor2);

    return 0;
}
