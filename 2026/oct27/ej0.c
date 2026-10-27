// Ejercicio 1: Clasificación de una nota
// Una institución educativa necesita un programa para clasificar el resultado de un estudiante a partir de una nota numérica.
//
// La clasificación se realizará utilizando una enumeración.
// Requerimientos
// 1. Definir una enumeración llamada resultado_t con los siguientes valores:
//    - DESAPROBADO
//    - APROBADO
//    - PROMOCIONADO
// 2. Solicitar al usuario una nota entera entre 0 y 10.
// 3. Implementar una función llamada calcularResultado que reciba la nota y devuelva el resultado correspondiente según las siguientes reglas:
//    Nota          | Resultado
//    ----------------------------
//    Menor que 6   | DESAPROBADO
//    Entre 6 y 7   | APROBADO
//    Entre 8 y 10  | PROMOCIONADO
// 4. Implementar una función mostrarResultado que reciba un valor de tipo resultado_t e imprima el nombre del resultado.
// 5. En main, ingresar la nota, calcular el resultado y mostrarlo.
// 6. Validar que la nota ingresada esté comprendida entre 0 y 10.
#include <stdio.h>

// Definir la enumeracion resultado_t


// Prototipos de funciones
resultado_t calcularResultado(int nota);

void mostrarResultado(resultado_t resultado);


int main() {
    int nota;

    // Solicitar la nota al usuario


    // Validar que la nota este entre 0 y 10


    // Calcular el resultado


    // Mostrar el resultado


    return 0;
}


// Recibe una nota y devuelve el resultado correspondiente
resultado_t calcularResultado(int nota) {

    // Completar la funcion

}


// Recibe un resultado e imprime su descripcion
void mostrarResultado(resultado_t resultado) {

    // Completar la funcion

}
