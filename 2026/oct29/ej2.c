#include <stdio.h>
// Ejercicio 1: Estado de un semáforo
// Temas: enum, struct, funciones y switch.
//
// Se desea desarrollar un programa para representar el estado de un semáforo.
//
// Cada semáforo posee un identificador numérico y un estado, que puede ser ROJO, AMARILLO o VERDE.
// Requerimientos
// 1. Definir una enumeración estadoSemaforo_t que represente los tres estados posibles.
// 2. Definir una estructura semaforo_t que contenga:
//    - Un identificador entero.
//    - El estado del semáforo.
// 3. Implementar una función cargarSemaforo que permita ingresar el identificador y seleccionar el estado del semáforo mediante un menú.
// 4. Implementar una función mostrarSemaforo que reciba un semáforo e imprima su información.
// 5. Implementar una función puedeAvanzar que reciba un semáforo y devuelva 1 si está en VERDE o 0 en caso contrario.
// 6. En main, declarar un semáforo, cargar sus datos y mostrar la información correspondiente.
// Condiciones:
// - Utilizar la enumeración para representar los estados.
// - Validar que el estado ingresado corresponda con una de las opciones disponibles.
// - Utilizar switch para mostrar el nombre del estado.

// Definir la enumeracion estadoSemaforo_t
typedef enum{
  ROJO,
  AMARILLO,
  VERDE
}estadoSemaforo_t;

// Definir la estructura semaforo_t
typedef struct{
  int id;
  estadoSemaforo_t estado_sem;
}semaforo_t;



// Prototipos de funciones
void cargarSemaforo(semaforo_t *sem){
  printf("Ingrese id:\n");
  scanf("%d", &sem->id);

  do{
    printf("Ingrese color:");
    printf("0. ROJO\n");
    printf("1. AMARILLO\n");
    printf("2. VERDE\n");
    int temp;
    scanf("%d", &temp);
    sem->estado_sem = temp;
  }while(temp < 0 || temp > 2);

}

void mostrarSemaforo(/* completar */);

int puedeAvanzar(/* completar */);


int main() {
    // Declarar una variable de tipo semaforo_t
    semaforo_t semaforo;


    // Cargar los datos
    cargarSemaforo(&semáforo);


    // Mostrar la informacion


    // Informar si se puede avanzar


    return 0;
}
