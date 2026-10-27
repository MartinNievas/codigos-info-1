
//EJ 2. BY MAKU Y ANA 
#include <stdio.h>

// Definir la enumeracion estadoDispositivo_t
typedef enum{
  APAGADO = 4,
  ENCENDIDO,
  ESPERA
}estadoDispositivo_t;

// Prototipos de funciones
void mostrarEstado(estadoDispositivo_t estado);
int consumeEnergia(estadoDispositivo_t estado);


int main() {
  int opcion;
  estadoDispositivo_t estado;

  // Mostrar el menu
  // Leer la opcion seleccionada
  // Validar la opcion
  // Asignar el estado correspondiente
  // Mostrar el estado
  // Informar si consume energia
  do{
    printf("Seleccione el estado del dispositivo:\n 1. Apagado\n 2. Encendido\n 3. En espera\n");
    scanf("%d", &opcion);
  } while(opcion > 3 || opcion < 1);

  switch(opcion){
    case 1: 
      estado = APAGADO;
      break;
    case 2: 
      estado = ENCENDIDO;
      break;
    case 3: 
      estado = ESPERA;
      break;
  }

  mostrarEstado(estado);
  if (consumeEnergia(estado) == 1)
    printf("Esta consumiento energia.\n");
  else
    printf("No esta consumiento energia.\n");


  return 0;
}

// Muestra el estado del dispositivo
void mostrarEstado(estadoDispositivo_t estado) {
  switch(estado){
    case APAGADO:
      printf("El estado del dispositivo es: Apagado\n");
      break;
    case ENCENDIDO:
      printf("El estado del dispositivo es: Encendido\n");
      break;
    case ESPERA:
      printf("El estado del dispositivo es: En espera\n");
      break;
  }
}

// Devuelve 1 si consume energia y 0 en caso contrario
int consumeEnergia(estadoDispositivo_t estado) {
  if (estado == APAGADO){
    return 0;
  }else{ 
    return 1;
  }
}
