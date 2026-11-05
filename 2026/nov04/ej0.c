#include <stdio.h>
#include <stdlib.h>

#define TAM 10

/*
Enunciado:

Desarrollar un programa que permita registrar vehículos de un
estacionamiento y calcular el importe que debe abonar cada uno.

Cada vehículo está representado mediante una estructura que contiene:
- Patente (representada mediante un número entero).
- Horas estacionado.
- Tipo de vehículo.
- Importe a pagar.
- Estado de pago.

El programa debe:

1. Solicitar al usuario la cantidad de vehículos a registrar,
   validando que se encuentre entre 0 y TAM.

2. Reservar dinámicamente la memoria necesaria para almacenar
   los vehículos.

3. Cargar los datos de cada vehículo mediante una función:
   - Patente numérica: entre 1000 y 9999.
   - Horas estacionado: entre 1 y 24.
   - Tipo de vehículo:
       A: Automóvil.
       M: Motocicleta.
       C: Camioneta.

4. Calcular el importe a pagar y determinar el estado de pago
   mediante una función.

   El costo por hora depende del tipo de vehículo:
       A: $2000 por hora.
       M: $1000 por hora.
       C: $3000 por hora.

   El estado de pago se determina según el importe:
       P: Pago alto, importe >= 30000.
       N: Pago normal, importe >= 10000 y < 30000.
       B: Pago bajo, importe < 10000.

5. Implementar una función imprimirPagosAltos() que muestre
   únicamente los vehículos cuyo estado de pago sea P.

Utilizar:
- Un arreglo dinámico de estructuras.
- Funciones que reciban un arreglo de estructuras.
- malloc() para reservar memoria dinámicamente.
- free() para liberar la memoria reservada.

No utilizar punteros a estructuras.
*/

typedef struct veh{
  int patente;
  int horas;
  char tipo;
  float importe;
  char estado;
} vehiculo_t;

/*
 * Solicita la cantidad de vehículos y valida que se encuentre
 * dentro del intervalo [min, max].
 *
 * Retorna la cantidad validada.
 */
int ingresarTamValidado(int min, int max) {
  int num;
  do{
    printf("Ingrese num: ");
    scanf("%d", &num);
  }while(num < min || num > max);

  return num;
}

/*
 * Carga los datos de los vehículos.
 *
 * Parámetros:
 *   arr  -> arreglo de estructuras vehiculo_t
 *   cant -> cantidad de vehículos
 *
 * Validar:
 *   - Patente entre 1000 y 9999.
 *   - Horas estacionado entre 1 y 24.
 *   - Tipo de vehículo: A, M o C.
 *
 * Utilizar:
 *   (base + indice)->miembro
 */
void cargarVehiculos(vehiculo_t *arr, int cant) {

  // Recorrer el arreglo
  // Solicitar y validar la patente
  // Solicitar y validar las horas estacionado
  // Solicitar y validar el tipo de vehículo
  for(int i = 0; i < cant; i+=1){
    int pat;

    do{
      printf("Ingrese patente: ");
      scanf("%d", &pat);
    }while(pat < 1000 || pat> 9999 );
    (arr+i)->patente = pat;

    int horas;
    do{
      printf("Ingrese horas: ");
      scanf("%d", &horas);
    }while(horas < 1 || horas > 24);
    (arr+i)->horas = horas;

    char tipo;
    do{
      printf("Ingrese tipo: ");
      scanf(" %c", &tipo);
    }while(tipo != 'A' && tipo != 'C' && tipo != 'M');
    arr[i].tipo = tipo;
    (*(arr+i)).tipo = tipo;

  }

}

/*
 * Calcula el importe y determina el estado de pago.
 *
 * Costo por hora:
 *   A: $2000
 *   M: $1000
 *   C: $3000
 *
 * Estado:
 *   P: importe >= 30000
 *   N: importe >= 10000 y menor que 30000
 *   B: importe < 10000
 *
 * Utilizar:
 *   (base + indice)->miembro
 */
void calcularImportes(vehiculo_t *arr, int cant) {

  // Recorrer el arreglo de vehículos
  // Determinar el costo por hora según el tipo
  // Calcular el importe total
  // Determinar el estado de pago
  // Almacenar el importe y el estado
  for(int i = 0; i < cant; i++){

    if((arr+i)->tipo == 'A')
      (arr+i)->importe = 2000 * (arr+i)->horas;
    else if((arr+i)->tipo == 'M')
      (arr+i)->importe = 1000 * (arr+i)->horas;
    else
      (arr+i)->importe = 3000 * (arr+i)->horas;

    if((arr+i)->importe >= 30000)
      (arr+i)->estado = 'P';
    else if ((arr+i)->importe >= 10000)
      (arr+i)->estado = 'N';
    else
      (arr+i)->estado = 'B';

  }

}

/*
 * Imprime únicamente los vehículos cuyo estado de pago sea P.
 *
 * Mostrar:
 *   - Patente.
 *   - Horas estacionado.
 *   - Tipo de vehículo.
 *   - Importe a pagar.
 *   - Estado de pago.
 *
 * Utilizar:
 *   (base + indice)->miembro
 */
void imprimirPagosAltos(vehiculo_t *arr, int cant) {

  for (int i = 0; i < cant; ++i){
    if((arr+i)->estado == 'P'){
      printf("Patente: %d", (arr+i)->patente);
      printf("Horas: %d", (arr+i)->horas);
      printf("Tipo: %c", (arr+i)->tipo);
      printf("Importe: %f", (arr+i)->importe);
    }
  }
}

/*
 * Imprime únicamente los vehículos cuyo estado de pago sea P.
 *
 * Mostrar:
 *   - Patente.
 *   - Horas estacionado.
 *   - Tipo de vehículo.
 *   - Importe a pagar.
 *   - Estado de pago.
 *
 * Utilizar:
 *   (base + indice)->miembro
 */

/*
 * Imprime únicamente los vehículos cuyo estado de pago sea P.
 *
 * Mostrar:
 *   - Patente.
 *   - Horas estacionado.
 *   - Tipo de vehículo.
 *   - Importe a pagar.
 *   - Estado de pago.
 *
 * Utilizar:
 *   (base + indice)->miembro
 */

int main(void) {

  vehiculo_t *vehiculos;

  int tam;

  // Solicitar la cantidad de vehículos
  tam = ingresarTamValidado(0, TAM);

  // Reservar memoria dinámica
  vehiculos = malloc( tam * sizeof(vehiculo_t));

  // Verificar si malloc() fue exitoso
  if(vehiculos == NULL){
    return -1;
  }

  // Cargar los vehículos
  cargarVehiculos(vehiculos, tam);

  // Calcular los importes y estados de pago
  calcularImportes(vehiculos, tam);

  // Mostrar los vehículos con pagos altos
  imprimirPagosAltos(vehiculos, tam);

  // Liberar la memoria dinámica
  free(vehiculos);

  return 0;
}
