// Ejercicio 2: Control de un electrodoméstico
// Se desea desarrollar un programa para controlar el estado de un electrodoméstico. El dispositivo puede estar apagado, encendido o en modo de espera.
// 
// El programa debe permitir seleccionar el estado del dispositivo y mostrar un mensaje según la opción elegida.
// Requerimientos
// 1. Definir una enumeración llamada estadoDispositivo_t con los siguientes valores:
//    - APAGADO
//    - ENCENDIDO
//    - ESPERA
// 2. Implementar una función mostrarEstado que reciba un estado y muestre su descripción.
// 3. Implementar una función consumeEnergia que reciba un estado y devuelva:
//    - 1 si el dispositivo está encendido o en espera.
//    - 0 si el dispositivo está apagado.
// 4. En main, mostrar el siguiente menú:
// ------------------------------------------------------------
//    Seleccione el estado del dispositivo:
// 
//    1. Apagado
//    2. Encendido
//    3. En espera
// ------------------------------------------------------------
// 5. Leer la opción seleccionada y convertirla al estado correspondiente.
// 6. Mostrar el estado seleccionado e informar si el dispositivo consume energía.
// 7. Validar que la opción ingresada sea correcta.
#include <stdio.h>

// Definir la enumeracion estadoDispositivo_t
typedef enum{ ENCENDIDO, APAGADO, ESPERA }estadoDispositivo_t;


// Prototipos de funciones
void mostrarEstado(estadoDispositivo_t estado);

int consumeEnergia(estadoDispositivo_t estado);


int main() {
    int opcion;
    estadoDispositivo_t estado;


    do{
      // Mostrar el menu
      printf("0. ENCENDIDO\n");
      printf("1. APAGADO\n");
      printf("2. ESPERA\n");
      printf("Ingrese op: ");
      // Leer la opcion seleccionada
      scanf("%d", &opcion);
    }while(opcion != ENCENDIDO && opcion != APAGADO && opcion != ESPERA);

    // Asignar el estado correspondiente
    estado = opcion;


    // Mostrar el estado
    mostrarEstado(estado);


    // Informar si consume energia
    if(consumeEnergia(estado))
      printf("Consume enegergía\n");
    else
      printf("NO consume enegergía\n");


    return 0;
}


// Muestra el estado del dispositivo
void mostrarEstado(estadoDispositivo_t estado) {

    // Completar la funcion
    switch(estado){
    case ENCENDIDO:
      printf("Eqipo encendido\n");
    break;
    case APAGADO:
      printf("Eqipo apagado\n");
    break;
    case ESPERA:
      printf("Eqipo en espara\n");
    break;
    }

}


// Devuelve 1 si consume energia y 0 en caso contrario
int consumeEnergia(estadoDispositivo_t estado) {

    if(estado == ENCENDIDO || estado == ESPERA)
      return 1;
    else
      return 0;

}
