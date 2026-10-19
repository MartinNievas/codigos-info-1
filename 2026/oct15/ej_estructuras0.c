#include <stdio.h>
// Ejercicio 1. Registro de una persona
// Dificultad: fácil. Declaración, inicialización y acceso a los miembros.
// Enunciado
// Desarrollar un programa en C que permita almacenar y mostrar los datos de una persona utilizando una estructura denominada Persona.
// La estructura debe contener los siguientes miembros:
// - nombre: arreglo de caracteres de hasta 49 caracteres.
// - edad: número entero.
// - altura: número real.
// - dni: número entero.
// El programa debe realizar las siguientes operaciones:
// 1. Declarar la estructura Persona.
// 2. Crear una variable de ese tipo.
// 3. Solicitar al usuario los datos de la persona.
// 4. Almacenar los datos en los miembros correspondientes.
// 5. Mostrar todos los datos ingresados.
// Requisitos
// - Utilizar struct.
// - Acceder a los miembros mediante el operador punto (.).
// - Utilizar scanf() para leer los datos numéricos.
// - No utilizar punteros a estructuras.
// -----------------------------------------
// Ejemplo:
// Ingrese nombre: Martin
// Ingrese edad: 25
// Ingrese altura: 1.78
// Ingrese DNI: 30123456
//
// DATOS DE LA PERSONA
// Nombre: Martin
// Edad: 25
// Altura: 1.78
// DNI: 30123456

typedef struct {
  char nombre[100];
  unsigned int edad;
  float altura;
  unsigned int dni;
}persona_t;


int main(void) {

  persona_t persona;
  printf("Ingrese el nombre: ");
  scanf("%s", persona.nombre);
  printf("Ingrese el edad: ");
  scanf("%u", &persona.edad);


  printf("Nombre: %s\n", persona.nombre);
  printf("edad: %u\n", persona.edad);
  return 0;
}
