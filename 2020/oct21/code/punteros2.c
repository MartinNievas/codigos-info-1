#include <stdio.h>
#define TAM 10

typedef struct{
  char nombre[20];
  int dni;
}persona_t;

// Función que recibe un puntero a un arreglo de tipo persona_t
// y su tamaño.
// Dentro de esta función se deben cargar la cantidad de personas
// indicadas por el segundo parámetro.
// Se debe validar que el dni de la persona sea positivo.
void ingresar_personas(persona_t*, int);

// Esta función es igual a la de arriba, pero ahora hay que utilizar
// punteros (el operador flecha ->)
void ingresar_personas(persona_t *personas, int);


int main(void) {

  persona_t personas[TAM];
  int cant;

  // Solicitar al usuario la cantidad de personas que desea ingresar
  // validando que sea un número positivo y menor que TAM


  ingresar_personas(personas, cant);


  return 0;
}
