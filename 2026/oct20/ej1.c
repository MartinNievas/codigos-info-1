#include <stdio.h>
#include <stdlib.h>
#define TAM 10

/*
Enunciado:

Desarrollar un programa que permita registrar las notas de un
grupo de alumnos y determinar su condición académica.

Cada alumno está representado mediante una estructura que contiene:
- Legajo.
- Tres notas.
- Promedio.
- Estado académico.

El programa debe:

1. Solicitar al usuario la cantidad de alumnos a registrar,
   validando que se encuentre entre 0 y TAM.

2. Reservar dinámicamente la memoria necesaria para almacenar
   los alumnos.

3. Cargar el legajo y las tres notas de cada alumno mediante
   una función. Las notas deben encontrarse entre 0 y 10.

4. Calcular el promedio y determinar el estado académico de
   cada alumno mediante una función, según las siguientes reglas:
   - P: Promociona, si el promedio es mayor o igual a 8.
   - R: Regular, si el promedio es mayor o igual a 6 y menor que 8.
   - A: Aplazo, si el promedio es menor que 6.

5. Imprimir únicamente los alumnos que promocionan, mostrando
   su legajo, las tres notas, el promedio y el estado académico.

Utilizar:
- Un arreglo dinámico de estructuras.
- Funciones que reciban un arreglo de estructuras.
- malloc() para reservar memoria dinámicamente.
- free() para liberar la memoria reservada.

No utilizar punteros a estructuras.
*/

typedef struct {
  int legajo;
  int nota1;
  int nota2;
  int nota3;
  float promedio;
  char estado;
} alumno_t;

/*
 * Solicita al usuario una cantidad de alumnos y valida que
 * se encuentre dentro del intervalo [min, max].
 *
 * Parámetros:
 *   min -> cantidad mínima permitida
 *   max -> cantidad máxima permitida
 *
 * Retorna la cantidad validada.
 */
int ingresarTamValidado(int min, int max) {

  int tam;

  do{
    // Solicitar la cantidad de alumnos
    printf("Ingrese el número: ");
    scanf("%d", &tam);
    // Validar que la cantidad se encuentre entre min y max
  }while(tam < min || tam > max);
  // Retornar la cantidad validada
  return tam;

}

int cargarNota(void){
  int nota;
  do { 
    printf("Ingrese nota: ");
    scanf("%d", &nota);
  }while(nota < 0 || nota > 10);
  return nota;
}

/*
 * Carga el legajo y las tres notas de cada alumno.
 *
 * Parámetros:
 *   arr  -> arreglo de estructuras alumno_t
 *   cant -> cantidad de alumnos a cargar
 *
 * Para cada alumno:
 *   - Solicitar el legajo.
 *   - Solicitar las tres notas.
 *   - Validar que cada nota se encuentre entre 0 y 10.
 *
 * Utilizar aritmética de punteros para acceder a los miembros:
 *   (base + indice)->miembro
 *
 * No cargar el promedio ni el estado en esta función.
 */
void cargarAlumnos(alumno_t *arr, int cant) {

  // Recorrer el arreglo y solicitar los datos de cada alumno
  for(int i = 0; i < cant ; i += 1){
    // Cargar el legajo
    printf("Legajo: ");
    //scanf("%d", &(*(arr + i)).legajo );
    scanf("%d", &(arr + i)->legajo );

    // Solicitar y validar la primera nota
    (arr+i)->nota1 = cargarNota();
    (arr+i)->nota2 = cargarNota();
    (arr+i)->nota3 = cargarNota();
  }

}

/*
 * Calcula el promedio y determina el estado académico
 * de cada alumno.
 *
 * Parámetros:
 *   arr  -> arreglo de estructuras alumno_t
 *   cant -> cantidad de alumnos a procesar
 *
 * El promedio se calcula como la suma de las tres notas
 * dividida por 3.0.
 *
 * Determinar el estado según las siguientes condiciones:
 *   P: promedio >= 8
 *   R: promedio >= 6 y promedio < 8
 *   A: promedio < 6
 *
 * Utilizar aritmética de punteros para acceder a los miembros:
 *   (base + indice)->miembro
 */
void calcularPromedios(alumno_t *arr, int cant) {

  // Recorrer el arreglo de alumnos
  for (int i = 0; i < cant; i++){
    // Calcular el promedio de cada alumno
    (arr + i)-> promedio = ((arr+i)->nota1 + (arr+i)->nota2 + (arr+i)->nota3)/3.0;

    // Determinar el estado académico según el promedio
    // Almacenar el promedio y el estado en la estructura
    if((arr+i)->promedio >= 8){
      (arr+i)->estado = 'P';
    } else if ((arr+i)->promedio >= 6){
      (arr+i)->estado = 'R';
    } else {
      (arr+i)->estado = 'A';
    }
  }

}

/*
 * Imprime únicamente los alumnos que promocionan.
 *
 * Parámetros:
 *   arr  -> arreglo de estructuras alumno_t
 *   cant -> cantidad de alumnos a procesar
 *
 * Un alumno promociona cuando su estado es 'P'.
 *
 * Mostrar para cada alumno promocionado:
 *   - Legajo.
 *   - Nota 1.
 *   - Nota 2.
 *   - Nota 3.
 *   - Promedio.
 *   - Estado académico.
 *
 * Utilizar aritmética de punteros para acceder a los miembros:
 *   (base + indice)->miembro
 */
void imprimirPromocionados(alumno_t *arr, int cant) {

  // Recorrer el arreglo de alumnos
  for (int i = 0; i < cant; i++){
    if ( (arr+i)->estado  == 'P'){
      printf("Legajo: %d", (arr+i)->legajo);
      printf("Nota1: %d", (arr+i)->nota1);
      printf("Nota2: %d", (arr+i)->nota2);
      printf("Nota2: %d", (arr+i)->nota3);
      printf("Promedio: %f", (arr+i)->promedio);
    }
  }

  // Verificar si el estado académico es 'P'

  // Mostrar los datos de los alumnos promocionados

}

/*
 * Función principal.
 *
 * Coordina el ingreso de datos, el cálculo de los promedios
 * y la impresión de los alumnos promocionados.
 */
int main(void) {

  alumno_t *alumnos;
  int tam;

  // Solicitar la cantidad de alumnos y validar entre 0 y TAM
  tam = ingresarTamValidado(0, TAM);

  // Reservar memoria dinámica para almacenar los alumnos
  alumnos = malloc(tam * sizeof(alumno_t));
  // Verificar si la reserva de memoria fue exitosa
  if(alumno == NULL){
    printf("ERROR\n");
    return -1;
  }

  // Cargar el legajo y las notas de los alumnos
  cargarAlumnos(alumnos, tam);

  // Calcular el promedio y el estado académico de cada alumno
  calcularPromedios(alumnos, tam);

  // Imprimir únicamente los alumnos promocionados
  imprimirPromocionados(alumnos, tam);

  // Liberar la memoria reservada dinámicamente
  free(alumnos);

  return 0;
}
