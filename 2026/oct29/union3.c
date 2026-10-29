#include <stdio.h>
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
  sensor_t sensores[3] = {
    {1, SENSOR_TEMPERATURA, {.temperatura = 24.5}},
    {2, SENSOR_DISTANCIA,   {.distancia = 300.4}},
    {3, SENSOR_TEMPERATURA, {.temperatura = 30.4}}
  };

  for (int i = 0; i < 3; i++){
    mostrarSensor(sensores[i]);
  }


  return 0;
}

