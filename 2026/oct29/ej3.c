// Ejercicio 2: Identificación de dispositivos
// Se necesita representar diferentes dispositivos electrónicos. Cada dispositivo tiene un código, un tipo y un dato específico que depende de su tipo.
// Los dispositivos disponibles son:
// Tipo de dispositivo	Dato específico
// Sensor de temperatura	Temperatura en grados Celsius (float)
// Sensor de distancia	Distancia medida en centímetros (int)
// Indicador luminoso	Estado encendido o apagado (int)
//
//
// Para ahorrar memoria, se desea utilizar una unión que permita almacenar solamente el dato correspondiente al tipo de dispositivo seleccionado.
// Requerimientos
// 1. Definir una enumeración tipoDispositivo_t con los valores:
//    - TEMPERATURA
//    - DISTANCIA
//    - INDICADOR
// 2. Definir una unión datoDispositivo_t que permita almacenar:
//    - Una temperatura de tipo float.
//    - Una distancia de tipo int.
//    - Un estado de tipo int.
// 3. Definir una estructura dispositivo_t que contenga:
//    - Un código entero.
//    - El tipo de dispositivo.
//    - La unión con el dato correspondiente.
// 4. Implementar una función cargarDispositivo que solicite el código, el tipo y el dato específico.
// 5. Implementar una función mostrarDispositivo que imprima la información almacenada.
// 6. En main, declarar un dispositivo, cargar sus datos y mostrarlos.
// Condiciones:
// - Utilizar enum para identificar el tipo de dispositivo.
// - Utilizar union para almacenar el dato específico.
// - Utilizar switch para seleccionar qué miembro de la unión debe leerse o modificarse.
// - Validar el tipo de dispositivo ingresado.
#include <stdio.h>

// Definir la enumeracion tipoDispositivo_t


// Definir la union datoDispositivo_t


// Definir la estructura dispositivo_t


// Prototipos de funciones
void cargarDispositivo(/* completar */);

void mostrarDispositivo(/* completar */);


int main() {
    // Declarar una variable de tipo dispositivo_t


    // Cargar los datos del dispositivo


    // Mostrar los datos cargados


    return 0;
}
